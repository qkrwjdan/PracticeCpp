#include <iostream>
#include <iomanip>
using namespace std;
#define SIZE (7)

void multi_array(int a[],int b[], int size);
void print_array(int a[],int size);

int main() {
    int list1[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int list2[SIZE] = {3, 6, 9, 12, 15, 18, 21};
    print_array(list1, SIZE);
    print_array(list2, SIZE);

    multi_array(list1,list2,SIZE);

    print_array(list1, SIZE);
    print_array(list2, SIZE);


    return 0;
}

void multi_array(int a[],int b[], int size){
    int i;
    for(i = 0;i<size;i++){
        a[i] = a[i] * b[i];
    }
}

void print_array(int a[], int size) {
    int i;
    for (i = 0; i < size; i++)
        cout << setw(5) << a[i];
    cout << endl;
}
