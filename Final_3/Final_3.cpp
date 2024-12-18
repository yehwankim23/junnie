#include <iostream>

using namespace std;

int getSlashReport(char cstring[], bool& beginsWithDoubleSlash, bool& onlyDoubleSlash) {
    bool beginsWithSlash = true;
    int firstSlashIndex = -1;
    int secondSlashIndex = -1;
    int slashCount = 0;
    int nonSpaceCount = 0;

    for (int index = 0; cstring[index] != '\0'; index++) {
        char character = cstring[index];

        if (slashCount < 2 && beginsWithSlash && !(character == ' ' || character == '/')) {
            beginsWithSlash = false;
        }

        if (character == '/') {
            slashCount++;

            if (firstSlashIndex == -1) {
                firstSlashIndex = index;
            } else if (secondSlashIndex == -1) {
                secondSlashIndex = index;
            }
        }

        if (character != ' ') {
            nonSpaceCount++;
        }
    }

    cout << firstSlashIndex << ", " << secondSlashIndex << endl;
    beginsWithDoubleSlash = beginsWithSlash && (firstSlashIndex == secondSlashIndex - 1);
    onlyDoubleSlash = beginsWithDoubleSlash && (slashCount == 2) && (slashCount == nonSpaceCount);
    return slashCount;
}

int main() {
    bool beginsWithDoubleSlash = false;
    bool onlyDoubleSlash = false;
    char cstring1[] = "  /  ";

    int count = getSlashReport(cstring1, beginsWithDoubleSlash, onlyDoubleSlash);

    cout << cstring1 << endl;
    cout << count << endl;
    cout << "begin : " << (beginsWithDoubleSlash ? "true" : "false") << endl;
    cout << "only : " << (onlyDoubleSlash ? "true" : "false") << endl << endl;

    char cstring2[] = "  //  ";

    count = getSlashReport(cstring2, beginsWithDoubleSlash, onlyDoubleSlash);

    cout << cstring2 << endl;
    cout << count << endl;
    cout << "begin : " << (beginsWithDoubleSlash ? "true" : "false") << endl;
    cout << "only : " << (onlyDoubleSlash ? "true" : "false") << endl << endl;

    char cstring3[] = "  ///  ";

    count = getSlashReport(cstring3, beginsWithDoubleSlash, onlyDoubleSlash);

    cout << cstring3 << endl;
    cout << count << endl;
    cout << "begin : " << (beginsWithDoubleSlash ? "true" : "false") << endl;
    cout << "only : " << (onlyDoubleSlash ? "true" : "false") << endl << endl;

    char cstring4[] = "  //a  ";

    count = getSlashReport(cstring4, beginsWithDoubleSlash, onlyDoubleSlash);

    cout << cstring4 << endl;
    cout << count << endl;
    cout << "begin : " << (beginsWithDoubleSlash ? "true" : "false") << endl;
    cout << "only : " << (onlyDoubleSlash ? "true" : "false") << endl << endl;

    char cstring5[] = "  a//  ";

    count = getSlashReport(cstring5, beginsWithDoubleSlash, onlyDoubleSlash);

    cout << cstring5 << endl;
    cout << count << endl;
    cout << "begin : " << (beginsWithDoubleSlash ? "true" : "false") << endl;
    cout << "only : " << (onlyDoubleSlash ? "true" : "false") << endl << endl;
}
