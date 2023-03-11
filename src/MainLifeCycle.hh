#ifndef __MAINLIFECYCLE__
#define __MAINLIFECYCLE__

#include "MainResourceProviderHandler.hh"
#include "event/lifecycle/LifeCycleEventHandler.hh"
#include "res_provider/ResourceProvider.hh"

class MainLifeCycle : public event::lifecycle::LifeCycleEventHandler {
  MainResourceProviderHandler _phand;
  res_provider::ResourceProvider _rp;

  public:
  MainLifeCycle() : event::lifecycle::LifeCycleEventHandler(), _phand(), _rp(&_phand) {}
  void on_living(event::lifecycle::LifeCycleLivingEvent *) override;
};

#endif /* __MAINLIFECYCLE__ */
