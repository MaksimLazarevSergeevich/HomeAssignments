#include "autobot.h"
#include <iostream>

Autobot::Autobot(int ammo, int level, std::string name, bool is_weapon): Transformer(ammo, level, name) {
    _weapon_autobot = is_weapon;
}

void Autobot::set_weapon_autobot(bool is_weapon) {
    _weapon_autobot = is_weapon;
}
void Autobot::set_autobot(bool is_autobot) {
    _autobot = is_autobot;
}

bool Autobot::ultra_punch() {
    return true;
}

bool Autobot::punch() {
    return true;
}

bool Autobot::get_autobot() {
    return _autobot;
}

bool Autobot::get_weapon_autobot() {
    return _weapon_autobot;
}

