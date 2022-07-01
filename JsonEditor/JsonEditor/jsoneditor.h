#pragma once
#include <iostream>
#include <vector>
#include <filesystem>
#include <fstream>
#include "json.hpp"
#include <sstream>
#include <filesystem>
using std::filesystem::current_path;
using std::filesystem::directory_iterator;
using json = nlohmann::json;
using namespace std;


void add_value_array(string file_location) {
    //if (value_type == 2) {
    int totalfile = 0;
    for (auto& p : directory_iterator(file_location)) {
        cout << p.path() << '\n';
        json j;

        ifstream ruzgaropen(p.path());
        ruzgaropen >> j;
        ruzgaropen.close();

        j["ary1"] = {};

        ofstream ruzgar2(p.path());
        ruzgar2 << j << std::endl;
        ruzgar2.close();
        totalfile++;

    }
    cout << "Total changed file: " << totalfile << endl;

}
void add_value_string(string file_location) {
    //if (value_type == 2) {
    int totalfile = 0;
    for (auto& p : directory_iterator(file_location)) {
        cout << p.path() << '\n';
        json j;

        ifstream ruzgaropen(p.path());
        ruzgaropen >> j;
        ruzgaropen.close();

        j["str1"] = "";

        ofstream ruzgar2(p.path());
        ruzgar2 << j << std::endl;
        ruzgar2.close();
        totalfile++;

    }
    cout << "Total changed file: " << totalfile << endl;

}
void add_value_int(string file_location) {
    //if (value_type == 2) {
        int totalfile = 0;
        for (auto& p : directory_iterator(file_location)) {
            cout << p.path() << '\n';
            json j;

            ifstream ruzgaropen(p.path());
            ruzgaropen >> j;
            ruzgaropen.close();

            j["int1"] = 31;

            ofstream ruzgar2(p.path());
            ruzgar2 << j << std::endl;
            ruzgar2.close();
            totalfile++;

        }
        cout << "Total changed file: " << totalfile << endl;
    

    /*else if (value_type == 1) {
        int totalfile = 0;
        
        for (auto& p : directory_iterator(file_location)) {
            cout << p.path() << '\n';
            json j;

            ifstream ruzgaropen(p.path());
            ruzgaropen >> j;
            ruzgaropen.close();

            j[value_name] = "";

            ofstream ruzgar2(p.path());
            ruzgar2 << j << std::endl;
            ruzgar2.close();
            totalfile++;
        }
        cout << "Total changed file: " << totalfile << endl;
    }
    else if (value_type == 3) {
        int totalfile = 0;
        for (auto& p : directory_iterator(file_location)) {
            json j;

            ifstream ruzgaropen(p.path());
            ruzgaropen >> j;
            ruzgaropen.close();

            j[value_name] = "";

            ofstream ruzgar2(p.path());
            ruzgar2 << j << std::endl;
            ruzgar2.close();
            totalfile++;
        }
        cout << "Total changed file: " << totalfile << endl;
    }
    else if (value_type == 4) {
        int totalfile = 0;
        for (auto& p : directory_iterator(file_location)) {
            json j;

            ifstream ruzgaropen(p.path());
            ruzgaropen >> j;
            ruzgaropen.close();

            j[value_name] = {};

            ofstream ruzgar2(p.path());
            ruzgar2 << j << std::endl;
            ruzgar2.close();
            totalfile++;
        }
        cout << "Total changed file: " << totalfile << endl;
    }*/

}

string get_type(int type_name) {
    switch (type_name) {
    case 1: {
        return "string";
    }
    case 2: {

        return "int";
    }
    case 3: {
        return "char";
    }
    case 4: {
        return "array";
    }

    default: return "none";
    }
}