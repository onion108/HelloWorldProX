#include "MainResourceProviderHandler.hh"

void MainResourceProviderHandler::on_request(res_provider::ResourceProvidingEvent *e) {
  if (e->get_route() == "res/main/str/hello_world") {
    e->attach((void *)"Hello, World!");
  } else {
    e->reject("404 not found: Cannot find the resource at the given path.");
  }
}
