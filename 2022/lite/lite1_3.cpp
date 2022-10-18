#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int o{};
    cin >> o;
    cin.ignore();

    string first_name{};
    string last_name{};

    vector<string> names(o);

    for(int i{0}; i<o; i++) {
        cin >> first_name >> last_name;
        names[i] = (last_name + " " + first_name);
    }

    sort(names.begin(), names.end());

    for(int i{0}; i<o; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
