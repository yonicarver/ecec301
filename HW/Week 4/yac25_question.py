class Question(object):

    def __init__(self):
        """ store question & answer as string """
        self._answer = ''
        self._question = ''

    def setText(self, question):
        """ set question text """
        self._question = question

    def display(self):
        """ return question """
        return self._question

    def setAnswer(self, answer):
        self._answer = answer

    def checkAnswer(self, correct_answer):
        """ takes a string to check if answer is correct """
        self._correct_answer = correct_answer
        return self._answer == self._correct_answer

class ChoiceQuestion(Question):

    def __init__(self):
        """ init """
        super(ChoiceQuestion, self).__init__()
        self._questions = []

    def setText(self, question):
        self._question = question

    def addChoice(self, choice, is_correct=False):
        """ add each string in list as a choice, with one correct answer indicated by boolean: boolean """
        self._questions.append(choice)

        if is_correct:
            self.setAnswer(choice)

    def checkAnswer(self, correct_answer):
        self._index = int(correct_answer) - 1

        if self._index > len(self._questions):
            return False

        return self._answer == self._questions[self._index]

    def __iter__(self):
        for choice in self._questions:
            yield choice

def presentQuestion(question):
    print question.display()

    if isinstance(question, ChoiceQuestion):
        for i, choice in enumerate(question):
            print "%i: %s" % (i+1, choice)

    user_answer = raw_input('Answer: ')

    print(question.checkAnswer(user_answer))
    print('-----')

if __name__ ==  "__main__":
    
    q = Question()
    q.setText("What color is the sky?")
    q.setAnswer("Blue")
    
    choice_q = ChoiceQuestion()

    choice_q.setText("What color is the sky?")
    choice_q.addChoice("Blue", True)
    choice_q.addChoice("Green")
    choice_q.addChoice("Purple")
    choice_q.addChoice("Red")

    presentQuestion(q)
    presentQuestion(choice_q)

