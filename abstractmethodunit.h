#ifndef ABCTRACTMETHODUNIT_H
#define ABCTRACTMETHODUNIT_H

#include "unit.h"
#include <array>
#include <algorithm>

class AbstractMethodUnit: public Unit
{

public:

    enum Modifier{
        CONST = 1,
        STATIC = 1 << 1,
        VIRTUAL = 1 << 2,
        FINAL = 1 << 3,
        ABSTRACT = 1 << 4,
        OVERRIDE = 1 << 5
    };
    static const std::array<std::string,6> MODIFIERS;
    AbstractMethodUnit(const std::string&, const std::string&, Flags);
    void add(const UnitPointer&, Flags);
    std::string methodModifierToModifiers(std::array<Flags,0>::const_iterator arrayBeginning,
                                          std::array<Flags,0>::const_iterator arrayEnd) const;
protected:

    std::string methodName;
    std::string methodReturnType;
    Flags methodModifier;
    UnitVector methodBody;
};

#endif // ABCTRACTMETHODUNIT_H
