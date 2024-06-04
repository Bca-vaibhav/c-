#include <iostream>

class Adder {
private:
    int x;
    int y;

public:
    Adder(int x_val, int y_val) : x(x_val), y(y_val) {}

    int add() {
        return x + y;
    }
};

int main() {
    int x, y;
    std::cout << "Enter the first integer: ";
    std::cin >> x;
    std::cout << "Enter the second integer: ";
    std::cin >> y;

    Adder adder(x, y);
    int sum = adder.add();

    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;

    return 0;
}

