#include "io.hpp"

#include <fmt/color.h>
#include <fmt/format.h>

#include <iostream>
#include <string>

void IO::print_heading(const std::string_view heading_message) {
  const std::size_t heading_message_length{heading_message.size()};
  const char heading_border_symbol{'#'};
  const std::string heading_border{
      std::string(heading_message_length + 4, heading_border_symbol)};

  fmt::print(
      fg(fmt::color::green_yellow),
      "{heading_border}\n"
      "{heading_border_symbol} {heading_message} {heading_border_symbol}\n"
      "{heading_border}\n",
      fmt::arg("heading_border", heading_border),
      fmt::arg("heading_border_symbol", heading_border_symbol),
      fmt::arg("heading_message", heading_message));
}
