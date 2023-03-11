#include "EventHandler.hh"

void event::handler::EventHandler::fire_event(const std::string & s, Event *e) {
  EventFiringEvent* event = new EventFiringEvent(e);
  event->attach(s);
  on_fire_event(event);
}
