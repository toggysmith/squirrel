#ifndef SQUIRREL_PLAYER_HPP
#define SQUIRREL_PLAYER_HPP

#include <string>
#include <string_view>

class Player {
public:
  Player() = default;
  Player(const std::string_view);

  const std::string_view get_name() const;

private:
  const std::string name;
};

#endif
