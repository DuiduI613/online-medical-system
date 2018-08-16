#ifndef DATE_H
#define DATE_H

#include <string>

namespace medisys
{

class Date
{
  private:
    int m_year;
    int m_month;
    int m_day;
  public:
    Date(int year, int month, int day);
    void set(int year, int month, int day);
};

}

#endif
