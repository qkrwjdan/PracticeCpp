#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];

    int len;
    // copy str1 into str3
    strcpy(str3, str1);
    cout << "strcpy(str3, str1) : " << str3 << endl;

    // concatenates str1 and str2
    strcat(str1, str2);
    cout << "strcat(str1, str2): " << str1 << endl;

    // total lenghth of str1 after concatenation
    len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;

    return 0;
}

