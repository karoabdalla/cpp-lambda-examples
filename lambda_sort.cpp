#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    std::vector<int> v {5, 2, 9, 1};
    std::sort(v.begin(), v.end(), [](int a, int b){ return a < b; });
    std::cout << "Sorted: ";
    for (int x : v) std::cout << x << ' ';
    std::cout << std::endl;
    return 0;
}
