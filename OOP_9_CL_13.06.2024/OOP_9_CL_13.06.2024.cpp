#include <iostream>
#include"PO.h"
#include"FreePO.h"
#include"TimeLimitedPO.h"
#include"PayedPO.h"
#include"Admin.h"

using namespace std;

int main()
{
	/*FreePO* obj = new FreePO("FreePO" , "Micron");
	obj->showInfo();
	cout << endl;

	TimeLimitedPO* obj2 = new TimeLimitedPO("Photoshop", "Adobe", Date() - 7, 3);
	obj2 -> showInfo();
	cout << endl;

	PayedPO* obj3 = new PayedPO("Photoshop", "Adobe", Date() - 7, 3 , 40);
	obj3->showInfo();
	cout << endl;
*/

	Admin itSTEP;

	itSTEP.showAllPO();

}
