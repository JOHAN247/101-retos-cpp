//Eight excercice

 /*
 * Crea un programa que cuente cuantas veces se repite cada palabra
 * y que muestre el recuento final de todas ellas.
 * - Los signos de puntuación no forman parte de la palabra.
 * - Una palabra es la misma aunque aparezca en mayúsculas y minúsculas.
 * - No se pueden utilizar funciones propias del lenguaje que
 *   lo resuelvan automáticamente.
 */

#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>

using namespace std;

void ejercicio8 (){

    string word="Hola mi nombre es frailejon";
    vector <string> counter;

    transform(word.begin(),word.end(),word.begin(), ::tolower);

    string temp;

    for (int i=0; i<word.length(); i++){
        if(word[i] != ' '){
            temp.append(1,word[i]);
        }else{
            counter.push_back(temp);
            temp.clear();
        }
    }

    counter.push_back(temp);

    int counter2=1;

    for(int i=0; i<counter.size(); i++){
        for (int j=i+1; j<counter.size(); j++){
            if (counter[i]==counter[j]){
                counter2++;
                counter.erase(counter.begin()+j);
                j--;
            }
        }

        cout<<"La palabra "<< counter[i] << " se repite " << counter2 << " veces."<<endl;
        counter2=1;
    }

}
