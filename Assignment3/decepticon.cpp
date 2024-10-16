#include "decepticon.h"
#include <iostream>

Decepticon::Decepticon(int ammo, int level, std::string name, bool is_weapon): Transformer(ammo, level, name) {
    _weapon_decepticon = is_weapon;
}

bool Decepticon::get_weapon_decepticon() {
    return _weapon_decepticon;
} 

bool Decepticon::get_decepticon() {
    return _decepticon;
}

void Decepticon::set_decepticon(bool is_decepticon) {
    _decepticon = is_decepticon;
}

void Decepticon::set_weapon_decepticon(bool is_weapon) {
    _weapon_decepticon = is_weapon;
}

bool Decepticon::art_damage() {
    return true;
}

bool Decepticon::ultra_art_damage() {
    return true;
}