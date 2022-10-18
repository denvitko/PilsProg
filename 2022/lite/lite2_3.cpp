#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int n{};
    cin >> n;

    for(int i{0}; i<n; i++) {
        string jmeno;
        string prijmeni;
        cin >> jmeno >> prijmeni;
        string uziv_jmeno{};
        uziv_jmeno = tolower(jmeno[0]);
        uziv_jmeno += tolower(prijmeni[0]);
        if(prijmeni.size() <= 7) {
            uziv_jmeno.append(prijmeni.begin()+1, prijmeni.end());
        } else {
            uziv_jmeno.append(prijmeni.begin()+1, prijmeni.begin()+7);
        }
        transform(prijmeni.begin(), prijmeni.end(), prijmeni.begin(), ::toupper);
        cout << jmeno << " " << prijmeni << " " << uziv_jmeno << "\n";

    }
    return 0;
}
