#ifndef ABSTRACTCLASSUNIT_H
#define ABSTRACTCLASSUNIT_H

#include "unit.h"
#include <vector>

class AbstractClassUnit : protected Unit
{
public:
    enum AccessModifier {
        PUBLIC,
        PROTECTED,
        PRIVATE
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
    explicit AbstractClassUnit(const std::string& name): className(name){
        modifierFieldVector.resize(ACCESS_MODIFIERS.size());
    }
    void add(const UnitPointer&, Flags);

protected:
    std::string className;
    std::vector<UnitVector> modifierFieldVector;
};

#endif // ABSTRACTCLASSUNIT_H
