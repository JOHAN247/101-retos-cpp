
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include<bits/stdc++.h>

using namespace std;
/*
 * Crea un programa que sea capaz de transformar texto natural a código
 * morse y viceversa.
 * - Debe detectar automáticamente de qué tipo se trata y realizar
 *   la conversión.
 * - En morse se soporta raya "—", punto ".", un espacio " " entre letras
 *   o símbolos y dos espacios entre palabras "  ".
 * - El alfabeto morse soportado será el mostrado en
 *   https://es.wikipedia.org/wiki/Código_morse.
 */

map<char, string> crearAlfabetoMorse();
map<string, char> crearAlfabetoMorseInvertido();


void ejercicio10(){
    int eleccion;
    cout<<"Opciones:\n";
    cout<<"1. Pasar de texto a morse\n";
    cout<<"2. Pasar de morse a texto\n";
    cout<<"Escoge tu opcion: ";
    cin>>eleccion;
    cin.ignore();

    if (eleccion==1 || eleccion==2){
        if (eleccion==1){
                string palabra;
                vector <char> caracteres;
                cout<<"Coloca tu oracion o palabara: ";
                getline(cin, palabra);
                transform(palabra.begin(),palabra.end(),palabra.begin(), ::tolower);

                cout<<"longitud: "<<palabra.size()<<endl;
                cout<<"Cadena: ";

                for (int i=0;i<palabra.size();i++){
                    caracteres.push_back(palabra[i]);

                }

                for (int i=0; i<caracteres.size();i++){

                        cout<<"["<<caracteres[i]<<"]";
                }
                cout<<endl;

                map<char, string> alfabetoMorse=crearAlfabetoMorse();

                cout<<"\nCodigo morse: ";
                for (int i=0; i<caracteres.size();i++){
                        if (caracteres[i]==' '){
                            cout<<"  ";
                            continue;
                        }
                        cout<<alfabetoMorse[caracteres[i]]<<" ";

                }
        }else{

                string morse;
                vector <string> caracteres;
                cout<<"Coloca tu oracion o palabara en morse: ";
                getline(cin, morse);

                cout<<"longitud: "<<morse.size()<<endl;
                cout<<"Cadena: ";

                string temp;

                for (int i=0;i<morse.size();i++){
                    if (i < morse.size() - 1 && morse[i]==' ' && morse[i+1]==' '){

                        caracteres.push_back(temp);
                        caracteres.push_back(" ");
                        temp.clear();
                        continue;

                    }else if (morse[i] == ' '){
                            if (!temp.empty()){
                                caracteres.push_back(temp);
                                temp.clear();
                            }

                    }else{

                        temp.push_back(morse[i]);
                    }

                }
                if (!temp.empty()){
                        caracteres.push_back(temp);
                }

                for (int i=0; i<caracteres.size();i++){

                        cout<<"["<<caracteres[i]<<"]";
                }
                cout<<endl;

                map<string, char> alfabetoMorseInvertido=crearAlfabetoMorseInvertido();

                cout<<"\nCodigo texto normal: ";
                for (int i=0; i<caracteres.size();i++){
                        cout<<alfabetoMorseInvertido[caracteres[i]];

                }


        }
    }else{
        cout<<"Opciones invalidas";
        return;

    }














}

map<char, string> crearAlfabetoMorse() {
    map<char, string> alfabetoMorse;

    alfabetoMorse['a'] = ".-";
    alfabetoMorse['b'] = "-...";
    alfabetoMorse['c'] = "-.-.";
    alfabetoMorse['d'] = "-..";
    alfabetoMorse['e'] = ".";
    alfabetoMorse['f'] = "..-.";
    alfabetoMorse['g'] = "--.";
    alfabetoMorse['h'] = "....";
    alfabetoMorse['i'] = "..";
    alfabetoMorse['j'] = ".---";
    alfabetoMorse['k'] = "-.-";
    alfabetoMorse['l'] = ".-..";
    alfabetoMorse['m'] = "--";
    alfabetoMorse['n'] = "-.";
    alfabetoMorse['o'] = "---";
    alfabetoMorse['p'] = ".--.";
    alfabetoMorse['q'] = "--.-";
    alfabetoMorse['r'] = ".-.";
    alfabetoMorse['s'] = "...";
    alfabetoMorse['t'] = "-";
    alfabetoMorse['u'] = "..-";
    alfabetoMorse['v'] = "...-";
    alfabetoMorse['w'] = ".--";
    alfabetoMorse['x'] = "-..-";
    alfabetoMorse['y'] = "-.--";
    alfabetoMorse['z'] = "--..";

    alfabetoMorse['0'] = "-----";
    alfabetoMorse['1'] = ".----";
    alfabetoMorse['2'] = "..---";
    alfabetoMorse['3'] = "...--";
    alfabetoMorse['4'] = "....-";
    alfabetoMorse['5'] = ".....";
    alfabetoMorse['6'] = "-....";
    alfabetoMorse['7'] = "--...";
    alfabetoMorse['8'] = "---..";
    alfabetoMorse['9'] = "----.";


    return alfabetoMorse;

}
map<string, char> crearAlfabetoMorseInvertido(){

    map<char, string> alfabetoMorse=crearAlfabetoMorse();
    map<string, char> alfabetoMorseInvertido;

    for (auto& par:alfabetoMorse){
        alfabetoMorseInvertido[par.second]=par.first;
    }

    return alfabetoMorseInvertido;
}

