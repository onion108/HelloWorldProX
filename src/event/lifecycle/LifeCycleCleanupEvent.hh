#ifndef __LIFECYCLECLEANUPEVENT__
#define __LIFECYCLECLEANUPEVENT__

#include "../InevitableEvent.hh"
#include "../../mixin/ExtraAttachable.hh"
#include <string>

namespace event {
  namespace lifecycle {
    /**
     * @brief An event that will be fired on lifecycle's cleanup stage.
     * 
     */
    class LifeCycleCleanupEvent : public InevitableEvent, public mixin::ExtraAttachable<void *> {
      public:
      std::string event_type() const override {
        return "lifecycle.lifecycle_cleanup";
      }
    };
  }
}

#endif /* __LIFECYCLECLEANUPEVENT__ */
