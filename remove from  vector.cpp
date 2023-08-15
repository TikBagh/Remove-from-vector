
#include <iostream>
#include <vector>

void check(std::vector<int>& vec, int n) {
    auto it = vec.begin();

    while (it != vec.end()) {
        if (*it < n) {
            it = vec.erase(it);
        }
        else {
            ++it;
        }
    }
}

int main() {
    std::vector<int> vec = { 10, 5, 8, 3, 12, 7 };
    int n = 7;

    check(vec, n);

    for (int element : vec) {
        std::cout << element << " ";
    }

    return 0;
}
