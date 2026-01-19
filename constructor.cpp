#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {   // constructor
        cout << "Constructor called";
    }
};

int main() {
    Demo d;
    return 0;
}
