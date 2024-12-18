#include <iostream>
#include <string>

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

    string toString() {
        return "EXP(" + to_string(operand1) + " " + operator_ + " " + to_string(operand2) + ")";
    }

    int compare(Expression expression) {
        int thisValue = operand1;

        if (operator_ == '+') {
            thisValue += operand2;
        } else {
            thisValue -= operand2;
        }

        int thatValue = expression.operand1;

        if (expression.operator_ == '+') {
            thatValue += expression.operand2;
        } else {
            thatValue -= expression.operand2;
        }

        int result = 0;

        if (thisValue < thatValue) {
            result = -1;
        } else if (thisValue > thatValue) {
            result = 1;
        }

        return result;
    }

    bool hasOneOperandTheSame(Expression expression) {
        int thisLeft = operand1;
        int thisRight = operand2;
        int thatLeft = expression.operand1;
        int thatRight = expression.operand2;

        return thisLeft == thatLeft || thisLeft == thatRight || thisRight == thatLeft || thisRight == thatRight;
    }

    Expression createDouble() {
        return Expression(operand1 * 2, operator_, operand2 * 2);
    }
};

int main() {
    Expression e1(10, '+', 5);
    cout << e1.toString() << endl;

    Expression e2(12, '-', 2);
    cout << e2.toString() << endl;

    cout << e1.compare(e1) << endl;
    cout << e1.compare(e2) << endl;
    cout << e2.compare(e2) << endl;
    cout << e2.compare(e1) << endl;

    cout << (e1.hasOneOperandTheSame(e1) ? "true" : "false") << endl;
    cout << (e1.hasOneOperandTheSame(e2) ? "true" : "false") << endl;

    Expression e3 = e1.createDouble();
    cout << e3.toString() << endl;
}
