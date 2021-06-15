#ifndef TOURNAMENT_HPP
#define TOURNAMENT_HPP
#include "player.hpp"
#include <vector>
class Tournament () {
	private:
		std::vector<Player> entrants;
	public:
		Tournament() = default;
		void add_entrant(Player const& player) {
			entrants.push_back(player);
		}
};
#endif
