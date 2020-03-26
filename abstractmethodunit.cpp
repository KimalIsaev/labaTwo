#include "abstractmethodunit.h"


AbstractMethodUnit::AbstractMethodUnit(const std::string& name, const std::string& returnType, Flags flags):
    methodName(name), methodReturnType(returnType), methodModifier(flags) {}


void AbstractMethodUnit::add(const UnitPointer& unitPointer, Flags = 0){
    methodBody.push_back(unitPointer);
}

