class Parent1:
    def func1(self):
        print("this is function one")


class Parent2:
    def func2(self):
        print("this is function two ")


class Child(Parent1, Parent2):
    def func3(self):
        print("this is function three")


ob = Child()
ob.func1()
ob.func2()
ob.func3()
