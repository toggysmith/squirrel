#ifndef SQUIRREL_IO_HPP
#define SQUIRREL_IO_HPP

#include <string_view>

class IO {
public:
  IO() = delete;

  static void print_heading(const std::string_view);
};

#endif
