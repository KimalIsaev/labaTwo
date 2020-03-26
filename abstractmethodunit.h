#ifndef ABCTRACTMETHODUNIT_H
#define ABCTRACTMETHODUNIT_H

#include "unit.h"

class AbstractMethodUnit: Unit
{
public:
    enum Modifier{
        STATIC = 1,
        CONST = 1 << 1
    };
    AbstractMethodUnit(const std::string&, const std::string&, Flags);
    void add(const UnitPointer&, Flags);
private:
    std::string methodName;
    std::string methodReturnType;
    Flags methodModifier;
    UnitVector methodBody;
};

#endif // ABCTRACTMETHODUNIT_H
