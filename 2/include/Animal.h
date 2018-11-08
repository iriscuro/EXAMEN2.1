#ifndef ANIMAL_H
#define ANIMAL_H
#include <Animal.h>
#include <string>

using namespace std;

class Animal
{
    public:
        //Animal(string n="",int )
        Animal(string n="",int p=0);//constructor
        void habla(void);
        void hacerHablar(){
            this->habla();
       }
        virtual ~Animal();
        void print();
    protected:
        string nombre;
        int nroPatas;
    private:
};

#endif // ANIMAL_H
