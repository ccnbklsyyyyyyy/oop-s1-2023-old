#ifndef PERSON_H_UNIQUE
#define PERSON_H_UNIQUE

#include <string>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif // PERSON_H_UNIQUE
