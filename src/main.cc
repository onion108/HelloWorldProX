#include "Application.hh"
#include "MainLifeCycle.hh"
#include <iostream>

int main(int argc, char** argv) {
  MainLifeCycle* life_cycle = new MainLifeCycle();
  Application app(life_cycle, argc, argv);
  app.run();
  delete life_cycle;
}
