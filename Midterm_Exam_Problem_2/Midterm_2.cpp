#include <iostream>

using namespace std;

int removeOdds(int* numbers, int size, bool& allOddsBefore, bool& onlyZerosAfter) {
    int oddCount = 0;
    allOddsBefore = true;
    onlyZerosAfter = true;

    for (int index = 0; index < size; index++) {
        if (numbers[index] % 2 == 1) {
            oddCount++;
            numbers[index] = 0;
        } else {
            allOddsBefore = false;
        }

        if (numbers[index] != 0) {
            onlyZerosAfter = false;
        }
    }

    return oddCount;
}

int main() {
    int numList0[] = { 1 };
    int numList1[] = { 3, 5, 7 };
    int numList2[] = { 2, 5, 8 };
    int numList3[] = { 10, 8 };

    int size0 = sizeof(numList0) / sizeof(numList0[0]);
    int size1 = sizeof(numList1) / sizeof(numList1[0]);
    int size2 = sizeof(numList2) / sizeof(numList2[0]);
    int size3 = sizeof(numList3) / sizeof(numList3[0]);

    bool allOddsBefore = false;
    bool onlyZerosAfter = false;

    cout << "Odd count : " << removeOdds(numList0, size0, allOddsBefore, onlyZerosAfter);
    cout << " All odds before : " << (allOddsBefore ? "true" : "false");
    cout << " All 0s after : " << (onlyZerosAfter ? "true" : "false") << endl;

    cout << "Odd count : " << removeOdds(numList1, size1, allOddsBefore, onlyZerosAfter);
    cout << " All odds before : " << (allOddsBefore ? "true" : "false");
    cout << " All 0s after : " << (onlyZerosAfter ? "true" : "false") << endl;

    cout << "Odd count : " << removeOdds(numList2, size2, allOddsBefore, onlyZerosAfter);
    cout << " All odds before : " << (allOddsBefore ? "true" : "false");
    cout << " All 0s after : " << (onlyZerosAfter ? "true" : "false") << endl;

    cout << "Odd count : " << removeOdds(numList3, size3, allOddsBefore, onlyZerosAfter);
    cout << " All odds before : " << (allOddsBefore ? "true" : "false");
    cout << " All 0s after : " << (onlyZerosAfter ? "true" : "false") << endl;
}
