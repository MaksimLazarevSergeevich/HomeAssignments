#include "autobot.h"
#include "decepticon.h"
#include "terminator.h"

int main() {
    Transformer rm(1, 1, "Hello", 5, 10);
    std::cout << rm.getHeal() << '\n';
    rm.fire();
    rm.setHeal(15);
    std::cout << rm.getHeal() << '\n';
    std::cout << rm.getAmmo() << '\n';
    IronHeart hp(10);
    std::cout << hp.getHealpoint() << '\n';
    Weapon Katana("Katana");
    rm.setNameWeapon(&Katana);
    std::cout << rm.getNameWeapon() << '\n';
    Weapon Sharingun("Amaterusu");
    rm.setNameWeapon(&Sharingun);
    std::cout << rm.getNameWeapon() << '\n';
    rm.setNameWeapon(nullptr);
    std::cout << rm.getNameWeapon() << '\n';
    std::cout << rm.getRange() << '\n';
    Autobot ro(1, "goal", 10, 12, "WD", 3, 3);
    std::cout << ro.ultimate() << '\n';
    Decepticon ds(1, "fr", 3, 4, "gr", 4, 4);
    std::cout << ds.ultimate() << '\n';
    Terminator tr(12, "rgrgrgrg0", 112, 1112, "IDWUDUWH", 34, 1000);
    std::cout << tr.getNameWeapon() << '\n';
}