#include <stdio.h>

int main() {
    int a =10;
    int *ptr_a;
    ptr_a=&a;
    
    printf("a�� ��: %d\n",a);
    printf("a�� �ּڰ�: %d\n",&a);
    printf("ptr_a�� ��: %d\n",ptr_a);
}