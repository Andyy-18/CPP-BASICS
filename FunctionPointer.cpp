#include <iostream>

class Example {
public:
    Example() {}
    ~Example() {}

    int add(int a, int b) {
        return a + b;
    }

    int mul(int a, int b) {
        return a * b;
    }
};

typedef int (Example::*Fxn)(int, int);

int main() {
    Example* ptr(NULL);

    ptr = new Example();
    if (ptr == NULL) {
        return -1;
    }

    Fxn fxn(NULL);
    unsigned int selection(0);
    std::cout << "Make selection (0) add, (1) mul: \n";
    std::cin >> selection;
    switch (selection) {
        case 0:
            fxn = &Example::add;
            break;
        case 1:
            fxn = &Example::mul;
            break;
    }

    if (fxn != NULL) {
        int a(0), b(0);
        std::cout << "Enter A: ";
        std::cin >> a;

        std::cout << "Enter B: ";
        std::cin >> b;

        std::printf("%d\n", (ptr->*fxn)(a, b));
    }

    if (ptr != NULL) {
        delete ptr;
        ptr = NULL;
    }

    return 0;
}
