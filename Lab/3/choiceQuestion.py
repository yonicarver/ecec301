
from question import Question

class ChoiceQuestion(Question):
    """ derived class from class: Question """
    def __init__(self):
        """ init """
        self._questions = []
        
    def addChoice(self, choice):
        """ add each string in list as a choice, with one correct answer indicated by boolean: boolean """
        self._questions.append(choice)

    def setAnswer(self, answer):
        """ set answer to question """
        self._answer = answer

    def checkAnswer(self, correct_answer):
        """ takes a string to check if answer is correct """
        self._correct_answer = correct_answer
        return self._answer == self._correct_answer

    def display(self):
        """ prints question and answer choices """
        super(ChoiceQuestion, self).display()
        
        for number, question in enumerate(self._questions):
            print number+1, question
#        print 'Correct answer: %s' % self._answer

def presentQuestion(question):
    question.display()
    answer = raw_input('Enter answer: ')
    print question.checkAnswer(answer)
    


if __name__ == "__main__":
    q1 = ChoiceQuestion()
    q1.setAnswer('1')
    q1.setText('What color is the sky?')
    q1.addChoice('Blue')
    q1.addChoice('Green')
    q1.addChoice('Red')
#    q1.display()
#    print q1.checkAnswer('1')
    
    q2 = Question()
    q2.setText('What color is the sky?')
    q2.setAnswer('Blue')
    
    presentQuestion(q1)
    presentQuestion(q2)
