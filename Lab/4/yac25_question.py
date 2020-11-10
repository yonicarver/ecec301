class Question(object):

    def __init__(self):
        """
        init function
        """
        self._answer = ''
        self._question = ''

    def setText(self, question):
        self._question = question

    def text(self):
        return self._question

    def setAnswer(self, answer):
        self._answer = answer

    def checkAnswer(self, given_answer):
        return self._answer == given_answer

class ChoiceQuestion(Question):

    def __init__(self):
        """ constructor  """
        super(ChoiceQuestion, self).__init__()
        self._choices = []

    def setText(self, question):
        self._question = question

    def addChoice(self, choice, is_correct=False):
        self._choices.append(choice)

        if is_correct:
            self.setAnswer(choice)

    def checkAnswer(self, given_answer):
        given_answer_index = int(given_answer) - 1

        if given_answer_index > len(self._choices):
            return False

        return self._answer == self._choices[given_answer_index]

    def __iter__(self):
        return ChoiceQuestionIterator(self._choices)

class ChoiceQuestionIterator(object):

    def __init__(self, choices):
        """
        constructor that takes in the choices as a list
        """

        self._choices = choices
        self._index = 0

    def __iter__(self):
        return self

    def next(self):
        try:
            ret = self._choices[self._index]
        except IndexError:
            raise StopIteration

        self._index += 1
        return ret

def presetnQuestion(question):
    print question.text()

    if isinstance(question, ChoiceQuestion):
        for i, choice in enumerate(question):
            print "%i: %s" % (i+1, choice)

    result = question.checkAnswer(raw_input())

    print "your answer was",
    print "correct" if result else "incorrect"


if __name__ ==  "__main__":
    cq = ChoiceQuestion()

    cq.setText("What is my name?")
    cq.addChoice("Reno", True)
    cq.addChoice("Steve")
    cq.addChoice("Yoni")
    cq.addChoice("Other name")

    q = Question()
    q.setText('What is my name?')
    q.setAnswer('Reno')

    presetnQuestion(q)
    presetnQuestion(cq)

