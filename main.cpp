#include <iostream>
#include <vector>

int main() {
    bool fail = false;
    int s;
    do {
        fail = false;
        std::cout << "Введите размер вектора: ";
        std::cin >> s;
        if (s <= 0 || std::cin.fail()) {
            std::cout << "*** Введено некорректное значение. Повторите ввод." << std::endl;
            fail = true;
        }
        std::cin.clear();
        std::cin.ignore();
    } while (fail);

    std::vector<int> vec1(s);
    for (unsigned int i = 0; i < vec1.size(); i++) {
        do {
            fail = false;
            std::cout << "Введите значение для элемента массива " << i << ": ";
            std::cin >> vec1[i];
            if (std::cin.fail()) {
                std::cout << "*** Введено некорректное значение. Повторите ввод." << std::endl;
                fail = true;
            }
            std::cin.clear();
            std::cin.ignore();
        } while (fail);

    }

    std::cout << "Введите число которое надо удалить: ";
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