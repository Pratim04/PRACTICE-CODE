class Animal:
    def sound(self):
        print("Animal makes a sound")

class Dog(Animal):
    def sound(self):   # overriding parent method
        print("Dog barks")

a = Animal()
a.sound()   # Animal makes a sound

d = Dog()
d.sound()   # Dog barks
