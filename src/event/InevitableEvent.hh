#ifndef __INEVITABLEEVENT__
#define __INEVITABLEEVENT__

#include "Event.hh"
#include <functional>

namespace event {

  /**
  * @brief Represents an event that cannot be cancelled.
  * 
  */
  class InevitableEvent : public Event {
    public:

    bool is_cancelable() const override {
      return false;
    }

    void set_cancelled(bool) override {
      throw std::bad_function_call();
    }

    bool is_cancelled() const override {
      return false;
    }

  };

}

#endif /* __INEVITABLEEVENT__ */
