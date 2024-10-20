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
    Decepticon dec(1, "dec", 2, 5, "Hello", 3, 2);
    dec.fire();
    Autobot aut(1, "aut", 5, 3, "Hello", 4, 3);
    aut.fire();
    Terminator ter(1, "ter", 0, 0, "Hello", 1, 2);
    ter.fire();
}