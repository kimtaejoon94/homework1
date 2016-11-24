#pragma once
#include "Frame.h"
#include <string>
#include "ExArray.h"

void main()
{
	ExArray<int>arr1(3);
	ExArray<char> arr2(4);
	ExArray<double> arr3(5);

	arr1.addData(2);
	arr2.addData('A');
	arr3.addData(32.12);

	arr1.prinData();
	arr2.prinData();
	arr3.prinData();
}

/*void main()
{
	try {
		Frame *f1 = new Frame;
		Frame *f2 = new Frame[10];

		delete f1;
		delete[] f2;
	}
	catch (string msg)
	{
		cout << "Error msg:" << msg << endl;
	}
}*/