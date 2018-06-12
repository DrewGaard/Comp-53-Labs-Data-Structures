#include <iostream>
#include "Martian.h"

using namespace std;

int main()
{
	Martian::setTotalMartians(1);

	Martian One, Two, Three;

	//cout << Three.getTotal() << endl;

	Three.setTotal(Three.getTotal() + 1);
	Two.setTotal(One.getTotal() + 1);

	Three.setTotalMartians(Three.getTotalMartians() + 1);
	Two.setTotalMartians(One.getTotalMartians() + 1);

	cout << Three.getTotal() << endl;
	cout << Three.getTotalMartians() << endl;

	system("pause");
	return 0;
}
