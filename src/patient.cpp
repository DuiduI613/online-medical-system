#include <string>
#include <vector>

#include "gender.h"
#include "patient.h"

namespace medisys
{

Patient::Patient(const std::string& name, int age, Gender gender, int doctorId)
: m_id{id_count++}
, m_name{name}
, m_age{age}
, m_gender{gender}
, m_doctorId{doctorId}
{
}

void Patient::resetID()
{
    Patient::id_count = 1;
}

Patient& Patient::name(const std::string& name)
{
    m_name = name;
    return *this;
}

Patient& Patient::age(int age)
{
    m_age = age;
    return *this;
}

Patient& Patient::gender(Gender gender)
{
    m_gender = gender;
    return *this;
}

int Patient::id()
{
    return m_id;
}

std::string Patient::name()
{
    return m_name;
}

int Patient::age()
{
    return m_age;
}

Gender Patient::gender()
{
    return m_gender;
}

}
