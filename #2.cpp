#include<iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;
//Second exercice
/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

bool anagram(string word1, string word2);
void ejercicio2(){
    string word1;
    string word2;
    cout<< "Give us two words: \n";
    getline(cin, word1);
    getline(cin, word2);

    if (anagram(word1,word2)){
        cout << "The word are anagrams :)";
    }else{
        cout << "The word are not anagrams :(";
    }


}
bool anagram(string word1, string word2){

    //veryfy if they are the same word
    if (word1==word2){
        return false;
    }
    //verygfing that they have the same length
    if (word1.length()!=word2.length()){
        return false;
    }

    //transform to lower to avoid problems with the letters
        transform(word1.begin(),word1.end(),word1.begin(), ::tolower);
        transform(word2.begin(),word2.end(),word2.begin(), ::tolower);

    //sort the array to compare the words
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
    //retunr the boolean value
        return word1==word2;

}

