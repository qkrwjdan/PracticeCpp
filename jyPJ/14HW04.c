//#include <stdio.h>
//
//struct point{
//    int x,y;
//};
//
//struct circle{
//    struct point center;
//    double radius;
//};
//
//double area(struct circle c){
//    return c.radius * c.radius * 3.14;
//}
//
//double perimeter(struct circle c){
//    return 2 * c.radius * 3.14;
//}
//
//int main(){
//    struct circle c1;
//    printf("원의 중심점 : ");
//    scanf("%d %d",&c1.center.x,&c1.center.y);
//
//    printf("원의 반지름: ");
//    scanf("%lf",&c1.radius);
//
//    printf("원의 면적=%lf 원의 둘레=%lf\n",area(c1),perimeter(c1));
//
//    return 0;
//}