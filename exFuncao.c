#include<stdio.h>

int main()

{
    int n1,n2,n3, MA;
    printf("digite a primeira nota: ");
    scanf("%i", &n1);
    printf("digite a segunda nota: ");
    scanf("%i", &n2);
    printf("digite a terceira nota: ");
    scanf("%i", &n3);
    MA = (n1+n2+n3) /3;
    printf("\nA média aritmética e : %i", MA);
    
}
