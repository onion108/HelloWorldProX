#ifndef __EVENTFIREDEVENT__
#define __EVENTFIREDEVENT__

#include "CancelableEvent.hh"
#include <string>
#include "../mixin/ExtraAttachable.hh"

namespace event {
  /**
   * @brief An event that will be fired when an event is fired on an EventHandler. The name of the event will be attached as an extra attachment, which could be checked by calling the related methods in mixin::ExtraAttachable.
   * 
   */
  class EventFiringEvent : public CancelableEvent, public mixin::ExtraAttachable<std::string> {
    Event* _e;
    public:
    EventFiringEvent(Event* e) : CancelableEvent(), ExtraAttachable(), _e(e) {}
    std::string event_type() const override {
      return "event_firing_event";
    }
    /**
     * @brief Get the event object.
     * 
     * @return Event* 
     */
    Event* get_event() const {
      return this->_e;
    }
  };
}

#endif /* __EVENTFIREDEVENT__ */
