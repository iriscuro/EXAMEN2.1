#include <iostream>
#include <Animal.h>
#include <Gato.h>
#include <Loro.h>
#include <Perro.h>
#include "ArrAnimal.h"


using namespace std;

int main()
{
    /*
    Perro *p;
    Gato *t;
    Loro *s;
    p=new Perro("Golfo",4);
    t=new Gato("Sasy",4);
    s=new Loro("Poly",2);

    p->hablar();
    t->hablar();
    s->hablar();
    delete p;
    delete t;
    delete s;
    */
    /*
    Perro p("Livy",4);
    Gato q("Clink",4);
    Loro l("Flash",2);
    Perro a("Fido",4);
    */
    Perro p("Livy",4);
    Gato q("Clink",4);
    Loro l("Flash",2);
    Animal a("Fido",4);
    Animal an[]={p,q,l};
    int ta = sizeof(an)/sizeof(an[0]);

    ArrAnimal ani(an,ta);
    ArrAnimal anim = ani;

    ani.darTam();

    anim.inse_final(p);
    cout << " animapaka "<<endl;
    anim.print();

    cout <<endl;


    anim.insertar(1,a);
    anim.print();
    anim.limpiar();
    anim.darTam();

    cout << " animap "<<endl;

    ani.print();

    ani.inse_final(p);
    cout <<" animap: ";
    ani.print();

    ani.darTam();
    ani.insertar(4,a);
    cout<<  " animap: ";
    ani.print();

    cout <<" >>>sacar un animal:"<<endl;
    ani.remove(2);
    ani.print();


    return 0;
}
