#include <iostream>
#include <vector>

using namespace std;

int main() {
    int v{};
    int p{};

    cin >> v >> p;

    vector<int> cisla(p);
    for(int i{0}; i<p; i++) {
        cin >> cisla[i];
    }

    for(int i{0}; i<v; i++) {
        int hledane{};
        cin >> hledane;

        if(hledane < -1000 || hledane > 1000) {
            cout << "Nenalezeno.\n";
            continue;
        } else {

            vector<int> indexy;

            for(int i{0}; i<p; i++) {
                if(cisla[i] == hledane) {
                    indexy.push_back(i);
                }
            }

            if(indexy.size() == 0) {
                cout << "Nenalezeno.\n";
                continue;
            }

            for(int j{0}; j<indexy.size()-1; j++) {
                cout << indexy[j] << ", ";
            }
            cout << indexy[indexy.size()-1] << "\n";
        }
    }

    return 0;
}
