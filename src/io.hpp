#ifndef SQUIRREL_IO_HPP
#define SQUIRREL_IO_HPP

#include <string_view>

class IO {
public:
  IO() = delete;

  enum class HeadingType {
    H1,
    H2,
  };

  static void print_heading(const std::string_view,
                            const HeadingType = HeadingType::H1);
  static const std::string get_text_input(const std::string_view);
};

#endif
