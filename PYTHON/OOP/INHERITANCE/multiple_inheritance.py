class A:
    def showA(self):
        print("Class A")

class B:
    def showB(self):
        print("Class B")

class C(A, B):      # multiple inheritance
    pass

obj = C()
obj.showA()
obj.showB()
