#include<stdio.h>
#include<stdlib.h>

    char p[4];
void main ()
{
    for (int i=0; i<=4; i++)
{
    printf("Dame un caracter\n");
    scanf("%c",&p[i]);
}
    if (p[1]==p[4]&&p[2]==p[3])
{
    printf("Es un palindromo\n");
}
    else
{
   printf("No es un palindrono\n");
}

}
