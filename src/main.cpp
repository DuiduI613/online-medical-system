#include <iostream>

#include "doctor.h"
#include "gender.h"
#include "patient.h"

int medisys::Patient::id_count = 1;

int main(int argc, char* args[])
{
    std::cout << "hello medisys" << std::endl;
    medisys::Doctor d;
    (void) d;
    medisys::Patient p{"Bob", 20, medisys::Gender::MALE, medisys::Date(1989,6,13)};
    p.setName("Rob");
    //std::cout << getName() << endl;
    (void) p;
}
