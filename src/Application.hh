#ifndef __APPLICATION__
#define __APPLICATION__

/**
 * @brief The main application module.
 * 
 */
#include "arg_parser/ArgParser.hh"
#include "event/lifecycle/LifeCycleEventHandler.hh"
class Application {

  event::lifecycle::LifeCycleEventHandler* _main_lifecycle;
  ArgumentParser _parser;

  public:
  Application(event::lifecycle::LifeCycleEventHandler* main_lifecycle, int argc, char** argv) : _main_lifecycle(main_lifecycle), _parser(argc, argv) {}
  void run();

};

#endif /* __APPLICATION__ */
