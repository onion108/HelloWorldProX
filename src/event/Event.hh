#ifndef __EVENT__
#define __EVENT__

#include <string>
namespace event {

  /**
  * @brief Represents an abstract event.
  * 
  */
  class Event {

    public:

    /**
    * @brief Returns if the event can be cancelled or not.
    * 
    * @return true if the event can be cancelled,
    * @return false otherwise.
    */
    virtual bool is_cancelable() const = 0;

    /**
    * @brief Set the cancellation state of the event.
    * 
    */
    virtual void set_cancelled(bool) = 0;

    /**
    * @brief Get if the event is cancelled.
    * 
    * @return true If the event is cancelled,
    * @return false otherwise.
    */
    virtual bool is_cancelled() const = 0;

    /**
     * @brief Returns the type of the event.
     * 
     * @return std::string 
     */
    virtual std::string event_type() const = 0;

    virtual ~Event() {}

  };

}

#endif /* __EVENT__ */
