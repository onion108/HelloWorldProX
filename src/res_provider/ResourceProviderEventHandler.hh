#ifndef __RESOURCEPROVIDEREVENTHANDLER__
#define __RESOURCEPROVIDEREVENTHANDLER__

#include "../event/handler/EventHandler.hh"
#include "ResourceProvidingEvent.hh"

namespace res_provider {
  /**
   * @brief Handler that handles ResourceProvider related events.
   * 
   */
  class ResourceProviderEventHandler : public event::handler::EventHandler {
    public:
    void on_fire_event(const event::EventFiringEvent *e) override;

    virtual void on_request(ResourceProvidingEvent *e) = 0;
  };
}

#endif /* __RESOURCEPROVIDEREVENTHANDLER__ */
