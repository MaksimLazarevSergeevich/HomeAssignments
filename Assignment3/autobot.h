#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"
#include <iostream>

class Autobot: public Transformer{
private:
    bool _autobot = true;
    bool _weapon_autobot;
public:
    Autobot(int = 0, int = 0, std::string = "None", bool = false);
    bool get_autobot();
    bool get_weapon_autobot();
    void set_autobot(bool);
    void set_weapon_autobot(bool);
    bool punch();
    bool ultra_punch();
};

#endif