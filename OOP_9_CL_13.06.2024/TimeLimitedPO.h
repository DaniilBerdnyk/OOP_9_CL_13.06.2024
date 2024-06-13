#pragma once
#include "PO.h"

class TimeLimitedPO :
    public PO
{
    protected:
        Date install;
        int days;
public:
    TimeLimitedPO();
    TimeLimitedPO(string name, string company, Date install, int days);

    void setDate(Date install);
    void setDays(int days);

    Date getDate()const;
    int getDays()const;

    void showInfo()const override;
    bool isAvailable()const override;

    //LOAD&WRITE
    void load(ifstream& file)override {
    getline(file, name); getline(file, company);
    int d, m, y; file >> d >> m >> y;
    install = Date(y, m, d); file >> days; }

    void save(ofstream& file) override {
        file << "ShareWare" << endl;
        file << name << '\n';
        file << company << '\n';
        file << install.getDay() << ' ' << install.getMonth() << ' ' << install.getYear() << '\n';
        file << days << '\n';
    }

};

