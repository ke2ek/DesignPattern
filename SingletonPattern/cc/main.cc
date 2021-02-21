#include <cstdio>
#include <thread>

#include "Singleton.h"

#define THREAD_COUNT 5
using namespace std; 

mutex m;

void worker1() {
    thread::id tId = this_thread::get_id();
    StaticalSingleton* ssInstance = StaticalSingleton::getInstance();
    printf("%p Instance Address = %p\n", tId, ssInstance);
}

void worker2() {
    thread::id tId = this_thread::get_id();
    LockedSingleton* lsInstance = LockedSingleton::getInstance(m);
    printf("%p Instance Address = %p\n", tId, lsInstance);
}

int main() {
    printf("[Classical Singleton]\n");
    ClassicalSingleton* csInstance1 = ClassicalSingleton::getInstance();
    printf("Instance Address = %p\n", csInstance1);
    printf("Pointer Address = %p\n", &csInstance1);
    ClassicalSingleton* csInstance2 = ClassicalSingleton::getInstance();
    printf("Instance Address = %p\n", csInstance2);
    printf("Pointer Address = %p\n", &csInstance2);

    printf("\nMutli Threading ... \n");
    thread* arr[THREAD_COUNT];
    printf("[Statical Singleton]\n");
    for (int i = 0; i < THREAD_COUNT; i++)
        arr[i] = new thread(worker1);
    for (int i = 0; i < THREAD_COUNT; i++)
        arr[i]->join();

    printf("\n[Locked Singleton]\n");
    for (int i = 0; i < THREAD_COUNT; i++)
        arr[i] = new thread(worker2);
    for (int i = 0; i < THREAD_COUNT; i++)
        arr[i]->join();

    return 0;
}

