#include "classunit.h"


const std::vector<std::string> ClassUnit::ACCESS_MODIFIERS = {"public", "protected", "private"};


void ClassUnit::add(const UnitPointer& unitPointer, Flags flags){
    int accessModifier = PRIVATE;
    if (flags < ACCESS_MODIFIERS.size())
        accessModifier = flags;
    modifierFieldVector[accessModifier].push_back(unitPointer);
}

std::string ClassUnit::compile(unsigned int level = 0) const{
    std::string result = generateShift(level) + "class " + className + " {\n";

    for (size_t i = 0; i < ACCESS_MODIFIERS.size(); ++i) {
        if(modifierFieldVector[i].empty())
            continue;

        result += ACCESS_MODIFIERS[i] + ":\n";
        for (const UnitPointer& unitPointer: modifierFieldVector[i])
            result += unitPointer->compile(level + 1);
        result += "\n";
    }
    result += generateShift( level ) + "};\n";
    return result;
}
