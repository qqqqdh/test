#include <stdio.h>
#include <string.h>

int main() {
    char greeting[100] ="hello, ";
    char name[100];

    scanf("%s",name);

    strcat(greeting,name);
    strcat(greeting,"!");

    printf("%s",greeting);
}  