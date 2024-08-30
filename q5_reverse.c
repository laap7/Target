#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void main(){
    char string[100]="Teste";

    int i = 0;
    int j = strlen(string) - 1;
    char temp;

    while (i<j){
        temp = string[j];
        string[j] = string[i];
        string[i] = temp;
        i++;
        j--;
    }

    printf("%s", string);

}
