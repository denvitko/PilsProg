#include <iostream>
#include <math.h>

using namespace std;

int main() {

    double pevnina{};
    char policko{};
    int r{}; int s{};
    cin >> r >> s;
  
    for(int i{0}; i<r; i++) {
        for(int j{0}; j<s; j++) {
            cin >> policko;
            if(policko == '#') {
                pevnina += 1;
            } else if(policko == '*'){
                pevnina += 0.5;
            }
        }
    }

    double procent = round(pevnina*100/(r*s));
    cout << procent << "%" << endl;

    return 0;
}
