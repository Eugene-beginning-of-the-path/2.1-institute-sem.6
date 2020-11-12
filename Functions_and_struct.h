#define FUNCTIONS_AND_STRUCT_H
#ifdef  FUNCTIONS_AND_STRUCT_H

#include <iostream>

using namespace std;

extern const int SIZE;

namespace AE
{
	struct AEROFLOT
	{
		string Name_of_destination;
		int number_flight = 0;
		string type_of_air;
	};

	void Set_arr(AE::AEROFLOT* arr)
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << "--------- " << i + 1 << " block ---------" << endl;

			cout << "Введите пункт назначения: ";
			cin >> arr[i].Name_of_destination;

			cout << "Введите номер рейса: ";
			cin >> arr[i].number_flight;

			cout << "Введите тип самолета: ";
			cin >> arr[i].type_of_air;

		}
		cout << "----------------------------" << endl;
	}

	void Show_arr(AE::AEROFLOT* arr, int block = -1)
	{
		cout << endl << "Вывод информации: " << endl;
		if (block == -1)
			for (int i = 0; i < SIZE; i++)
			{
				cout << "--------- " << i + 1 << " block ---------" << endl;
				cout << "Пункт назначения: ";
				cout << arr[i].Name_of_destination << endl;

				cout << "Номер рейса: ";
				cout << arr[i].number_flight << endl;

				cout << "Тип самолета: ";
				cout << arr[i].type_of_air << endl;
			}
		else
		{
			cout << "--------- " << arr[block].type_of_air << " ---------" << endl;
			cout << "Пункт назначения: ";
			cout << arr[block].Name_of_destination << endl;

			cout << "Номер рейса: ";
			cout << arr[block].number_flight << endl;
		}

		cout << "----------------------------" << endl;
	}

	void Sort_arr(AE::AEROFLOT* arr)
	{
		for (int i = 0; i < SIZE; i++)
		{
			if (i == SIZE - 1)
				continue;

			string simvol_1 = arr[i].Name_of_destination;
			string simvol_2 = arr[i + 1].Name_of_destination;
			if (simvol_1[0] > simvol_2[0])
			{
				string temp = arr[i].Name_of_destination;
				arr[i].Name_of_destination = arr[i + 1].Name_of_destination;
				arr[i + 1].Name_of_destination = temp;
			}
		}
		Show_arr(arr);
	}

	void Comparison_type(AE::AEROFLOT* arr)
	{
		string comparison;
		while (true)
		{
			link:
			cout << "Введите тип самолета, информацию о котором хотите узнать или 'exit' для выхода: ";
			cin >> comparison;

			if (comparison == "exit")
				break;
			else
				for (int i = 0; i < SIZE + 1; i++)
				{
					if (i == SIZE)
					{
						int go = 0;
						cout << "Вы ввели тип самолета, информации о котором нет в базе данных\n";
						cout << "Введите 1, если хотите ввести другой тип самолета: ";
						cin >> go;
						if (go == 1)
							goto link;
						else
							break;
					}

					if (comparison == arr[i].type_of_air)
					{
						Show_arr(arr, i);
						break;
					}
				}
		}
	}
}

#endif
