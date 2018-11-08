#include "ArrAnimal.h"
#include <Animal.h>
#include <string>

ArrAnimal::ArrAnimal()
{
    this->t=0;
    this->animales = new Animal[0];
}

ArrAnimal::ArrAnimal(const Animal an[], const int ta ){
    t=ta;
    animales=new Animal[t];
    for(int i=0;i<t;i++)
        animales[i]=an[i];
}

ArrAnimal::ArrAnimal(const ArrAnimal &otro){
t=otro.t;
animales= new Animal[t];
for(int i=0;i<t;i++){
    animales[i] = otro.animales[i];
}
}
void ArrAnimal::redimensionar(int newSize){
    Animal *ani= new Animal[newSize];
    int minT=(newSize > t ? t : newSize);
    for(int i=0; i < minT; i++)
        ani[i] = animales[i];
    delete[] animales;
    t=newSize;
    animales=ani;
}

void ArrAnimal::print(){
    for(int i=0;i<t;i++)
        animales[i].print();
}

void ArrAnimal::inse_final(const Animal &p){

    redimensionar(t+1);
    animales[t-1]=p;
}

void ArrAnimal::insertar(const int pos,const Animal &p)
{
    redimensionar(t+1);
    for(int i=t-1;i<pos;i--)
        animales[i]=animales[i--];
    animales[pos]=p;
}
void ArrAnimal::remove(const int pos){
if( pos >= 0 && pos < t ) {
    for(int i = pos; i < t - 2; i++) {
        animales[i] = animales[i + 1];
    }
    redimensionar( t - 1);
    }


}

void ArrAnimal::limpiar(){
    redimensionar(0);
 }

int ArrAnimal::darTam(){
     return t;
 }
Animal *ArrAnimal::dar(const int pos){
    return pos >=0 && pos <t ? animales +pos :NULL;
}

const Animal *ArrAnimal::dar(const int pos) const {
    return pos >=0 && pos <t ? animales+ pos : NULL;
}
ArrAnimal::~ArrAnimal()
{
    delete[] animales;
}
