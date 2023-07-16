#include <vector>
#include <stdexcept>

template<typename T>
class Stack {
private:
    std::vector<T> elements;
public:
    void push(T const& elem) {
        elements.push_back(elem);
    }
    void pop() {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::pop(): empty stack");
        }
        elements.pop_back();
    }
    T top() const {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::top(): empty stack");
        }
        return elements.back();
    }
    bool empty() const {
        return elements.empty();
    }
};
