#include <iostream>
#include "Functions_and_struct.h"

using namespace std;
const int SIZE = 2;

void Start()
{
	AE::AEROFLOT* arr = new AE::AEROFLOT [SIZE];

	AE::Set_arr(arr);

	/*arr[0].Name_of_destination = "St.Petersburg";
	arr[0].number_flight = 3;
	arr[0].type_of_air = "Type-R";
	arr[1].Name_of_destination = "Magadun";
	arr[1].number_flight = 5;
	arr[1].type_of_air = "CV-15";
	arr[2].Name_of_destination = "Tokyo";
	arr[2].number_flight = 7;
	arr[2].type_of_air = "CHVU";*/

	//Show_arr(arr, 1);
	//Show_arr(arr, -1);

	//AE::Set_arr(arr);
	Sort_arr(arr);
	Comparison_type(arr);
}