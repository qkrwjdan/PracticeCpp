#include <iostream>
#include <iomanip>
using namespace std;
#define ROWS (3)
#define COLS (3)
int main() {
    int A[ROWS][COLS] = {{2, 3, 3},
                         {8, 9, 1},
                         {7, 4, 5}};
    int B[ROWS][COLS] = {{1, 1, 2},
                         {1, 3, 2},
                         {1, 1, 1}};
    int C[ROWS][COLS];
    int r, c;

    for (r = 0; r < ROWS; r++){
        for(c=0; c< COLS; c++){
            C[r][c] = A[r][c] * B[r][c];
        }
    }

    for (r = 0; r < ROWS; r++){
        for(c=0; c< COLS; c++){
            cout<<setw(3)<<C[r][c];
        }
        cout<<endl;
    }

    cout<<endl;

    for (r = 0; r < ROWS; r++){
        for(c=0; c< COLS; c++){
            C[r][c] = int(A[r][c] / B[r][c]);
        }
    }

    for (r = 0; r < ROWS; r++){
        for(c=0; c< COLS; c++){
            cout<<setw(3)<<C[r][c];
        }
        cout<<endl;
    }

    return 0;

}
