#ifndef DECEPTICON_H
#define DECEPTICON_H
#include "transformer.h"
#include <iostream>

class Decepticon: public Transformer {
private:
    bool _weapon_decepticon;
    bool _decepticon = true;
public:
    Decepticon(int = 0, int = 0, std::string = "None", bool = false);
    bool get_weapon_decepticon();
    bool get_decepticon();
    void set_weapon_decepticon(bool);
    void set_decepticon(bool);
    bool art_damage();
    bool ultra_art_damage();
};
#endif