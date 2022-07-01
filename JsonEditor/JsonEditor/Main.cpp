/*
This editor made by Ruzgar#2714
if you have questions you can dm me from discord.
*/
#include <iostream>
#include <vector>
#include <filesystem>
#include <fstream>
#include "json.hpp"
#include "jsoneditor.h"
using json = nlohmann::json;
using namespace std;

int main() {
	cout << "This json editor made by Ruzgar#2714." << endl;
	cout << "Warning! List of value type \n 1: string \n 2: int \n 3: array \n" << endl;
    string file_location = "";
	cout << "Write file location: ";
	cin >> file_location;

	int value_name = 0;
	cout << "Value Type: ";
	cin >> value_name;
	if (value_name == 2) add_value_int(file_location);
	else if (value_name == 1) add_value_string(file_location);
	else if (value_name == 3) add_value_array(file_location);
	system("pause");
	return 0;
}