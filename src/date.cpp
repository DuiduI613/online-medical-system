#include <string>

#include "date.h"

namespace medisys
{

Date::Date(int year, int month, int day)
: m_year{year}
, m_month{month}
, m_day{day}
{
}

void Date::set(int year, int month, int day)
{
    m_year = year;
    m_month = month;
    m_day = day;
}

}
