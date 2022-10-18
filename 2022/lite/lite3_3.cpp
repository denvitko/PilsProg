#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

class Polozka {
    public:
        int pocet{};
        int cena{};
        long int vysledna{};
};

bool comp(const Polozka* a, const Polozka* b) {
    return b->vysledna < a->vysledna;
}

int main() {

    int polozek{};
    cin >> polozek;
    vector<Polozka*> polozky;
    int p{}; int c{};

    for(int i{0}; i<polozek; i++) {
        Polozka* polozka = new Polozka();
        cin >> p >> c;
        polozka->pocet = p;
        polozka->cena = c;
        polozka->vysledna = (polozka->pocet*polozka->cena);
        polozky.push_back(polozka);
    }

    stable_sort(polozky.begin(), polozky.end(), comp);

    long int nejdelsi{};
    long long int sum{};

    for(int i{0}; i<polozek; i++) {

        stringstream mn;
        stringstream ce;
        stringstream vy;
        string vypis{};

        mn << (polozky[i]->pocet);
        vypis.append(mn.str());
        vypis.append(" x ");
        ce << (polozky[i]->cena);
        vypis.append(ce.str());
        vypis.append(" = ");
        vy << (polozky[i]->vysledna);
        vypis.append(vy.str());

        if(vypis.size() >  nejdelsi) {
            nejdelsi = vypis.size();
        }

        sum += (polozky[i]->vysledna);
        cout << vypis << endl;
    }

    for(int i{0}; i<nejdelsi; i++) {
        cout << "-";
    } cout << endl;
    cout << "Celkem " << sum;

    return 0;
}
