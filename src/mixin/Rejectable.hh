#ifndef __REJECTABLE__
#define __REJECTABLE__

#include <string>

namespace mixin {
  class Rejectable {
    std::string _reason = "";
    bool _rejected = false;

    public:

    /**
     * @brief Reject with a reason.
     * 
     * @param reason 
     */
    void reject(std::string reason) {
      _rejected = true;
      _reason = reason;
    }

    /**
     * @brief Reject without a reason.
     * 
     */
    void reject(void) {
      reject("");
    }

    /**
     * @brief Get the reject reason.
     * 
     * @return std::string 
     */
    std::string get_reject_reason(void) {
      return this->_reason;
    }

    /**
     * @brief Get if it is rejected.
     * 
     * @return true if rejected,
     * @return false otherwise.
     */
    bool is_rejected(void) {
      return this->_rejected;
    }
  };
}

#endif /* __REJECTABLE__ */
