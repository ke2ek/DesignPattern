import abc


class Duck(abc.ABC):
    fly_behavior = None
    quack_behavior = None

    @abc.abstractmethod
    def display(self):
        """ Display itself. """
        raise NotImplementedError

    @staticmethod
    def swim():
        print('I can swim!')

    @classmethod
    def fly(cls):
        cls.fly_behavior.fly()

    @classmethod
    def quack(cls):
        cls.quack_behavior.quack()

    @classmethod
    def set_fly_behavior(cls, fly_behavior):
        cls.fly_behavior = fly_behavior

    @classmethod
    def set_quack_behavior(cls, quack_behavior):
        cls.quack_behavior = quack_behavior


class MallardDuck(Duck):
    """ Mallard Duck Class """

    def display(self):
        print('{}({}): I am a mallard duck.'.format(type(self).__name__, id(self)))


class EunjinDuck(Duck):
    """ Eunjin Duck Class """

    def display(self):
        print('{}({}): I am a eunjin duck.'.format(type(self).__name__, id(self)))

