#include "ArgParser.hh"
#include <cstddef>

ArgumentParser::ArgumentParser(int argc, char** argv) : _buf() {
  for (std::size_t i = 0; i < argc; i++) {
    _buf.push_back(argv[i]);
  }
}
