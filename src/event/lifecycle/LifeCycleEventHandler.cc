#include "LifeCycleEventHandler.hh"
#include "LifeCycleCleanupEvent.hh"
#include "LifeCycleLivingEvent.hh"
#include "LifeCycleSetupEvent.hh"
#include <functional>
#include <iostream>

void event::lifecycle::LifeCycleEventHandler::on_fire_event(const event::EventFiringEvent *e) {

  if (e->get_attachment() == "on_setup") {
    if (e->get_event()->event_type() == "lifecycle.lifecycle_setup") {
      this->on_setup((LifeCycleSetupEvent*)e->get_event());
    } else {
      throw std::bad_function_call();
    }
    return;
  }

  if (e->get_attachment() == "on_living") {
    if (e->get_event()->event_type() == "lifecycle.lifecycle_living") {
      this->on_living((LifeCycleLivingEvent*)e->get_event());
    } else {
      throw std::bad_function_call();
    }
    return;
  }

  if (e->get_attachment() == "on_cleanup") {
    if (e->get_event()->event_type() == "lifecycle.lifecycle_cleanup") {
      this->on_cleanup((LifeCycleCleanupEvent*)e->get_event());
    } else {
      throw std::bad_function_call();
    }
    return;
  }

  throw std::bad_function_call();
}
