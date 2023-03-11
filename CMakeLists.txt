cmake_minimum_required (VERSION 2.6)
project(HelloWorldProX)
add_compile_options(-std=c++14)
add_executable(
  hw src/main.cc
  src/arg_parser/ArgParser.cc
  src/event/CancelableEvent.cc
  src/Application.cc
  src/event/handler/EventHandler.cc
  src/event/lifecycle/LifeCycleEventHandler.cc
  src/MainLifeCycle.cc
  src/res_provider/ResourceProviderEventHandler.cc
  src/res_provider/ResourceProvider.cc
  src/MainResourceProviderHandler.cc
)