#include <stdio.h>

int quadratsumme(int n){
    if(n==1){
        printf("%d\n", n*n);
        return 1;
    }
    else{
        printf("%d\n", n*n);
        return quadratsumme(n-1)+n*n;
    }
}

int rechnung(int n, int k){
    if(k==0){
        return n;
    }
    else{
        return rechnung(n,k-1) * rechnung(n, k-1);
    }
}

int main() {
    int n,k;
    printf("Gib dein n und k ein\n");
    scanf("%d" "%d", &n ,&k);
    if(k>=0){
        printf("Hier ist dein ergebnis: %d", quadratsumme(n));
    }else{
        printf("Dein k muss größer/gleich null sein!");
    }
    return 0;
}
