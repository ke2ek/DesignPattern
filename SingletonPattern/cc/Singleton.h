#include <mutex>

/* Not work in multi-thread. */
class ClassicalSingleton {
private:
    static ClassicalSingleton* instance;
    ClassicalSingleton() { }

public:
    static ClassicalSingleton* getInstance();
};

/* Could work in multi-thread. */
/* Create the instance at first. */
class StaticalSingleton {
private:
    static StaticalSingleton* instance;
    StaticalSingleton() { }

public:
    static StaticalSingleton* getInstance();
};

/* Use a lock variable when creating the instance. */
class LockedSingleton {
private:
    static LockedSingleton* instance;
    LockedSingleton() { }

public:
    static LockedSingleton* getInstance(std::mutex& m);
};

