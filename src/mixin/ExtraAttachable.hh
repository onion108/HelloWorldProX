#ifndef __EXTRAATTACHABLE__
#define __EXTRAATTACHABLE__

namespace mixin {
  /**
   * @brief A mixin provides functionality for attaching extra informations.
   * 
   */
  template <typename T>
  class ExtraAttachable {
    T _attachment;
    public:
    /**
     * @brief Attach an object.
     * 
     * @param obj The object to be attached. 
     */
    void attach(T obj) {
      this->_attachment = obj;
    }
    /**
     * @brief Get the attachment object.
     * 
     * @return T 
     */
    T get_attachment() const {
      return this->_attachment;
    }
  };
}

#endif /* __EXTRAATTACHABLE__ */
