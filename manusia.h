#ifndef MANUSIA_H
#define MANUSIA_H
#include "jantung.h"
#include <iostream>
using namespace std;

class manusia {
public:
    string name;
    jantung varjantung;

    manusia (string pName) 
    : name (pName)
    {
        cout << name << "hidup\n";
    }
    ~manusia() {
        cout << "mati\n";
    }
};
#endif