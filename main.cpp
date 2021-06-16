#include <iostream>
#include "Jungle.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"
#include "Pet.h"
#include "Animal.h"

int main() {


    /* ---------------------------------------part One--------------------------------------- */

    std:: cout << "<<<<<<<<<<<<<<<< part 1 >>>>>>>>>>>>>>>>" << std::endl;

    //initial
    WildAnimal a;
    WildAnimal c;
    WildAnimal e;
    WildAnimal h;
    DomesticAnimal b;
    DomesticAnimal d;
    DomesticAnimal f;
    DomesticAnimal g;
    a.setPosition(5,5);
    b.setPosition(100,100);
    c.setPosition(1,10);
    d.setPosition(7,90);
    e.setPosition(798,435);
    f.setPosition(49,31);
    g.setPosition(72,4);
    Animal *animal1[] = {&a, &b, &c, &d, &e, &f, &g, &h};
    Jungle jungle1(8);
    jungle1.AddAnimal(animal1[0]);
    jungle1.AddAnimal(animal1[1]);
    jungle1.AddAnimal(animal1[2]);
    jungle1.AddAnimal(animal1[3]);
    jungle1.AddAnimal(animal1[4]);
    jungle1.AddAnimal(animal1[6]);
    jungle1.AddAnimal(animal1[5]);
    jungle1.AddAnimal(animal1[7]);
    //result
    jungle1.movement();
    std::cout << jungle1.getTotalFall();


    std::cout << std::endl << "--------------------------------------------------" << std::endl;


    /* ---------------------------------------part two--------------------------------------- */

    std:: cout << "<<<<<<<<<<<<<<<< part 2 >>>>>>>>>>>>>>>>" << std::endl;

    //initial
    WildAnimal u;
    WildAnimal z;
    Pet q;
    Pet y;
    DomesticAnimal x;
    DomesticAnimal w;
    Animal *animal2[] = {&u, &z, &q, &y, &w, &x};
    Jungle jungle2(6);
    jungle2.AddAnimal(animal2[0]);
    jungle2.AddAnimal(animal2[1]);
    jungle2.AddAnimal(animal2[2]);
    jungle2.AddAnimal(animal2[3]);
    jungle2.AddAnimal(animal2[4]);
    jungle2.AddAnimal(animal2[5]);
    //result
    jungle2.movement();
    std::cout << jungle2.getTotalFall();
    

    return 0;
}
