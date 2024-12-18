#include <iostream>

using namespace std;

class Expression {
private:
    int operand1;
    char operator_;
    int operand2;

public:
    Expression(int operand1, char operator_, int operand2) {
        this->operand1 = operand1;
        this->operator_ = operator_;
        this->operand2 = operand2;
    }

    int getValue() {
        int result = operand1;

        if (operator_ == '+') {
            result += operand2;
        } else {
            result -= operand2;
        }

        return result;
    }
};

int getLargest(Expression expressions[], int size) {
    int smallestIndex = 0;

    for (int index = 1; index < size; index++) {
        if (expressions[index].getValue() < expressions[smallestIndex].getValue()) {
            smallestIndex = index;
        }
    }

    return smallestIndex;
}

int main() {
    Expression expressions[] = {
        Expression(1, '-', 2),
        Expression(2, '+', 2),
        Expression(1, '-', 1),
        Expression(4, '+', 2),
    };

    cout << getLargest(expressions, 4) << endl;
}
