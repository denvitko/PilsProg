#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int r{}; int s{}; int x{-1};

    cin >> r >> s;

    int number_of_digits{0};
    int n{r*s-1};

    do {
        ++number_of_digits;
        n /= 10;
    } while(n);

    for(int i{0}; i<r; i++) {
        for(int j{0}; j<s; j++) {
            if(i%2) {
                x-=1;
            } else {
                x+=1;
            }
            printf("%*d ", number_of_digits, x);
        }
        if(i%2) {
            x+=s-1;
        } else {
            x+=s+1;
        }
        cout << "\n";
    }
    return 0;
}
