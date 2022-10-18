#include <iostream>
#include <vector>
#include <sstream>
#include <math.h>

using namespace std;

int main() {
    vector<int> n;
    vector<int> u;

    int num{}; char unit{};

    stringstream row_stream;
    string radek{};

    do {
        getline(cin, radek);
        row_stream.str(radek);
        row_stream >> num >> unit;
        n.push_back(num);
        u.push_back(unit);
    } while(radek!="x" && radek!="X");

    for(int i{0}; i<n.size()-1; i++) {
        switch(u[i]) {
            case 'C':
            case 'c': {
                cout << round(n[i]*(9.0/5.0)+32) << " F, " << round(n[i]+273.15) << " K\n";
            } break;
            case 'f':
            case 'F': {

                cout << round((n[i]-32)*(5.0/9.0)) << " C, " << round((n[i]-32)*(5.0/9.0)+273.15) << " K\n";
            } break;
            case 'k':
            case 'K': {
                cout << round(n[i]-273.15) << " C, " << round((n[i]-273.15)*(9.0/5.0)+32) << " F\n";
            } break;
        }
    }
    return 0;
}
