#include "transformer.h"
#include <iostream>


Transformer::Transformer(int ammo, int level, std::string name) {
    _ammo = ammo;
    _level = level;
    _mytransformer_name = name;
}

void Transformer::set_level(int level) {
    _level = level;
}

int Transformer::get_level() {
    return _level;
}

void Transformer::set_ammo(int ammo) {
    _ammo = ammo;
}

int Transformer::get_ammo() {
    return _ammo;
}

void Transformer::fire() {
    std::cout <<  _ammo << '\n';
}

std::string Transformer::get_mytransformer_name() {
    return _mytransformer_name;
}

void Transformer::set_mytransformer_name(std::string new_name) {
    _mytransformer_name = new_name;
}