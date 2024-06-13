#include "TimeLimitedPO.h"

TimeLimitedPO::TimeLimitedPO()
{
    install = Date(2000, 1, 1);
    days = 0;
}

TimeLimitedPO::TimeLimitedPO(string name, string company, Date install, int days):PO(name , company)
{
    this->install = install; this->days = days;
}

void TimeLimitedPO::setDate(Date install)
{
    this->install = install;
}

void TimeLimitedPO::setDays(int days)
{
    this->days = days;
}

Date TimeLimitedPO::getDate() const
{
    return install;
}

int TimeLimitedPO::getDays() const
{
    return days;
}

void TimeLimitedPO::showInfo() const
{
    cout << "Name: " << getName() << "\n"
         << "Company: " << getCompany() << "\n"
         << "Date of install: " << install<<"\n"
         << "Free Days: " << days << "\n"
        << "Is available: "; if (isAvailable()){cout << "Yes\n";}else{cout << "No\n";}
}

bool TimeLimitedPO::isAvailable() const
{
    return install + days > Date();
}
