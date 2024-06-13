#pragma once
#include "TimeLimitedPO.h"
#include<iostream>

using namespace std;

class PayedPO :
    public TimeLimitedPO
{
    float price;
public:

    PayedPO():TimeLimitedPO() {price = 0;};
    PayedPO(string name, string company, Date install, int days, float price) 
    :TimeLimitedPO(name, company, install, days){this->price = price;}

    void setPrice(float price){this->price = price;}
    float getPrice()const{return price;}

    void showInfo()const override {TimeLimitedPO::showInfo(); cout << "Price: " << price << "\n"; }
   
    //LOAD&WRITE
    void load(ifstream& file)override {
        TimeLimitedPO::load(file);
        file >> price;
    }

    void save(ofstream& file) override {
        file << "Commercial" << endl;
        file << name << '\n';
        file << company << '\n';
        file << install.getDay() << ' ' << install.getMonth() << ' ' << install.getYear() << '\n';
        file << days << '\n';
        file << price << '\n'; 
    }

};
