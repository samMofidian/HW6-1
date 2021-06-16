#include <iostream>
#include "Jungle.h"
#include "WildAnimal.h"
#include "DomesticAnimal.h"
#include "Animal.h"

int main() {

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
    Animal *animal[] = {&a, &b, &c, &d, &e, &f, &g, &h};
    Jungle jungle(8);
    jungle.AddAnimal(animal[0]);
    jungle.AddAnimal(animal[1]);
    jungle.AddAnimal(animal[2]);
    jungle.AddAnimal(animal[3]);
    jungle.AddAnimal(animal[4]);
    jungle.AddAnimal(animal[6]);
    jungle.AddAnimal(animal[5]);
    jungle.AddAnimal(animal[7]);
    //result
    jungle.movement();
    std::cout << jungle.getTotalFall();

    return 0;
}
