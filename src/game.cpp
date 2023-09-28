#include "game.hpp"

#include "io.hpp"
#include <iostream>

Game::Game() {
  IO::print_heading("Welcome to Squirrel!");

  const std::string name{IO::get_text_input("Enter your name")};

  Player player{name};
}
