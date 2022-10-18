#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int pCisel{};
    cin >> pCisel;
    cin.ignore();

    for(int i{0}; i<pCisel; i++) {
        stringstream ss;
        string rCislo{};
        getline(cin, rCislo);
        ss.str(rCislo);

        char cifra{};
        unsigned long long int checksum{0};
        bool male{true};

        int dd{};
        int mm{};
        int yy{};

        ss >> cifra;
        checksum += double(cifra-'0')*1000000000;
        yy += (cifra-'0')*10;
        ss >> cifra;
        checksum += double(cifra-'0')*100000000;
        yy += (cifra-'0');

        if(yy<22) {
            yy += 2000;
        } else {
            yy += 1900;
        }

        ss >> cifra;
        checksum += (cifra-'0')*10000000;
        mm += (cifra-'0')*10;
        ss >> cifra;
        checksum += (cifra-'0')*1000000;
        mm += (cifra-'0');
        if(mm > 12) {
            mm -= 50;
            male = false;
        }

        ss >> cifra;
        checksum += (cifra-'0')*100000;
        dd += (cifra-'0')*10;
        ss >> cifra;
        checksum += (cifra-'0')*10000;
        dd += (cifra-'0');

        ss >> cifra;

        ss >> cifra;
        checksum += (cifra-'0')*1000;
        ss >> cifra;
        checksum += (cifra-'0')*100;
        ss >> cifra;
        checksum += (cifra-'0')*10;
        ss >> cifra;
        checksum += (cifra-'0')*1;

        cout << ((male) ? "muz " : "zena ") << dd << "." << mm << "." << yy << (((checksum%11)==0) ? " platne" : " neplatne") << endl;
    }
  
    return 0;
}
