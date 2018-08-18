#include <iostream>

#include "doctor.h"
#include "gender.h"
#include "patient.h"

int main(int argc, char* args[])
{
    std::cout << "hello medisys" << std::endl;
    medisys::Doctor d;
    (void) d;
    medisys::Patient p{"Bob", 20, medisys::Gender::MALE};
    p.name("Rob");
    std::cout << p.name() << std::endl;
    (void) p;
}
