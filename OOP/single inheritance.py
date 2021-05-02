# Parent Class
class Parent:
    name = 'ParentClass'

    def func1(self):
        print("This is function one from parent class ")

# Child Class


class Child(Parent):
    name = 'ChildClass'

    def func2(self):
        print("This is function two from child class ")


# drivers/main code
ob = Child()
ob.func1()
ob.func2()
print(ob.name)
obj = Parent()
print(obj.name)
