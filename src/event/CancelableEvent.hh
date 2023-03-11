#ifndef __CANCELABLEEVENT__
#define __CANCELABLEEVENT__

#include "Event.hh"

namespace event {

  /**
  * @brief Represents a cancelable event.
  * 
  */
  class CancelableEvent : public Event {

    bool _cancellation = false;
    
    public:
    bool is_cancelable() const override;
    bool is_cancelled() const override;
    void set_cancelled(bool) override;

    virtual ~CancelableEvent() {}

  };

}

#endif /* __CANCELABLEEVENT__ */
