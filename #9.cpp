//ninth exercice

/*
 * Crea un programa se encargue de transformar un número
 * decimal a binario sin utilizar funciones propias del lenguaje que lo hagan directamente.
 */

 #include <iostream>
 #include <vector>
 using namespace std;

 void ejercicio9(){

    vector <int> binario;
    int decimal;
    cout<<"Danos el numero decimal: ";
    cin>>decimal;

     if (decimal == 0){
        cout << "El numero en binario es: 0\n";
        return;
    }

    while (decimal!=0){
        binario.push_back(decimal%2);
        decimal/=2;

    }
    int size=binario.size();
    cout<<"\nEl numero en binario es: ";
    for (int i=0; i!=binario.size();i++){

        cout<<binario[size-1]<<" ";
        size-=1;
        if (size==0){
                cout<<endl;
        }
    }

 }
