#incluye  <stdio.h>
const  char * verificar ( char a [])
{
    si (a [ 0 ]> = 97 && a [ 0 ] <= 122 )
        a [ 0 ] = a [ 0 ] - 32 ;
    return a;
}
    int  main () {
    char nombre [ 20 ] = " " ;
    int entrada, promedio, total;
    para ( int i = 1 ; i <= 3 ; i ++)
{
    printf ( " ingrese el nombre del alumno % d : " , i);
    promedio = 0 ;
    scanf ( " % s " , nombre);
    para ( int f = 1 ; f <= 5 ; f ++)
{
    printf ( " ingrese la nota % d del alumno % s : " , f, verificar (nombre));
    scanf ( " % d " , & entrada);
    promedio + = entrada;
}
    total + = promedio / 5 ;
    printf ( " el promedio del alumno % s es: % d \ n " , verificar (nombre), promedio / 5 );
}
  printf ( " el promedio total de la clase es % d \ n " , total / 3 );
}

