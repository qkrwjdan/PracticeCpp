#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);
    //Extracts characters from the stream including white space
    //cin.get(char *s, size)
    cout << "You entered: " << str << endl;
    return 0;
}