#include"Gun.h"

void Gun::addBullet(int bulletnum){
    m_bullet_count += bulletnum;
}

bool Gun::shoot(){
    if(m_bullet_count <= 0){
        cout << "No Bullet" << endl;
        return false;
    }
    m_bullet_count -= 1;
    cout << "shoot successfully" << endl;
    return true;
}