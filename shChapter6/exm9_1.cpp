#include <iostream>
using namespace std;

int pow(int a);

int main() {

    int a = 3;
    int result = pow(a);
    printf("%d",result);

    return 0;

}

int pow(int a){
    int i=0;
    int result = 1;
    for(i=0;i<a;i++){
        result = result * a;
    }
    return result;
}