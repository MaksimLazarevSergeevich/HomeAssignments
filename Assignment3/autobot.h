#ifndef AUTOBOT_H
#define AUTOBOT_H
#include "transformer.h"
class Autobot: public Transformer {
public:
    Autobot(int, std::string, int, int, std::string, unsigned int, unsigned int);
    bool transform();
    bool autobotAtack();
    void setNumber(int);
    int getNumber();
    void setAutobotName(std::string);
    std::string getAutobotName();
private:
    int _number;
    std::string _autobotName;
};

#endif