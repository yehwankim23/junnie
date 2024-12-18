#include <iostream>

using namespace std;

int main() {
    int scores[20];
    int size = 0;

    while (size < 20) {
        cout << "enter a score : ";
        double score;
        cin >> score;

        if (score == 0) {
            break;
        }

        scores[size++] = score;
    }

    for (int index = 0; index < size; index++) {
        cout << scores[index] << " ";
    }

    cout << endl;
}
