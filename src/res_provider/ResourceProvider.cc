#include "ResourceProvider.hh"
#include "ResourceProvider.hh"
#include "ResourceProvidingEvent.hh"
#include <stdexcept>

using namespace res_provider;

void* ResourceProvider::request(const std::string &path) {
  ResourceProvidingEvent* e = new ResourceProvidingEvent(path);
  this->_handler->fire_event("on_request", e);
  if (!e->is_rejected()) {
    return e->get_attachment();
  } else {
    throw std::invalid_argument(e->get_reject_reason());
  }
}
