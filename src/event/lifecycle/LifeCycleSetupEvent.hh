#ifndef __LIFECYCLESETUPEVENT__
#define __LIFECYCLESETUPEVENT__

#include "../InevitableEvent.hh"
#include "../../mixin/ExtraAttachable.hh"
#include <string>

namespace event {
  namespace lifecycle {
    /**
     * @brief An event that will be fired on lifecycle's setup stage.
     * 
     */
    class LifeCycleSetupEvent : public InevitableEvent, public mixin::ExtraAttachable<void *> {
      public:
      std::string event_type() const override {
        return "lifecycle.lifecycle_setup";
      }
    };
  }
}

#endif /* __LIFECYCLESETUPEVENT__ */
