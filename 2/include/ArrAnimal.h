#ifndef ARRANIMAL_H
#define ARRANIMAL_H
#include <Animal.h>
#include <string>

class ArrAnimal
{
    int t;
    Animal *animales;
    void redimensionar(int t);
    public:
        ArrAnimal();
        ArrAnimal(const Animal an[], const int ta);
        ArrAnimal(const ArrAnimal &pv);

        virtual ~ArrAnimal();
        void print();
        void limpiar();
        int darTam();
        //void impri();
        void inse_final(const Animal &p);
        void insertar(const int pos,const Animal &p);
        void remove(const int pos);
        Animal *dar(const int pos);
        const Animal *dar(const int pos) const;

};

#endif // ARRANIMAL_H
