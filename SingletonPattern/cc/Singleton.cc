#include "Singleton.h"

/* Not work in multi-thread. */
ClassicalSingleton* ClassicalSingleton::instance = 0;

ClassicalSingleton* ClassicalSingleton::getInstance() {
    if (instance == 0) {
        instance = new ClassicalSingleton();
    }
    return instance;
}

/* Could work in multi-thread. */
StaticalSingleton* StaticalSingleton::instance = new StaticalSingleton();

StaticalSingleton* StaticalSingleton::getInstance() {
    return instance;
}

/* Use a lock variable when creating the instance. */
LockedSingleton* LockedSingleton::instance = 0;

LockedSingleton* LockedSingleton::getInstance(std::mutex& m) {
    m.lock();
    if (instance == 0) {
        instance = new LockedSingleton();
    }
    m.unlock();
    return instance;
}

