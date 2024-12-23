/*Maksim Lazarev st128707@student.spbu.ru*/

#include "ironheart.h"

IronHeart::IronHeart(unsigned int healPoint)
{
    _healPoint = healPoint;
}

unsigned int IronHeart::getHealpoint()
{
    return _healPoint;
}

void IronHeart::setHealpoint(unsigned int healPoint)
{
    _healPoint = healPoint;
}

IronHeart::~IronHeart()
{ }

std::ostream& operator<<(std::ostream& os, IronHeart& heart)
{
    os << "Heal point: " << heart.getHealpoint() << '\n';
    return os;
}