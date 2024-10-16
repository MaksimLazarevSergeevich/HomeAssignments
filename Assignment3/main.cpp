#include "transformer.h"
#include "autobot.h"
#include "decepticon.h"
#include <iostream>

int main() {
    Transformer track(7, 6, "Hello");
    Decepticon des(12, 23, "Dedddd", true);
    des.fire();
    des.set_decepticon(false);
    std::cout << des.get_weapon_decepticon() << '\n';
    Transformer mr(4);
    mr.fire();
    std::cout << mr.get_ammo() << mr.get_level() << mr.get_mytransformer_name() << '\n';
    Decepticon tr(2);
    std::cout << tr.get_level() << '\n';
    Autobot car(1);
    car.punch();
    
}