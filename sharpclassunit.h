#ifndef SHARPCLASSUNIT_H
#define SHARPCLASSUNIT_H

#include "abstractclassunit.h"

class SharpClassUnit : public AbstractClassUnit
{
public:
    SharpClassUnit(const std::string& name):  AbstractClassUnit(name){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};

#endif // SHARPCLASSUNIT_H
