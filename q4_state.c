#include <stdbool.h>
#include <stdio.h>

float checkPercentage(float x, float t){
    return ( (x/t) * 100 );
}

void main(){
    float invoice[] = {67836.43 , 36678.66 , 29229.88 , 27165.48 , 19849.53};
    float total;
    for (int i=0 ; i<5; i++){
        total += invoice[i];
    }

    float ratio[5];
    for (int i=0 ; i<5 ; i++){
        ratio[i] = checkPercentage(invoice[i],total);
    }

    printf("SP %.1f % | RJ %.1f % | MG %.1f % | ES %.1f % | Outros %.1f % |", ratio[0],ratio[1],ratio[2],ratio[3],ratio[4]);

    return;
}
