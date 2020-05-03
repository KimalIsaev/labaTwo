#ifndef PLUSCLASSUNIT_H
#define PLUSCLASSUNIT_H

#include "abstractclassunit.h"

class PlusClassUnit : public AbstractClassUnit
{
public:
    PlusClassUnit(const std::string& name):  AbstractClassUnit(name){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};

#endif // PLUSCLASSUNIT_H
