#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon {
private:
    std::string _nameWeapon;
public:
    Weapon(std::string);
    std::string getNameWeapon();
    void setNameWeapon(std::string);
    ~Weapon();
};

#endif