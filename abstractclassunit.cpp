#include "abstractclassunit.h"

const std::array<std::string, 7> AbstractClassUnit::ACCESS_MODIFIERS = {"",
                                                                        "public",
                                                                        "protected",
                                                                        "private",
                                                                        "internal",
                                                                        "protected internal",
                                                                        "protected private"
                                                                        };


void AbstractClassUnit::add(const UnitPointer& unitPointer, Flags flags){
    int accessModifier = PRIVATEPROTECTED;
    if (flags < ACCESS_MODIFIERS.size())
        accessModifier = flags;
    modifierFieldVector[accessModifier].push_back(unitPointer);
}
