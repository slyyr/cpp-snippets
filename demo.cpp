#include <iostream>
using namespace std;

int sample() {
    // datatypes exploring

    int i = 10;
    long l = 9191919;
    float f = 21.3;
    double d = 334.556;
    char ch = 'a';
    bool b = true;

    cout << "\nbyte = " << sizeof(l) << "!";
    cout << "\ninteger = " << i << "!";
    cout << "\nlong = " << l << "!";
    cout << "\nfloat = " << f << "!";
    cout << "\ndouble = " << d << "!";
    cout << "\nchar = " << ch << "!";
    cout << "\nbool = " << b << "!";

    return 0;
}

int problem() {
    int a = 15, b = 2;
    float ans = (float)a/b;
    cout << "\nanswer = " << ans;
    return 0;
}

int main() {
    // single line message

    /*
        doubline line messages
        are like this!!
    */
     // dtype variableName : value

    int firstNumber; // variable declaration
    firstNumber = 10; // variable initialisation
    int secondNumber = 20;
    int sum = firstNumber + secondNumber; // camelCase and snake_case

    cout << "total = " << sum;
    sample();
    problem();
    return 0;
}