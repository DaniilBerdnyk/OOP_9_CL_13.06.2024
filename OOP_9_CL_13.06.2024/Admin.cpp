#include "Admin.h"
#include<fstream>

using namespace std;

Admin::Admin()
{
	ifstream file("info-soft.txt");
	if (file.is_open()) 
	{
		string type;
		while (!file.eof())
		{
			getline(file , type);
			if (type == "Free")
			{
				PO* obj = new FreePO();
				obj->load(file);
				admin.push_back(obj);
			}
			else if (type == "ShareWare")
			{
				PO* obj = new TimeLimitedPO();
				obj->load(file);
				admin.push_back(obj);
			}
			else if (type == "Commercial")
			{
				PO* obj = new PayedPO();
				obj->load(file);
				admin.push_back(obj);
			}
		}
	}
}

Admin::~Admin()
{
	ofstream file("output.txt");
	if (file.is_open()) {
		for (PO* po : admin) {
			po->save(file); 
			file << "\n";
		}
		file.close();
	}
	else {
		cout << "Error" << endl;
	}

	for (PO* po : admin) {
		delete po;
	}
}


void Admin::showAllPO() const
{
	for (auto item : admin)
	{
		item->showInfo();
		cout << endl;
	}
}
