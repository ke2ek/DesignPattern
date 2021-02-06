import abc


class Duck(abc.ABC):
    @abc.abstractmethod
    def display(self):
        """ Display itself. """
        raise NotImplementedError

    @classmethod
    def swim(cls):
        print('{} can swim!'.format(cls.__name__))

    def fly(self):
        self._fly_behavior.fly()

    def quack(self):
        self._quack_behavior.quack()

    def set_fly_behavior(self, fly_behavior):
        self._fly_behavior = fly_behavior

    def set_quack_behavior(self, quack_behavior):
        self._quack_behavior = quack_behavior


class MallardDuck(Duck):
    """ Mallard Duck Class """

    def display(self):
        print('{}({}): I am a mallard duck.'.format(type(self).__name__, id(self)))


class EunjinDuck(Duck):
    """ Eunjin Duck Class """

    def display(self):
        print('{}({}): I am a eunjin duck.'.format(type(self).__name__, id(self)))

