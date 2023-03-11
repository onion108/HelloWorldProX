#include "ResourceProviderEventHandler.hh"
#include "ResourceProvidingEvent.hh"
#include <functional>

void res_provider::ResourceProviderEventHandler::on_fire_event(const event::EventFiringEvent *e) {
  if (e->get_attachment() == "on_request") {
    if (e->get_event()->event_type() == "res_provider.provide") {
      this->on_request((ResourceProvidingEvent*)e->get_event());
    } else {
      throw std::bad_function_call();
    }
    return;
  }

  throw std::bad_function_call();
}
