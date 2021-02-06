from duck import MallardDuck, EunjinDuck
import fly_behavior
import quack_behavior

def main():
    mallard = MallardDuck()
    mallard.set_fly_behavior(fly_behavior.FlyWithWings())
    mallard.set_quack_behavior(quack_behavior.Quack())
    mallard.display()
    mallard.fly()
    mallard.quack()

    eunjin = EunjinDuck()
    eunjin.set_fly_behavior(fly_behavior.FlyNoWay())
    eunjin.set_quack_behavior(quack_behavior.MuteQuack())
    eunjin.display()
    eunjin.fly()
    eunjin.quack()
    eunjin.set_fly_behavior(fly_behavior.FlyRocketPowered())
    eunjin.fly()

    # Same as Duck.swim(), MallardDuck.swim(), EunjinDuck.swim()
    mallard.swim()  
    eunjin.swim()


if __name__ == '__main__':
    main()
