#include "plusclassunit.h"

std::string PlusClassUnit::compile(unsigned int level, bool firstTab) const{
    std::string result = (firstTab?generateShift(level):"") + "class " + className + " {\n";

    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(modifierFieldVector[i].empty() || (std::find(supportedModifier.begin(), supportedModifier.end(), i) == supportedModifier.end()))
            continue;

        result += ACCESS_MODIFIERS[i] + ":\n";
        for (const UnitPointer& unitPointer: modifierFieldVector[i])
            result += unitPointer->compile(level + 1, 1);
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
