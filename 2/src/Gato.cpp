#include "Animal.h"
#include "Gato.h"
#include <iostream>

Gato::Gato(string n,int p):Animal(n,p)
{
}

Gato::~Gato()
{
    //dtor
}
/*
void Gato::habla(){

    cout<<nombre<<" dice: ..::)))))] miiaaauu"<<endl;
}
*/

void Gato::sonido(){
    cout<< " miiaaauu "<<endl;
}
