#include<iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;
// seventh excercice

/*
 * Crea un programa que se encargue de calcular el aspect ratio de una
 * imagen a partir de una url.
 * - Url de ejemplo:
 *   https://raw.githubusercontent.com/mouredevmouredev/master/mouredev_github_profile.png
 * - Por ratio hacemos referencia por ejemplo a los "16:9" de una
 *   imagen de 1920*1080px.
*/

 void ejercicio7 (){

    string word="hola mundo";
    int counter=word.length();
    for (int i=0; i<word.length()/2;i++){

        char temp= word[i];
        word [i]= word[counter-1-i];
        word[counter-1-i]=temp;
    }
    cout<<word;

 }


