#ifndef ABSTRACTCLASSUNIT_H
#define ABSTRACTCLASSUNIT_H

#include "unit.h"
#include <vector>

class AbstractClassUnit : public Unit
{
public:
    enum AccessModifier {
        PUBLIC = 1,
        PROTECTED,
        PRIVATE,
        INTERNAL,
        PROTECTEDINTERNAL,
        PRIVATEPROTECTED,
        FINAL,
        ABSTRACT
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
    explicit AbstractClassUnit(const std::string& name, Flags modifier): className(name),  classdModifier(modifier){
        modifierFieldVector.resize(ACCESS_MODIFIERS.size());
    }
    void add(const UnitPointer&, Flags);
protected:
    std::string className;
    std::vector<UnitVector> modifierFieldVector;
    Flags classdModifier;
};

#endif // ABSTRACTCLASSUNIT_H
