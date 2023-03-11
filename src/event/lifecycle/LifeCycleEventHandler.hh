#ifndef __LIFECYCLEEVENTHANDLER__
#define __LIFECYCLEEVENTHANDLER__

#include "../handler/EventHandler.hh"
#include "LifeCycleLivingEvent.hh"
#include "LifeCycleSetupEvent.hh"
#include "LifeCycleCleanupEvent.hh"

namespace event {
  namespace lifecycle {
    /**
     * @brief The base class of a life cycle event handler.
     * 
     */
    class LifeCycleEventHandler : public handler::EventHandler {

      void on_fire_event(const event::EventFiringEvent *) override;

      /**
       * @brief Will be called on setup.
       * 
       */
      virtual void on_setup(const LifeCycleSetupEvent *) {}

      /**
       * @brief Will be called every tick while the object living. Must be implemented.
       * 
       */
      virtual void on_living(LifeCycleLivingEvent *) = 0;

      /**
       * @brief Called once the object stops living.
       * 
       */
      virtual void on_cleanup(LifeCycleCleanupEvent *) {}

    };
  }
}

#endif /* __LIFECYCLEEVENTHANDLER__ */
