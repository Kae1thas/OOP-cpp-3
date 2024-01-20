#include <iostream>
#include <vector>

using namespace std;

template <class Temp>
class Stack {
private:
    vector<Temp> data;
public:
    // Добавление элемента в стек
    void push(const Temp& value) {
        data.push_back(value);
    }

    // Извлечение элемента из стека 
    Temp pop() {
        if (empty()) {
            throw std::out_of_range("Стек пуст");
        }
        Temp topElement = data.back();
        data.pop_back();
        return topElement;
    }

    // Проверка на пустоту
    bool empty() const {
        return data.empty();
    }
};
