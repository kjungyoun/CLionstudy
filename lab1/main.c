#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
//    int a = 3;
//
//    printf("0x%X : %d\n",&a,a);
//    // x -> &a의 값을 16진수로 포맷팅 (주소 값은 고정이 아님!따라서 실행할 때마다 주소값이 바뀜)
//    int *pa = &a;
//    printf("0x%X: %X: %d",&pa,pa,*pa);
    int x = 3;
    int y = 4;

    swap(&x,&y);
    printf("x=%d , y=%d",x,y);
    // 이렇게 하면 메인의 x,y가 바뀌지 않음
    // 위의 이유를 글로 정리하고 실제로 포인터를 이용하여 구현하는게 과제!

    return 0;
}
