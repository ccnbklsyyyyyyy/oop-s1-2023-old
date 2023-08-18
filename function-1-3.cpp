#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList newPL;
    newPL.numPeople = pl.numPeople;
    newPL.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; ++i) {
        newPL.people[i].name = pl.people[i].name;
        newPL.people[i].age = pl.people[i].age;
    }
    return newPL;
}
