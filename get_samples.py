import os
import json
import requests
import re
import time
from preproc import obliviate

def download_file(url, local_filename, obliviate_text=True):
    r = requests.get(url, stream=True)
    if r.status_code == 200:
        with open(local_filename, 'wb') as f:
            if obliviate_text:
                f.write(obliviate(r.text).encode('utf-8'))
            else:
                f.write(r.content)
 
    r.close()

def download_files_for_ext(output_folder, extension, num_files):
    qh = {
        "Accept": "application/vnd.github.mercy-preview+json",
        "Authorization": "token %s" % os.environ['GH_API_TOKEN']
    }
    qp = { 
        "q": "extension:%s filename:%s sort:indexed" % (extension, extension), 
        "per_page": num_files
    }
    r = requests.get("https://api.github.com/search/code", params=qp, headers=qh)

    if r.status_code == 200:
        res = json.loads(r.text)
        index = 0
        for item in res['items']:
            index += 1
            print(item['name'])
            # Determine download URL from HTML URL (by convention):
            dl_url = item['html_url'].replace('/blob/','/').replace('https://github.com/','https://raw.githubusercontent.com/')
            print(dl_url)
            ext_dir = os.path.join(output_folder, extension)
            if not os.path.exists(ext_dir):
                os.makedirs(ext_dir)
            download_file(dl_url, "%s/%i-%s" %(ext_dir, index, item['name']) )
            time.sleep(2)
    else:
        print(r.status_code)
        print(r.text)

# "html_url":               https://github.com/storm-fsv-cvut/smoderp2d/blob/31c055fc43091e53311e1def6e25586a92cb5b6e/tests/data/dem10m/w001001x.adf
# "download_url": https://raw.githubusercontent.com/storm-fsv-cvut/smoderp2d/31c055fc43091e53311e1def6e25586a92cb5b6e/tests/data/dem10m/w001001x.adf

# ['c', 'h', 'c++', 'js', 'java', 'css', 'tsv', 'csv', 'py', 'f90']
#for i in range(1,10):
for ext in ['c', 'h', 'cpp', 'js', 'java', 'css', 'tsv', 'csv', 'py', 'f90']:
    download_files_for_ext('training-data', ext, 100)
    #download_files_for_ext('test-data', ext, 10)
    time.sleep(10)
