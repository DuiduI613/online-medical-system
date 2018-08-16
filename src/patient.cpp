#include <string>

#include "date.h"
#include "gender.h"
#include "patient.h"

namespace medisys
{

Patient::Patient(const std::string& name, int age, Gender gender, Date date)
: m_id{id_count++}
, m_name{name}
, m_age{age}
, m_gender{gender}
, m_birthdate{date}
{
}

void Patient::resetID()
{
    Patient::id_count = 1;
}

Patient& Patient::setName(const std::string& name)
{
    m_name = name;
    return *this;
}

Patient& Patient::setAge(int age)
{
    m_age = age;
    return *this;
}

Patient& Patient::setGender(Gender gender)
{
    m_gender = gender;
    return *this;
}

Patient& Patient::setBirthdate(Date date)
{
    m_birthdate = date;
    return *this;
}

}
