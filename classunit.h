#ifndef CLASSUNIT_H
#define CLASSUNIT_H

#include "unit.h"
#include <vector>





class ClassUnit:Unit
{


public:
    enum AccessModifier {
        PUBLIC,
        PROTECTED,
        PRIVATE
    };
    static const std::vector<std::string> ACCESS_MODIFIERS;
    explicit ClassUnit(const std::string& name): className(name){
        modifierFieldVector.resize(ACCESS_MODIFIERS.size());
    }
    std::string compile(unsigned int) const;
    void add(const UnitPointer&, Flags);
private:
    std::string className;
    std::vector<UnitVector> modifierFieldVector;
};

#endif // CLASSUNIT_H
