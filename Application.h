#include <iostream>
#include <vector>
#include "SFML/Graphics.hpp"
#include "CellularAutomaton.h"
using namespace sf;
using namespace std;

class Application {
private:
    float speed_of_update_;
    RenderWindow window;
    CellularAutomaton automaton;
    Clock clock;

public:
    Application(int rule,float speed);
    void run();
};