#include "StrategyPattern/ducks.h"

int main() {
  Duck* mallard = new MallardDuck();
  mallard->performFly();
  mallard->performQuack();

  Duck* eunjin = new EunjinDuck();
  eunjin->display();
  eunjin->performQuack();
  eunjin->setQuackBehavior(new Squeak());
  eunjin->performQuack();
  return 0;
}
