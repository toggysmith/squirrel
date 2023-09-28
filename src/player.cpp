#include "player.hpp"

Player::Player(const std::string_view name) : name(name) {}

const std::string_view Player::get_name() const { return name; }
