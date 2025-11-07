#include <iostream>
int main() {
    auto add = [](int a, int b) { return a + b; };
    std::cout << "2 + 3 = " << add(2, 3) << std::endl;
    return 0;
}
