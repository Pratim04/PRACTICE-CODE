class Animal:          # base class
    def sound(self):
        print("Some sound")

class Dog(Animal):     # derived class
    def bark(self):
        print("Dog barks")

d = Dog()
d.sound()  # inherited from Animal
d.bark()
