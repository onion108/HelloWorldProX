#ifndef __MAINRESOURCEPROVIDERHANDLER__
#define __MAINRESOURCEPROVIDERHANDLER__

#include "res_provider/ResourceProviderEventHandler.hh"
#include "res_provider/ResourceProvidingEvent.hh"

class MainResourceProviderHandler : public res_provider::ResourceProviderEventHandler {
  public:
  void on_request(res_provider::ResourceProvidingEvent *e) override;
};

#endif /* __MAINRESOURCEPROVIDERHANDLER__ */
