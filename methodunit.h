#ifndef METHODUNIT_H
#define METHODUNIT_H

#include "unit.h"

class MethodUnit : public Unit
{
public:
    enum Modifier{
        STATIC = 1,
        CONST = 1 << 1,
        VIRTUAL = 1 << 2
    };
    MethodUnit(const std::string&, const std::string&, Flags);
    void add(const UnitPointer&, Flags);
    std::string compile(unsigned int) const;
private:
    std::string methodName;
    std::string methodReturnType;
    Flags methodModifier;
    UnitVector methodBody;
};

#endif // METHODUNIT_H
