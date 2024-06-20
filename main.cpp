#include "Application.h"
using namespace std;

int main(int argc, char *argv[]) {
    //fun rules: 214, 30, 18, 73
    if (argc!=3){
        printf("Wrong number of arguments, should be 2: int:rule, float:speed of updates");
        return -1;
    }
    int rule= stoi(argv[1]);
    float speed= stof(argv[2]);
    Application app(rule,speed);
    app.run();
    return 0;
}