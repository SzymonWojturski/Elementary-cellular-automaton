#include <iostream>
#include <vector>
using namespace std;

class CellularAutomaton {
private:
    vector<vector<bool>> states;
    int rule_;
public:
    CellularAutomaton(int rule);
    void update();
    vector<vector<bool>> getStates() const;
};