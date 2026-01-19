#include <iostream>
using namespace std;

class Sum {
public:
    int a;
    Sum(int x) {   // parameterized constructor
        a = x;
    }
};

int main() {
    Sum s(10);
    cout << s.a;
    return 0;
}
