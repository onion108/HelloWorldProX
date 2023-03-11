#include "Application.hh"
#include "event/lifecycle/LifeCycleCleanupEvent.hh"
#include "event/lifecycle/LifeCycleLivingEvent.hh"
#include "event/lifecycle/LifeCycleSetupEvent.hh"
#include <cstddef>
#include <iostream>

using namespace event::lifecycle;

void Application::run() {

  // Setup stage.
  LifeCycleSetupEvent* e = new LifeCycleSetupEvent();
  this->_main_lifecycle->fire_event("on_setup", e);
  delete e;

  // Living stage.
  LifeCycleLivingEvent* le = new LifeCycleLivingEvent();
  std::size_t counter = 0;
  while (1) {
    // Fires event every tick.
    le->attach(counter);
    le->set_cancelled(false);
    this->_main_lifecycle->fire_event("on_living", le);

    // Exits if the event cancelled.
    if (le->is_cancelled()) {
      break;
    }

    counter++;
  }
  delete le;

  // Cleanup stage.
  LifeCycleCleanupEvent* ce = new LifeCycleCleanupEvent();
  this->_main_lifecycle->fire_event("on_cleanup", ce);
  delete ce;

}
