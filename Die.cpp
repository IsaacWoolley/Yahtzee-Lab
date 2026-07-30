#include "Die.h"
#include <cstdlib>

Die::Die()
{
    sides = 6;
    faceValue = 1;
}

Die::Die(int sides)
{
    this->sides = sides;
    faceValue = 1;
}

void Die::roll()
{
    faceValue = rand() % sides + 1;
}

int Die::getValue() const
{
    return faceValue;
}