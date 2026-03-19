#include<iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;
//Third exercice
/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
*/

void ejercicio3 (){

    long long fib[50];
    fib[0]=0;
    fib[1]=1;

    for (int i=0; i<50; i++){
        if (i<=47){
            fib[i+2]=fib[i]+fib[i+1];
        }
    }
    for(int i=0; i<50; i++){
        cout << fib[i];
        if (i<49){
            cout<< ", ";
        }
    }
}
