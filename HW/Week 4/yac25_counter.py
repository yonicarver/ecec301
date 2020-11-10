"""
@author: yonic
"""
from string import punctuation

class CharCounter(object):

    def __init__(self, file_name, length):
        self._file_name = file_name
        self._file_object = open(self._file_name,'r')
        self._text = self._file_object.read().split()
        self._file_object.close()

        self._length = length
        self._len_words = []
        for word in self._text:
            word = word.strip()
            word = word.translate(None, punctuation)
            if len(word) == self._length:
                self._len_words.append(word)

    def __iter__(self):
        for i in self._len_words:
            yield i

if __name__ == '__main__':
    for word in CharCounter('agency.txt.',11):
        print "'%s'" % word
