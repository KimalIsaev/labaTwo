#include "plusmethodunit.h"

std::string PlusMethodUnit::compile(unsigned int level, bool firstTab) const{
    std::string result;
    if (firstTab)
        result = generateShift(level);
    result += methodModifierToModifiers(beforeModifier.begin(), beforeModifier.end());
    result += methodReturnType + " ";
    result += methodName + "() ";
    result += methodModifierToModifiers(afterModifier.begin(), afterModifier.end());
    result += " {\n";
    for (const UnitPointer& unitPointer: methodBody)
        result += unitPointer->compile(level+1);
    result += generateShift(level) + "}\n";
    return result;
}
