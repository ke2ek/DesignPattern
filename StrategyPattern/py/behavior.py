import abc


class FlyBehavior(abc.ABC):
    @abc.abstractmethod
    def fly(self):
        """ Behave like flying. """
        raise NotImplementedError


class QuackBehavior(abc.ABC):
    @abc.abstractmethod
    def quack(self):
        """ Behave like quacking. """
        raise NotImplementedError

