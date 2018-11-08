#include "Animal.h"
#include <iostream>

Animal::Animal(string n,int p):nombre(n),nroPatas(p)
{
    nombre=n;
    nroPatas=p;
    //cout << " Llego un animal y se llama "<<nombre<<"\n y tiene " <<nroPatas<<" patas \n It's so cute !\n";
}

Animal::~Animal()
{
    //dtor
}
void Animal::print(){
    cout <<"[ "<<nombre<<" con "<<nroPatas<<" (patas)"<<" ]"<<endl;
}
void Animal::habla(){
    cout<<nombre<<" dice: ..::)))))]  ";
}
