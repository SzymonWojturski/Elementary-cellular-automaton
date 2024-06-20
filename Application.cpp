#include <iostream>
#include <vector>

#include "Application.h"
using namespace sf;
using namespace std;

Application::Application(int rule,float speed_of_update):
window(sf::VideoMode(512, 512), "Wolfram's Cellular Automaton"), automaton(rule),speed_of_update_(speed_of_update)
{}

void Application::run() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        if (clock.getElapsedTime().asSeconds() >=speed_of_update_) {
            automaton.update();
            clock.restart();
        }

        window.clear();
        const auto& states = automaton.getStates();
        for (int y = 0; y < states.size(); y++) {
            for (int x = 0; x < 256; x++) {
                if (states[y][x]) {
                    sf::RectangleShape cell(sf::Vector2f(2, 2));
                    cell.setPosition(x * 2, y * 2);
                    window.draw(cell);
                }
            }
        }
        window.display();
    }
}