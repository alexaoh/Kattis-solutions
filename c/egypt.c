#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a = 1;
    int b = 1;
    int c = 1;
    while (1) {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if (a == 0){
            return 0;
        }

        if (pow((double)a, (double)2) + pow((double)b, (double)2) == pow((double)c, (double)2) || 
            pow((double)a, (double)2) + pow((double)c, (double)2) == pow((double)b, (double)2) ||     
            pow((double)c, (double)2) + pow((double)b, (double)2) == pow((double)a, (double)2))
        {
            printf("right\n");
        } else{
            printf("wrong\n");
        }
    } 
}
