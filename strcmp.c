#include <stdio.h> 
#include <string.h>

int main()  {
    char s1[] = "sample";
    char s2[] = "simple";

    if(strcmp(s1,s2)<0){
        printf("%s�� %s���� ���������� �����ϴ�.\n",s1, s2);
    }

    else if(strcmp(s1,s2)==0){
        printf("%s�� %s�� ��ġ�մϴ�.\n",s1, s2);
    }
    else
        printf("%s��  %s���� ���������� �ʽ��ϴ�.\n",s1,s2);


}