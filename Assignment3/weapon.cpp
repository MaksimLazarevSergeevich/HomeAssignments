/*Maksim Lazarev st128707@student.spbu.ru*/

#include "weapon.h"

Weapon::Weapon(std::string nameWeapon): _nameWeapon(nameWeapon) 
{}

std::string Weapon::getNameWeapon() {
    return _nameWeapon;
}

void Weapon::setNameWeapon(std::string newNameWeapon) {
    _nameWeapon = newNameWeapon;
}

Weapon::~Weapon()
{}