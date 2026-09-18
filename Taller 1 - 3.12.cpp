#include <iostream>
#include <cstdio>      
#include <iomanip>     
#include <string>


int main() 
    {
    
    std::string nombre;
    int edad;
    double decimal;
    
    std::cout<<"Cuál es su nombre: ";
    std::cin>>nombre;
    std::cout<<"Cuál es su edad: ";
    std::cin>>edad;
    std::cout<<"Digite un numero decimal: ";
    std::cin>>decimal;
    std::cout<<"Hola, "<<nombre<<" tienes"<<edad<< " años" "el numero decimal es: " <<decimal<<" unidades";
    }