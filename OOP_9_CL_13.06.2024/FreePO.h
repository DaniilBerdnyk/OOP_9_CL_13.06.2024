#pragma once
#include "PO.h"
#include<string>
class FreePO :
    public PO
{
public:
    FreePO():PO("Free" , "MicroFuture") {}
    FreePO(string name, string company):PO(name, company){}

    void showInfo()const override {
        cout << "Name: " << getName() << "\n" << "Company: " << getCompany() << "\n" << "Is available: ";if(isAvailable()){cout << "Yes\n"; }else{ cout << "No\n"; }}

    bool isAvailable()const override{return true;}

    //LOAD&WRITE
    void load(ifstream& file)override { getline(file, name); getline(file, company);}
    void save(ofstream& file)override { file << "Free" << endl; file << name << endl; file << company << endl; };
};

