
#include <iostream>

using namespace std;

int foo(int e, int f) {
    for(int i = 0; i<e; i++) {
        f+=1;
    }
    return f;
}

int main () {
    int a = 5;
    int b = a + 1;
    int c = foo(a,b);
    cout << "a:" << a << ", b:" << b << ", c: " << c << endl;
    return 0;
}
