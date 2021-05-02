class Tomato():
    def type(self):
        print("Vegetable")

    def color(self):
        print("Red")


class Apple():
    def type(self):
        print("Fruit")

    def color(self):
        print("Red")


def func(obj):
    # function to show polymorphism
    obj.type()
    obj.color()


# object declaration
obj_tomato = Tomato()
obj_apple = Apple()

# polymorphism
func(obj_tomato)
func(obj_apple)
