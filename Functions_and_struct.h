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

			cout << "������� ����� ����������: ";
			cin >> arr[i].Name_of_destination;

			cout << "������� ����� �����: ";
			cin >> arr[i].number_flight;

			cout << "������� ��� ��������: ";
			cin >> arr[i].type_of_air;

		}
		cout << "----------------------------" << endl;
	}

	void Show_arr(AE::AEROFLOT* arr, int block = -1)
	{
		cout << endl << "����� ����������: " << endl;
		if (block == -1)
			for (int i = 0; i < SIZE; i++)
			{
				cout << "--------- " << i + 1 << " block ---------" << endl;
				cout << "����� ����������: ";
				cout << arr[i].Name_of_destination << endl;

				cout << "����� �����: ";
				cout << arr[i].number_flight << endl;

				cout << "��� ��������: ";
				cout << arr[i].type_of_air << endl;
			}
		else
		{
			cout << "--------- " << arr[block].type_of_air << " ---------" << endl;
			cout << "����� ����������: ";
			cout << arr[block].Name_of_destination << endl;

			cout << "����� �����: ";
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
			cout << "������� ��� ��������, ���������� � ������� ������ ������ ��� 'exit' ��� ������: ";
			cin >> comparison;

			if (comparison == "exit")
				break;
			else
				for (int i = 0; i < SIZE + 1; i++)
				{
					if (i == SIZE)
					{
						int go = 0;
						cout << "�� ����� ��� ��������, ���������� � ������� ��� � ���� ������\n";
						cout << "������� 1, ���� ������ ������ ������ ��� ��������: ";
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
