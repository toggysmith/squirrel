#include "io.hpp"

#include <iostream>
#include <string>

void IO::print_heading(const std::string_view heading_message) {
  const std::size_t heading_message_length{heading_message.size()};
  const char heading_border_symbol{'#'};
  const std::string heading_border{
      std::string(heading_message_length + 4, heading_border_symbol)};

  std::cout << heading_border << '\n';
  std::cout << heading_border_symbol << ' ' << heading_message << ' '
            << heading_border_symbol << '\n';
  std::cout << heading_border << '\n' << '\n';
}
