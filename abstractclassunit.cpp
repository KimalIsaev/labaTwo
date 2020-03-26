#include "abstractclassunit.h"

const std::vector<std::string> AbstractClassUnit::ACCESS_MODIFIERS = {"public",
                                                                      "protected",
                                                                      "private"};


void AbstractClassUnit::add(const UnitPointer& unitPointer, Flags flags){
    int accessModifier = PRIVATE;
    if (flags < ACCESS_MODIFIERS.size())
        accessModifier = flags;
    modifierFieldVector[accessModifier].push_back(unitPointer);
}
