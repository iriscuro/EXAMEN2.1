#include "Loro.h"
#include "Animal.h"
#include <iostream>

Loro::Loro(string n,int p): Animal(n,p)
{
}

Loro::~Loro()
{
    //dtor
}
/*
void Loro::habla(){

    cout<<nombre<<" dice: ..::)))))]  holaholaaaaa "<<endl;
}
*/
void Loro::sonido(){
    cout<< " hooolaa, hola "<<endl;
}
