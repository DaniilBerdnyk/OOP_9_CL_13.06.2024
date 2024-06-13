#pragma once
#include"Date.h"
#include<string>
#include<fstream>

class PO
{
protected:
	string name;
	string company; 
public:
	PO() {name = "Undefined"; company = "Undefined";}
	PO(string name, string company) { this->name = name; this->company = company;}
	virtual~PO() {};

	void setName(string name) { this->name = name; }
	void setCompany(string company) { this->company = company;}

	string getName()const { return name; }
	string getCompany()const { return company;}

	virtual void showInfo()const = 0;
	virtual bool isAvailable()const = 0;

	//LOAD&WRITE
	virtual void load(ifstream& file) = 0;
	virtual void save(ofstream& file) = 0;
};

