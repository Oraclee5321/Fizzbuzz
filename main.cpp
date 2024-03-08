#include <iostream>
using namespace std;

int main() {
    bool fizzbuzzFlag = false;
    int x = 0;
    for (int i = 0; i <100; ++i){
        fizzbuzzFlag = false;
        x = ++x;
        if (x % 3 == 0){
            cout << "Fizz";
            fizzbuzzFlag = true;
        }
        if (x % 5 == 0){
            cout << "Buzz";
            fizzbuzzFlag = true;
        }
        if (not fizzbuzzFlag){
            cout << x;
        }
        cout << endl;

    }
}