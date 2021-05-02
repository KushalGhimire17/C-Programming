class Parent:
    def func1(self):
        print("this is function one")


class Child(Parent):
    def func2(self):
        print("this is function two")


class Child1(Parent):
    def func3(self):
        print(" this is function three")


class Child3(Child1):
    def func4(self):
        print(" this is function four")


ob = Child3()
ob.func1()
