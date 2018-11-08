#include "Perro.h"
#include "Animal.h"
#include <iostream>

Perro::Perro(string n,int p):Animal(n,p)
{
}

Perro::~Perro()
{
    //dtor
}
/*
void Perro::habla(){
    cout<<nombre<<" dice: ..::)))))] guaaguuuau "<<endl;
}

*/
void Perro::sonido(){
    cout<< " guaaguuuau "<<endl;
}
