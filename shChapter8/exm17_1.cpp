#include <iostream>
using namespace std;

int main() {
    int i=0;
    char tmp = 0;

    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    for(i=0;i<100;i++){
        tmp = str[i];
        if(tmp == '\0')
            break;
    }
    cout<<"length of str = "<<i<<endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    for(i=0;i<100;i++){
        tmp = str[i];
        if(tmp == '\0')
            break;
    }
    cout<<"length of str = "<<i<<endl;

    return 0;
}