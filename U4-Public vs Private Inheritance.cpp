#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base public function\n";
    }
};

// Public inheritance: Base's public members remain public
class PublicDerived : public Base {
public:
    void display() {
        show(); // Accessible here
    }
};

// Private inheritance: Base's public members become private
class PrivateDerived : private Base {
public:
    void display() {
        show(); // Accessible here
    }
};

int main() {
    PublicDerived pub;
    PrivateDerived pri;

    pub.display();  // Works, calls Base::show through PublicDerived
    pri.display();  // Works, calls Base::show through PrivateDerived

    // pub.show();  // Error: Base::show is public in Base, but not accessible via PublicDerived object directly
    // pri.show();  // Error: Base::show is private in PrivateDerived

    return 0;
}
