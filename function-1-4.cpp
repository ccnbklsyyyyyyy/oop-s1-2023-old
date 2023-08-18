#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newPL = pl;
    return newPL;
}
