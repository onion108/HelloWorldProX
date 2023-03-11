#include "CancelableEvent.hh"

using namespace event;

void CancelableEvent::set_cancelled(bool cancelled) {
  this->_cancellation = cancelled;
}

bool CancelableEvent::is_cancelable() const {
  return true;
}

bool CancelableEvent::is_cancelled() const {
  return this->_cancellation;
}
