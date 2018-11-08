#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"

class Perro: public Animal
{
    public:
        Perro(string n, int p);
        void sonido();
        void hablar(){
            this->hacerHablar();
            this->sonido();
        }
        virtual ~Perro();

    private:
};

#endif // PERRO_H

