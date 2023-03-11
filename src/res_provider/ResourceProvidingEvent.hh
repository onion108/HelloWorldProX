#ifndef __RESOURCEPROVIDINGEVENT__
#define __RESOURCEPROVIDINGEVENT__

#include "../event/InevitableEvent.hh"
#include "../mixin/ExtraAttachable.hh"
#include "../mixin/Rejectable.hh"
#include <string>

namespace res_provider {
  /**
   * @brief Fired when requiring a resource. The resource value/object should be returned by attaching a pointer to it.
   * 
   */
  class ResourceProvidingEvent : public event::InevitableEvent, public mixin::ExtraAttachable<void *>, public mixin::Rejectable {
    
    std::string _route;

    public:
    /**
     * @brief Construct a new Resource Providing Event object using a route string.
     * 
     * @param route The string representation of the route.
     */
    ResourceProvidingEvent(const std::string& route) : InevitableEvent(), ExtraAttachable(), Rejectable(), _route(route) {}

    /**
     * @brief Get the string representation of the route.
     * 
     * @return std::string The string representation of the route.
     */
    std::string get_route() const { return _route; }

    std::string event_type() const override { return "res_provider.provide"; }

  };
}

#endif /* __RESOURCEPROVIDINGEVENT__ */
