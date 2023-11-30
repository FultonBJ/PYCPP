#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>

using namespace std;

void displayMenu()
{
	cout << "                 Menu                 \n";
	cout << "     1.......Display End of day sales\n";
	cout << "     2.......Sort and store sales in 'Sales.dat'\n";
	cout << "     3.......Display histogram\n";
	cout << "     4.......Read Sales.dat\n";
	cout << "     5.......Quit";
	
}


void CallProcedure(string pName)
{
	int x;
	char* procname = new char[pName.length() + 1];
	std::strcpy(procname, pName.c_str());

	Py_Initialize();
	PyObject* my_module = PyImport_ImportModule("PyCode");
	PyErr_Print();
	PyObject* my_function = PyObject_GetAttrString(my_module, procname);
	PyObject* my_result = PyObject_CallObject(my_function, 0);
	Py_Finalize();
	delete[] procname;
	Sleep(5000);
	system("cls");
	
}


void main()
{
	int c = 0;
	while (c != 4)
	{
		displayMenu();
		cout << "\n";
		cin >> c;
		switch (c)
		{
		case 1:
			CallProcedure("printsomething");
			break;
		case 2:
			CallProcedure("PrintMe");
			break;
		case 3:
			CallProcedure("Printhistogram");
			break;
		case 4:
			CallProcedure("ReadDatfile");
			break;
		case 5:
			cout << "Thanks for Playing";
			return;
		default:
			cout << "Invalid input";
			break;
		}
	}
}
