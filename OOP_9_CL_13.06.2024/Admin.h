#pragma once
#include<vector>
#include"PO.h"
#include"FreePO.h"
#include"TimeLimitedPO.h"
#include"PayedPO.h"

class Admin
{
	vector<PO*>admin;
public:
	Admin();
	~Admin();

	void showAllPO()const;
};

