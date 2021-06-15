#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
class Player {
 private:
  std::string Name;
  int Elo;

 public:
  Player(std::string n = "Default", int e = 1500) : Name{n}, Elo{e} {} 
    std::string name() { return Name; }
    void name(std::string s) { Name = s; }
    int elo() { return Elo; }
    void elo(int n) {Elo = n; }
};
#endif
