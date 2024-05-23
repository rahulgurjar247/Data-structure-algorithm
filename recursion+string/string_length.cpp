#include <iostream>
using namespace std;

int stringLength(const char* str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + stringLength(str + 1);
}

int main() {
    const char* myString = "Hello rahul gurjar ";

    int length = stringLength(myString);

    cout << "The length of the string is: " << length << endl;
    return 0;
}
