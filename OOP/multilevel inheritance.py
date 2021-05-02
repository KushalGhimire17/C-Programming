class Parent:
    def func1(self):
        print("this is function one")


class Child1(Parent):
    def func2(self):
        print("this is function two")


class Child2(Child1):
    def func3(self):
        print("this is function three")


ob = Child2()
ob.func1()
ob.func2()
ob.func3()
