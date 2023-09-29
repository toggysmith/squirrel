#include "io.hpp"

#include <fmt/color.h>
#include <fmt/format.h>

#include <iostream>
#include <string>
#include <unordered_map>

void IO::print_heading(const std::string_view heading_message,
                       const HeadingType heading_type) {
  const std::size_t heading_message_length{heading_message.size()};
  const char heading_border_symbol{'#'};
  const static std::unordered_map<HeadingType, fmt::color> heading_colors{
      {HeadingType::H1, fmt::color::green_yellow},
      {HeadingType::H2, fmt::color::gold},
  };
  const fmt::color heading_color{heading_colors.at(heading_type)};

  switch (heading_type) {
  case HeadingType::H1: {
    const std::string heading_border{
        std::string(heading_message_length + 6, heading_border_symbol)};
    const std::string heading_spacing{
        std::string(heading_message_length + 4, ' ')};

    fmt::print(
        fg(heading_color),
        "{heading_border}\n"
        "{heading_border_symbol}{heading_spacing}{heading_border_symbol}\n"
        "{heading_border_symbol}  {heading_message}  {heading_border_symbol}\n"
        "{heading_border_symbol}{heading_spacing}{heading_border_symbol}\n"
        "{heading_border}\n\n",
        fmt::arg("heading_border", heading_border),
        fmt::arg("heading_spacing", heading_spacing),
        fmt::arg("heading_border_symbol", heading_border_symbol),
        fmt::arg("heading_message", heading_message));
    break;
  }
  default: {
    const std::string heading_border{
        std::string(heading_message_length + 4, heading_border_symbol)};
    const std::string heading_spacing{
        std::string(heading_message_length + 2, ' ')};

    fmt::print(
        fg(heading_color),
        "{heading_border}\n"
        "{heading_border_symbol} {heading_message} {heading_border_symbol}\n"
        "{heading_border}\n\n",
        fmt::arg("heading_border", heading_border),
        fmt::arg("heading_border_symbol", heading_border_symbol),
        fmt::arg("heading_message", heading_message));
    break;
  }
  }
}

void IO::print_text(const std::string_view text) { fmt::println("{}", text); }

const std::string IO::get_text_input(const std::string_view prompt) {
  fmt::print(fg(fmt::color::cornflower_blue),
             "{prompt}: ", fmt::arg("prompt", prompt));

  std::string input;

  std::getline(std::cin, input);

  std::cout << '\n';

  return input;
}
