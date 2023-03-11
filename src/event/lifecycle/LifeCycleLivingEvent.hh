#ifndef __LIFECYCLELIVINGEVENT__
#define __LIFECYCLELIVINGEVENT__

#include "../CancelableEvent.hh"
#include "../../mixin/ExtraAttachable.hh"
#include <cstddef>
#include <string>

namespace event {
  namespace lifecycle {
    /**
     * @brief An event that will be fired every tick while the lifecycle living. 
     * The tick count should be attached, starts from 0.
     * 
     */
    class LifeCycleLivingEvent : public CancelableEvent, public mixin::ExtraAttachable<std::size_t> {
      public:
      std::string event_type() const override {
        return "lifecycle.lifecycle_living";
      }
    };
  }
}

#endif /* __LIFECYCLELIVINGEVENT__ */
