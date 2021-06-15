#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "tournament.hpp"

TEST_CASE("TEST N. 1") {
  Player Giaco{"Giacomini Francesco", 1750};
  CHECK(Giaco.name() == "Giacomini Francesco");
  CHECK(Giaco.elo() == 1750);
  Giaco.elo(2091);
  CHECK(Giaco.elo() == 2091);
}
TEST_CASE("TEST N. 2") {
  Player Prova{};
  CHECK(Prova.name() == "Default");
  CHECK(Prova.elo() == 1500);
  Prova.name("Asdrubale");
  CHECK(Prova.name() == "Asdrubale");
}
TEST_CASE("TEST N. 3") {
	Tournament torneo;
	Player Simo{"Simone", 1305};
	Player Giuse{"Giuseppe", 1500};
	Player Stef{"Stefano", 1256};
	torneo.add_entrant(Simo);
	torneo.add_entrant(Giuse);
	torneo.add_entrant(Stef);
}
