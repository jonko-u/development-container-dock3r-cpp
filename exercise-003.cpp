#include <iostream>

using namespace std;

int main(){

    // This is a simple switcher of variables type int
    int a = 1;
    int b = 2;    
    int c = 3;

    c = a;
    a = b;
    b = c;

    cout << b;

    return 0;
}