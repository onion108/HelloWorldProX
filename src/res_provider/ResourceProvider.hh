#ifndef __RESOURCEPROVIDER__
#define __RESOURCEPROVIDER__

#include "ResourceProviderEventHandler.hh"
#include <string>
namespace res_provider {
  class ResourceProvider {
    ResourceProviderEventHandler* _handler;

    public:
    ResourceProvider(ResourceProviderEventHandler* handler) : _handler(handler) {}

    void *request(const std::string& path);
  };
}

#endif /* __RESOURCEPROVIDER__ */
