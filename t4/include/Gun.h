#pragma once
#include<string>
#include<iostream>
using namespace std;

class Gun{
private:
    int m_bullet_count;
    string m_type;
public:
    Gun(string type){
        m_type = type;
        m_bullet_count = 0;
    }
    void addBullet(int bulletnum);
    bool shoot();
};