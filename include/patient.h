#ifndef PATIENT_H
#define PATIENT_H

#include <string>

#include "gender.h"

namespace medisys
{

class Patient
{
  public:
    Patient(const std::string& name, int age, Gender gender);

    Patient& name(const std::string& name);

    Patient& age(int age);

    Patient& gender(Gender gender);

    int id();

    const std::string&  name();

    int age();

    Gender gender();

  private:
    static int  id_count;
    int         m_id;
    std::string m_name;
    int         m_age;
    Gender      m_gender;
};

}

#endif
