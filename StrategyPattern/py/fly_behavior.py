from behavior import FlyBehavior


class FlyWithWings(FlyBehavior):
    def fly(self):
        print('{}(id={}): I can fly!'.format(type(self).__name__, id(self)))


class FlyNoWay(FlyBehavior):
    def fly(self):
        print('{}(id={}): I can not fly!'.format(type(self).__name__, id(self)))


class FlyRocketPowered(FlyBehavior):
    def fly(self):
        print('{}(id={}): I can fly like a rocket!'.format(type(self).__name__, id(self)))

