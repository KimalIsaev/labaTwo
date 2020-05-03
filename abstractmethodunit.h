#ifndef ABCTRACTMETHODUNIT_H
#define ABCTRACTMETHODUNIT_H

#include "unit.h"

class AbstractMethodUnit: public Unit
{
public:
    enum Modifier{
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2
    };
    AbstractMethodUnit(const std::string&, const std::string&, Flags);
    void add(const UnitPointer&, Flags);
protected:
    std::string methodName;
    std::string methodReturnType;
    Flags methodModifier;
    UnitVector methodBody;
};

#endif // ABCTRACTMETHODUNIT_H
