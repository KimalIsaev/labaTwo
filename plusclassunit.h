#ifndef PLUSCLASSUNIT_H
#define PLUSCLASSUNIT_H

#include "abstractclassunit.h"

class PlusClassUnit : public AbstractClassUnit
{
public:
    std::string compile(unsigned int) const;
};

#endif // PLUSCLASSUNIT_H
