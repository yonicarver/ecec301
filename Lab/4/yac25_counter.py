import string

class CharCounterIterator(object):
    def __init__(self, word_list):
        self._word_list = word_list
        self._index = 0

    def __iter__(self):
        return self

    def next(self):
        try:
            ret = self._word_list[self._index]
        except IndexError:
            raise StopIteration

        self._index += 1
        return ret

class CharCounter(object):
    def __init__(self, file_path, word_size):

        self._word_list = []
        with open(file_path) as text_file:

            for line in text_file:

                for word in line.split():
                    word = word.strip()
                    word = word.rstrip()
                    word = word.translate(None, string.punctuation)

                    if len(word) == word_size:
                        self._word_list.append(word)

    def __iter__(self):
        return CharCounterIterator(self._word_list)

if __name__ == '__main__':
    CharCounter('agency.txt', 11)

    for word in CharCounter('agency.txt', 11):
        print "'%s'" % word
