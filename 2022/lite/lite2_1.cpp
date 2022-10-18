#include <iostream>

// vysl cislo y = x * x - 1
// sum = y + 1 * (y/2)

using namespace std;

int main() {

    int n{};
    cin >> n;

    int x{};
    for(int i{0}; i<n; i++) {
        cin >> x;
        cout << (int)(((x * x - 1) + 1) * ((x * x - 1)/2.0)) << endl;   //nutno přetypovat na int, jinak ve vedeckem formatu
    }

    return 0;
}
