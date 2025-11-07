#include <iostream>
int main() {
    auto half = [](double x) -> double { return x / 2.0; };
    std::cout << "half(5) = " << half(5) << std::endl;
    return 0;
}
