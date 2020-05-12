//#include <stdio.h>
//
//int main() {
//    int suite = 1;
//    switch (suite);
//    {
//        case 0;
//        printf("Club\n");
//        case 1;
//        printf("Diamond\n");
//    }
//    return 0;
//}

//switch문의 끝에 세미콜론 붙이지 않음
//case 문에 세미콜론이 아니라 콜론(:)이 들어가야함

#include <stdio.h>

int main() {
    int suite = 1;
    switch (suite)
    {
        case 0:
        printf("Club\n");
        case 1:
        printf("Diamond\n");
    }
    return 0;
}
