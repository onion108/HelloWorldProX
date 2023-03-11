#include "MainLifeCycle.hh"
#include <iostream>

void MainLifeCycle::on_living(event::lifecycle::LifeCycleLivingEvent *e) {
  const char * data = (const char *)_rp.request("res/main/str/hello_world");

  std::cout << data << std::endl;

  e->set_cancelled(true);
}
