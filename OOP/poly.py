# Polymorphism example

class Cat:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def info(self):
        print(
            "I am a cat. My name is {self.name}. I am {self.age} years old. ")

    def sound(self):
        print("Meow")


class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def info(self):
        print(
            "I am a dog. My name is {self.name}. I am {self.age} years old. ")

    def sound(self):
        print("Bark")


cat1 = Cat("Kitty", 3.4)
dog1 = Dog("Tommy", 5)

for animal in (cat1, dog1):
    animal.sound()
    animal.info()
    animal.sound()
