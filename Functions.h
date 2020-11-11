#pragma once

#include <iostream>
#include "Stuct file.h"

using namespace std;

extern const int SIZE;

void Set_arr(AEROFLOT *arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "--------- " << i + 1 << " block ---------" << endl;

		char *f_Name_of_destination = nullptr;
		cout << "¬ведите пункт назначени€: ";
		cin >> f_Name_of_destination;
		arr[i].Name_of_destination = f_Name_of_destination;

		cout << "¬ведите номер рейса: ";
		cin >> arr[i].number_flight;

		cout << "¬ведите тип самолета: ";
		cin >> arr[i].type_of_air;

	}
	cout << "----------------------------" << endl;
}

void Sort_arr(AEROFLOT* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (i == SIZE - 1)
			continue;

		char* simvol_1 = arr[i].Name_of_destination;
		char* simvol_2 = arr[i+1].Name_of_destination;
		if (simvol_1[0] > simvol_2[0])
		{
			char* temp = arr[i].Name_of_destination;
			arr[i].Name_of_destination = arr[i + 1].Name_of_destination;
			arr[i + 1].Name_of_destination = temp;
		}
	}
}

void Show_arr(AEROFLOT* arr)
{
	for (int i = 0; i < SIZE; i++)
		cout << arr[i].Name_of_destination << endl;
}