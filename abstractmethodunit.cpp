#include "abstractmethodunit.h"

const std::array<std::string, 6> AbstractMethodUnit::MODIFIERS = {"const", "static", "virtual", "final", "abstract", "override"};

AbstractMethodUnit::AbstractMethodUnit(const std::string& name, const std::string& returnType, Flags flags):
    methodName(name), methodReturnType(returnType), methodModifier(flags) {}


void AbstractMethodUnit::add(const UnitPointer& unitPointer, Flags = 0){
    methodBody.push_back(unitPointer);
}

std::string AbstractMethodUnit::methodModifierToModifiers(std::array<Flags,0>::const_iterator arrayBeginning,
                                                          std::array<Flags,0>::const_iterator arrayEnd) const{
    std::string result;
    unsigned long indexOfFlag = 1;
    for (unsigned int i=0; i < MODIFIERS.size(); i++, indexOfFlag*=2)
        if ((indexOfFlag&methodModifier)&&(std::find(arrayBeginning, arrayEnd, indexOfFlag) != arrayEnd))
            result += MODIFIERS[i] + " ";
    return result;
}

