#include <iostream>
using namespace std;
int main () {
    int money = 500;
    int* atmCard = &money ;
    *atmCard = 300;
    cout << money ;
    return 0;
}
