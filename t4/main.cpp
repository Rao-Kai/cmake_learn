#include"Solider.h"
#include"Gun.h"

int main(){
    Solider s("rk");
    Gun* g = new Gun("car");
    s.addGun(g);
    s.addBulletToGun(20);
    s.fire();
    return 0;
}