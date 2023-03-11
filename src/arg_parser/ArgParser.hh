#ifndef __ARGPARSER__
#define __ARGPARSER__

#include <string>
#include <vector>

/**
 * @brief A simple argument parser for the main application.
 * This parser does nothing, because clearly we don't need it yet.
 */
class ArgumentParser {
  std::vector<std::string> _buf;
  
  public:
  ArgumentParser(int, char**);

};

#endif /* __ARGPARSER__ */
