#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor\n";
    }
    ~Test() {
        cout << "Destructor";
    }
};

int main() {
    Test t;
    return 0;
}
