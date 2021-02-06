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
    mallard.swim()  

    print('[+] ' + '-'*40 + ' Created a mallard duck!')

    eunjin = EunjinDuck()
    eunjin.set_fly_behavior(fly_behavior.FlyNoWay())
    eunjin.set_quack_behavior(quack_behavior.MuteQuack())
    eunjin.display()
    eunjin.fly()
    eunjin.quack()
    eunjin.set_fly_behavior(fly_behavior.FlyRocketPowered())
    eunjin.fly()
    eunjin.swim()

    print('[+] ' + '-'*40 + ' Created a eunjin duck!')

    mallard2 = MallardDuck()
    mallard2.set_quack_behavior(quack_behavior.MuteQuack())
    mallard2.display()
    mallard2.quack()
    mallard2.swim()

    print('[+] ' + '-'*40 + ' Created a mallard duck, too!')


if __name__ == '__main__':
    main()
