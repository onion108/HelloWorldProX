#ifndef __EVENTHANDLER__
#define __EVENTHANDLER__


#include <string>
#include "../Event.hh"
#include "../EventFiringEvent.hh"
namespace event {

  namespace handler {
    /**
    * @brief An abstract event handler. Defines some basic behaviors.
    * 
    */
    class EventHandler {
      
      public:
      /**
       * @brief Fire an event.
       * 
       */
      void fire_event(const std::string&, Event*);

      /**
       * @brief Will be called when firing a new event.
       */
      virtual void on_fire_event(const event::EventFiringEvent* ) = 0;

      virtual ~EventHandler() {}

    };

  }

}

#endif /* __EVENTHANDLER__ */
