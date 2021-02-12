from abc import ABC, abstractmethod


class Observer(ABC):
    @abstractmethod
    def update(self, tmp, humidity, pressure):
        raise NotImplementedError


class Subject(ABC):
    @abstractmethod
    def register_observer(self, o):
        raise NotImplementedError

    @abstractmethod
    def remove_observer(self, o):
        raise NotImplementedError

    @abstractmethod
    def notify_observers(self):
        raise NotImplementedError


class DisplayElement(ABC):
    @abstractmethod
    def display(self):
        raise NotImplementedError

