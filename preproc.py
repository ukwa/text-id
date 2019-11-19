import re
from sklearn.feature_extraction.text import strip_accents_unicode

fmt_dirs = ['c', 'h', 'cpp', 'js', 'java', 'css', 'tsv', 'csv', 'py', 'f90']
#fmt_dirs = [f for f in listdir(training_path) if isdir(join(training_path, f))]

# Maybe map multiple formats like this instead?
fmts = {
    'c++': ['cc', 'cxx', 'cpp', 'c++'],
    'h++': [ 'hxx', 'hpp', 'h++'],
    'csv': ['csv', 'tsv'] # i.e. treat all XSV as the same format (with internal variations the classifier should cope with)?
}

# See http://gcc.gnu.org/onlinedocs/gcc-4.3.6/gcc/Overall-Options.html

def obliviate(text):
    # Drop non-ascii characters:
    text = strip_accents_unicode(text)
    # replace numbers with 0
    text = re.sub(r"[0-9]+", "0", text)
    # replace upper-case letters with A
    text = re.sub(r"[A-Z]+", "A", text)
    # replace lower-case letters with a
    text = re.sub(r"[a-z]+", "a", text)
    # Turn newlines into N
    text = re.sub(r"\n", "N\n", text)
    return text

def unrepeat(text):
    # Drop all repeats:
    if len(text) > 1:
        t2 = text[0]
        i = 1
        while i < len(text):
          if text[i] != text[i-1]:
              t2 += text[i]
          i += 1
        text += '---\n' +  t2
    return text


