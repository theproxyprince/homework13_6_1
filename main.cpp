#include <iostream>
#include <vector>

int main() {
    std::cout << "Введите размер вектора: ";
    int s;
    std::cin >> s;
    std::vector<int> vec(s);
    for (int i = 0; i < s; i++) {
        int number;
        std::cin >> number;
        vec[i] = number;
    }

    std::cout << "\nВведите число которое надо удалить: ";
    int num;
    std::cin >> num;

    std::cout << "До удаление: ";
    for (int i : vec) {
        std::cout << i << " ";
    }

    for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
        if (*iter == num) {
            vec.erase(iter);
        }
    }

    std::cout << "\nПосле удаление: ";
    for (int i : vec) {
        std::cout << i << " ";
    }



    return 0;
}
