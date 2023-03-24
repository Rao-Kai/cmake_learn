#include "Solider.h"

Solider::Solider(string name){
    m_name = name;
    m_ptr_gun = NULL;
}

void Solider::addGun(Gun* ptr_gun){
    m_ptr_gun = ptr_gun;
}

void Solider::addBulletToGun(int num){
    m_ptr_gun->addBullet(num);
}

bool Solider::fire(){
    return m_ptr_gun->shoot();
}

Solider::~Solider(){
    if(m_ptr_gun == NULL){
        return; 
    }
    delete m_ptr_gun;
    m_ptr_gun = NULL;
}