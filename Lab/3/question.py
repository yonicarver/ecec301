
class Question(object):

    def __init__(self):
        """ store question & answer as string """
                
        
    def setText(self, question):
        """ set question text """
        self._question = question

    def setAnswer(self, answer):
        """ set answer to question """
        self._answer = answer

    def display(self):
        """ return question """
        print self._question

    def checkAnswer(self, correct_answer):
        """ takes a string to check if answer is correct """
        self._correct_answer = correct_answer
        return self._answer == self._correct_answer


if __name__ == '__main__':
    q1 = Question()
    q1.setText('What color is the sky?')
    q1.setAnswer('Blue')

    print 'DISPLAY QUESTION:',
    q1.display()

    print 'CORRECT ANSWER (Blue):',
    print q1.checkAnswer('Blue')
    print 'INCORRECT ANSWER (Green):',
    print q1.checkAnswer('Green')