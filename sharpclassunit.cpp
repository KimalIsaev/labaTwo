#include "sharpclassunit.h"


std::string SharpClassUnit::compile(unsigned int level, bool firstTab) const{
    std::string result = (firstTab?generateShift(level):"") + "class " + className + " {\n";

    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(modifierFieldVector[i].empty())
            continue;

        for (const UnitPointer& unitPointer: modifierFieldVector[i])
            result += generateShift(level+1) + ACCESS_MODIFIERS[i] + " " + unitPointer->compile(level + 1, firstTab);
        result += "\n";
    }
    result += generateShift(level) + "};\n";
    return result;
}
