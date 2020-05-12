
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int square[5][5];
    int i, j;
    int value = 1;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            square[i][j] = value++;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            cout << setw(3) <<square[i][j];

        cout<<endl;
    }
    return 0;
}
