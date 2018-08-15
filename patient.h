#ifndef PATIENT_H
#define PATIENT_H

#include <string>

#include "gender.h"

namespace medisys
{
class Patient
{
  private:
    std::string m_name;
    int         m_age;
    Gender      m_gender;
  public:
    Patient(const std::string& name, int age, Gender gender);
};
}

#endif
