/*Maksim Lazarev st128707@student.spbu.ru
first tusk*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H
#include <iostream>

class Transformer {
public:
    Transformer(int = 0, int = 0, std::string = "None");
    void fire();
    void set_ammo(int);
    int get_ammo();
    void set_level(int);
    int get_level();
    void set_mytransformer_name(std::string);
    std::string get_mytransformer_name();
private:
    int _ammo;
    int _level;
    std::string _mytransformer_name;
};

#endif