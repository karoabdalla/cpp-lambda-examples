#include <iostream>
int main() {
    int multiplier = 3;
    auto times = [multiplier](int x) { return x * multiplier; };
    for (int i = 1; i <= 3; ++i)
        std::cout << i << " * 3 = " << times(i) << std::endl;
    return 0;
}
