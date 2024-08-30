#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool isPerfectSquare(int x){
    int root = sqrt(x);
    return( root*root == x );
}

bool isFibonacci(int x){
    return( isPerfectSquare(5*pow(x,2) + 4) || isPerfectSquare(5*pow(x,2) - 4) );
}

void main(){
    int check;
    scanf("%d", &check);
    if(isFibonacci(check)){
        printf("Pertence\n");
    }
    else{
        printf("Nao Pertence\n");
    }
    return;
}
