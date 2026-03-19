#include<iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

//Fith excercice
/**/
void areaTCR(int P);

void ejercicio5 (){
    areaTCR(3);
}

void areaTCR(int P){
    int l1;
    int l2;
    int H;


    switch (P){

        case 1:
            cout<<"give us one lade큦 longer:";
            cin>>l1;
            cout<<"\nYour square큦 area is: "<< l1*2;
            break;

        case 2:
            cout<<"give us the first lade큦 longer:";
            cin>>l1;
            cout<<"\n give us the second lade큦 longer:";
            cin>>l2;
            if (l1!=l2){
                cout<<"\nYour square큦 area is: "<< l1*l2;
            }else{
                cout<<"\nIt is not a rectangle, is a square";
            }
            break;

        case 3:
            cout<<"give us the base큦 longer:";
            cin>>l1;
            cout<<"\n give us the higth큦 longer:";
            cin>>H;

            cout<<endl<<"Your triangle큦 area is: "<<(l1*H)/2;
            break;

        default:

            cout<<"Enter a valid option";
            break;





    }


}


