#include "game.hpp"

#include "io.hpp"

#include <fmt/format.h>

Game::Game() {
  IO::print_heading("Welcome to Squirrel!");

  const std::string name{IO::get_text_input("Enter your name")};

  Player player{name};

  IO::print_heading(fmt::format("Welcome, {}", player.get_name()),
                    IO::HeadingType::H2);
}
