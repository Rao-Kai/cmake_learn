#pragma once
#include<string>
#include<iostream>
#include"Gun.h"
using namespace std;

class Solider{
private:
    string m_name;
    Gun* m_ptr_gun;
public:
    Solider(string name);
    ~Solider();
    void addGun(Gun* ptr_gun);
    void addBulletToGun(int num);
    bool fire();
};