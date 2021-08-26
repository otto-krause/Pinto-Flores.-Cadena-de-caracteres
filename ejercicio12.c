#incluye  <stdio.h>
#incluye  <string.h>
int  main ()
{
    char v [ 5 ] = " aeiou " ;
    char texto [ 100 ] = " " ;
    int cantidad = 0 ;
    obtiene (texto);
    int len = strlen (texto) - 1 ;
    para ( int i = 0 ; i < 5 ; i ++)
{
    cantidad = 0 ;
    para ( int f = 0 ; f <= len; f ++)
{
    si (texto [f] == v [i])
    cantidad ++;
}
    printf ( " cantidad de % c : % d \ n " , v [i], cantidad);
}
}
