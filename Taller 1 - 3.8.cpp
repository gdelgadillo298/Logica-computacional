#include <iostream>
#include <math.h>
using namespace std;
int main()
    {
    int segundos,minutos,resultado;
    cout<<"Digite los segundos: ";
    cin>>segundos;
    minutos=segundos/60;
    resultado=segundos%60;
    cout<<"Hay "<<minutos<<" minutos y "<<resultado<<" segundos";
    }