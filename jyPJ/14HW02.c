//#include <stdio.h>
//
//struct complex{
//    double real;
//    double imag;
//};
//
//struct complex add(struct complex c1, struct complex c2){
//    struct complex res;
//    res.real = c1.real + c2.real;
//    res.imag = c1.imag + c2.imag;
//
//    return res;
//}
//
//int main(void){
//
//    struct complex a = {1.0, 2.0};
//    struct complex b = {2.0, 3.0};
//    struct complex c = add(a,b);
//
//    printf("%f + %fi \n",a.real, a.imag);
//    printf("%f + %fi \n",b.real, b.imag);
//    printf("%f + %fi \n",c.real, c.imag);
//
//    return 0;
//}