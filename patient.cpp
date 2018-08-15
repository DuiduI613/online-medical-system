#include <string>

#include "gender.h"
#include "patient.h"

namespace medisys
{
Patient::Patient(const std::string& name, int age, Gender gender)
: m_name{name}
, m_age{age}
, m_gender{gender}
{
}
}

