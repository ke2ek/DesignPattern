from behavior import QuackBehavior


class Quack(QuackBehavior):
    def quack(self):
        print('{}(id={}): quack, quack, quack!'.format(type(self).__name__, id(self)))


class Squeak(QuackBehavior):
    def quack(self):
        print('{}(id={}): squeak, squeak, squeak!'.format(type(self).__name__, id(self)))


class MuteQuack(QuackBehavior):
    def quack(self):
        print('{}(id={}): ...'.format(type(self).__name__, id(self)))

