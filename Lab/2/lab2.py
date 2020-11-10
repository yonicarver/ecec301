
class Person(object):
    def __init__(self, name, yob):
        self.name = name
        self.yob = yob
    
    def getName(self):
        return self.name
    
    def getBirthYear(self):
        return self.yob
    
    
    def __repr__(self):
        return 'This is a PERSON\nName: %s\nBirth Year: %d' % (self.name, self.yob)
#        print 'This is a PERSON'
#        print 'Name: %s' % self.name
#        print 'Birth Year: %d' % self.yob
        
        
class Student(Person):
    def __init__(self, name, yob, major = '', GPA = 0):
        super(Student, self).__init__(name, yob)
        self.major = major
        self.GPA = GPA
    
    def setMajor(self, input_major):
        self.major = input_major
        
    def setGPA(self, input_GPA):
        self.GPA = input_GPA
    
    def getMajor(self):
        return self.major
    
    def getGPA(self):
        return self.GPA
    
    def __repr__(self):
        return 'This is an STUDENT\nName: %s\nBirth Year: %d\nMajor: %s\nGPA: %d' % (self.name, self.yob, self.major, self.GPA)
#        print 'This is a STUDENT'
#        print 'Name: %s' % self.name
#        print 'Birth Year: %d' % self.yob
#        print 'Major: %s' % self.major
#        print 'GPA: %d' % self.GPA
        
class Instructor(Person):
    def __init__(self, name, yob, salary = 0):
        super(Instructor, self).__init__(name, yob)
        self.salary = salary

    def setSalary(self, input_salary):
        self.salary = input_salary

    def getSalary(self):
        return self.salary

    def __repr__(self):
        return 'This is an INSTRUCTOR\nName: %s\nBirth Year: %d\nSalary: %d' % (self.name, self.yob, self.salary)







