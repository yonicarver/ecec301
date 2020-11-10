from lab2 import Person
from lab2 import Student
from lab2 import Instructor

yoni = Person('Yoni', 1997)
print yoni.getName()
print yoni.getBirthYear()
print yoni

print

student1 = Student('Bob',2000,'Electrical Engineering',5.0)
print student1.getName()
print student1.getBirthYear()
print student1.getMajor()
print student1.getGPA()
print student1

print

shack = Instructor('Jeff',1800,1000000)
print shack.getName()
print shack.getBirthYear()
print shack.getSalary()
print shack
