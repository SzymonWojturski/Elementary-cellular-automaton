#include "CellularAutomaton.h"

CellularAutomaton::CellularAutomaton(int rule){
    states.emplace_back(256, false);
    states[0][128] = true;
    rule_=rule;
}
void CellularAutomaton::update() {
    std::vector<bool> newState(256, false);
    for (int i = 1; i < 255; i++) {
        int neighborhood = (states.back()[i-1] << 2) | (states.back()[i] << 1) | states.back()[i+1];
        newState[i] = (rule_ >> neighborhood) & 1;
    }
    states.push_back(newState);
}
vector<vector<bool>> CellularAutomaton::getStates() const {
    return states;
}