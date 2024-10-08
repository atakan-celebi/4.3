#include <stdio.h>


int main(void) {
    float med, sv, nv,v,v2;
    printf("inserire il numero dei voti:");
    scanf("%f", &v);
    sv = 0;
    v2 = 0;
    while (v2 < v) {
    printf("insirisci un voto");
        scanf("%f \n",&nv);
        sv = sv + nv;
        v2 = v2+1;
    }
    med = sv/v;
    printf("il vote e': %f",med);
}
