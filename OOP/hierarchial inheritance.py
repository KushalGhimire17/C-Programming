class Parent:
    def func1(self):
        print("this is function one")


class Child1(Parent):
    def func2(self):
        print("this is function two")


class Child2(Parent):
    def func3(self):
        print("this is function three")


ob1 = Child1()
ob2 = Child2()
ob1.func1()
ob1.func2()

ob2.func1()
ob2.func3()
