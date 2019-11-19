import pandas as pd
from sklearn.feature_extraction.text import TfidfVectorizer, CountVectorizer
from sklearn.naive_bayes import MultinomialNB
from sklearn.pipeline import make_pipeline
from sklearn.metrics import confusion_matrix
from sklearn.svm import SVC
from preproc import obliviate, fmt_dirs, load_fmt_files

print(fmt_dirs)
training_path = 'training-data'

print("loading...")
train_data, train_target, train_names = load_fmt_files(training_path)
test_data, test_target, test_names = load_fmt_files('test-data')

model = make_pipeline(
    #CountVectorizer(analyzer='char', ngram_range=(3,3)), 
    TfidfVectorizer(analyzer='char', ngram_range=(3,3), use_idf=True), 
    MultinomialNB()
    #SVC(kernel='rbf', class_weight='balanced', gamma='scale') # -> 'scale'
)

print('fitting...')
model.fit(train_data, train_target)
print('testing...')
labels = model.predict(test_data)
#print('probabilities...')
#probs = model.predict_proba(test_data)

fails = 0
for i, j in enumerate(labels):
    if j != test_target[i]:
        # index, predicted label int, actual label int, predicted label str, actual label str 
        print(i, j, test_target[i], fmt_dirs[j], fmt_dirs[test_target[i]], test_names[i]) # probs[i]
        fails += 1

print(confusion_matrix(test_target, labels))
print(fails, len(labels), 100.0 * fails/len(labels))

# ngrams are working okay, but longer-range structures are not well represented.

# BIGRAMS 
#     ['c++', 'py', 'css', 'js', 'tsv', 'java', 'h', 'csv', 'c', 'f90'] PREDICTED
# c++ [[47  0  2  0  0  0  2  0  0  0]
# py   [ 0 53  0  0  0  0  0  0  0  0]
# css  [ 0  1 51  0  0  0  0  0  0  0]
# js   [14 23  2 46  0 13  2  0  0  0]
# tsv  [ 3  5  0  0 84  0  1  7  0  1]
# java [ 1  0  0  0  3 41  6  0  0  0]
# h    [ 2  1  0  0  0  1 42  0  5  0]
# csv  [ 2  0  7  0  0  0  0 81  0 11]
# c    [ 3  0  0  0  0  0  0  0 48  0]
# f90  [ 0  1  0  0  0  0  2  0  0 48]]
# TRUE
#
# TRIGRAMS
# [[48  0  1  0  0  0  0  0  0  0]
#  [ 0 44  0  0  0  0  0  0  0  0]
#  [ 0  0 51  0  0  0  0  0  0  0]
#  [ 1  5  1 64  0 24  2  0  0  0]
#  [ 1  4  0  0 86  1  1  8  0  0]
#  [ 0  0  0  0  0 49  0  0  0  0]
#  [ 2  0  0  0  0  0 44  0  4  0]
#  [ 6  1  8  0  0  0  0 84  0  0]
#  [ 2  0  0  0  0  0  0  0 49  0]
#  [ 0  0  0  0  0  0  0  0  0 51]]
# 72 642