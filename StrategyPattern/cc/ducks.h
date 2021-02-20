#include "behaviors.h"

class Duck {
protected:
    IFlyBehavior* flyBehavior;
    IQuackBehavior* quackBehavior;

public:
    virtual ~Duck() { }
    virtual void display() = 0;
    
    void performFly() {
        flyBehavior->fly();
    }

    void performQuack() {
        quackBehavior->quack();
    }

    void swim() {
        cout << "I can swim!" << endl;
    }

    void setFlyBehavior(IFlyBehavior* fb) {
        flyBehavior = fb;
    }

    void setQuackBehavior(IQuackBehavior* qb) {
        quackBehavior = qb;
    }
};


class MallardDuck : public Duck {
public:
    MallardDuck() {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quack();
    }

    virtual void display() {
        cout << "I am a mallard duck." << endl;
    }
};

class EunjinDuck : public Duck {
public:
    EunjinDuck() {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quack();
    }

    virtual void display() {
        cout << "I am a eunjin duck." << endl;
    }
};

