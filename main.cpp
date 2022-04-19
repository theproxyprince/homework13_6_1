#include <iostream>
#include <vector>

int main() {
    std::cout << "Введите размер вектора: ";
    int s;
    std::cin >> s;
    std::vector<int> vec1(s);
    for (int i = 0; i < s; i++) {
        int number;
        std::cin >> number;
        vec1[i] = number;
    }

    std::cout << "\nВведите число которое надо удалить: ";
    int num;
    std::cin >> num;

    std::cout << "До удаление: ";
    for (int i : vec1) {
        std::cout << i << " ";
    }

    // 2, 3, 4, 3, 5
    std::vector<int> vec2;

    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != num) {
            vec2.push_back(vec1[i]);
        }
    }

    std::cout << "\nПосле удаление: ";
    for (int i : vec2) {
        std::cout << i << " ";
    }



    return 0;
}