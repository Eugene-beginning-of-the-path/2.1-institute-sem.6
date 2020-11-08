#include <iostream>
#include "Stuct file.h"
#include "Functions.h"

using namespace std;

const int SIZE = 3;

void Start()
{
	cout << "###\n";
	AEROFLOT* arr = new AEROFLOT[SIZE];
	Set_arr(arr);
	Sort_arr(arr);

}