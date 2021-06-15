#ifndef TOURNAMENT_HPP
#define TOURNAMENT_HPP
#include "player.hpp"
#include <vector>
class Tournament {
	public:
		Tournament() = default;
		std::vector<Player> entrants;
		void add_entrant(Player const& player) {
			entrants.push_back(player);
		}
};
#endif
