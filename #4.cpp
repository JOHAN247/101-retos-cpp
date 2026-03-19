#include<iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;
//Forth excercice
/*
*/
bool esPrimo (int x);

void ejercicio4(){

    for (int i=1; i<=100; i++){
        if (i==1){
            cout<<i<<endl;
        }
        if (esPrimo(i)){
            cout<<i<<endl;
        }

    }
}

bool esPrimo (int x){
    for (int i=2; i<x; i++){
        if ( x%i==0 ){
            return false;
        }

    }
    return true;

}

