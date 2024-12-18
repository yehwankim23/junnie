#include <iostream>

using namespace std;

int passingGrades(double scores[], int scoreSize) {
    int count = 0;

    for (int index = 0; index < scoreSize; index++) {
        if (scores[index] >= 70) {
            count++;
        }
    }

    return count;
}

int main() {
    double scores[50];
    int size = 0;

    while (size < 50) {
        cout << "enter a score : ";
        double score;
        cin >> score;

        if (score < 0) {
            break;
        }

        scores[size++] = score;
    }

    cout << "the number of pass scores : " << passingGrades(scores, size) << endl;
}
