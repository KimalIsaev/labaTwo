#include "abstractclassunit.h"

const std::vector<std::string> AbstractClassUnit::ACCESS_MODIFIERS = {"",
                                                                      "public",
                                                                      "protected",
                                                                      "private",
                                                                      "internal",
                                                                      "protected internal",
                                                                      "protected private",
                                                                      "final",
                                                                      "abstract"};


void AbstractClassUnit::add(const UnitPointer& unitPointer, Flags flags){
    int accessModifier = ABSTRACT;
    if (flags < ACCESS_MODIFIERS.size())
        accessModifier = flags;
    modifierFieldVector[accessModifier].push_back(unitPointer);
}
