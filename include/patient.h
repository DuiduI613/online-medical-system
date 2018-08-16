#ifndef PATIENT_H
#define PATIENT_H

#include <string>

#include "date.h"
#include "gender.h"

namespace medisys
{

class Patient
{
  private:
    static int  id_count;
    int         m_id;
    std::string m_name;
    int         m_age;
    Gender      m_gender;
    Date        m_birthdate;
  public:
    Patient(const std::string& name, int age, Gender gender, Date date);
    static void resetID();
    Patient& setName(const std::string& name);
    Patient& setAge(int age);
    Patient& setGender(Gender gender);
    Patient& setBirthdate(Date date);
    //std::string getName();
    //int getAge();
    //Gender getGender();
};

}

#endif
