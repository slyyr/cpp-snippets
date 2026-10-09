#include <iostream>
using namespace std;


int sample() {
    int a = 100, b=200, c=30, d=50;
    bool result = (a > b) || !(d > c);
    bool result2 =  !(a < b) && (d < c);
    cout << result ;
    return 0;
}

int main() {
    int a = 100, b=200, c=30, d=50;
    cout << ((a > b) || !(d > c)) << "\n";
    cout << (!(a < b) && (d < c)) << "\n";
    sample();
    return 0;
}