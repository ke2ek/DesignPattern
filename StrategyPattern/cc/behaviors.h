#include <iostream>
#define interface class
using namespace std;

/* Behavior interaces */
interface IFlyBehavior {
public:
    virtual ~IFlyBehavior() { }
    virtual void fly() = 0;
};

interface IQuackBehavior {
public:
    virtual ~IQuackBehavior() { }
    virtual void quack() = 0;
};

/* Fly Behavior Classes */
class FlyWithWings : public IFlyBehavior {
public:
    virtual void fly() {
        cout << "I can fly!" << endl;
    }
};


class FlyNoWay : public IFlyBehavior {
public:
    virtual void fly() {
        cout << "I can not fly." << endl;
    }
};


class FlyRocketPowered : public IFlyBehavior {
public:
    virtual void fly() {
        cout << "I can fly like a rocket!" << endl;
    }
};

/* Quack Behavior Classes */
class Quack : public IQuackBehavior {
public:
    virtual void quack() {
        cout << "QUACK!" << endl;
    }
};


class Squeak : public IQuackBehavior {
public:
    virtual void quack() {
        cout << "SQUEAK--" << endl;
    }
};


class MuteQuack : public IQuackBehavior {
public:
    virtual void quack() {
        cout << "..." << endl;
    }
};

