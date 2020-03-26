#include "methodunit.h"


MethodUnit::MethodUnit(const std::string& name, const std::string& returnType, Flags flags):
    methodName(name), methodReturnType(returnType), methodModifier(flags) {}


void MethodUnit::add(const UnitPointer& unitPointer, Flags = 0){
    methodBody.push_back(unitPointer);
}


std::string MethodUnit::compile(unsigned int level) const{
    std::string result = generateShift(level);
    if (methodModifier&STATIC){
        result += "static ";
    }else if(methodModifier&VIRTUAL){
        result += "virtual ";
    }
    result += methodReturnType + " ";
    result += "() ";
    if (methodModifier&CONST)
        result += " const";
    result += " {/n";

    for (const UnitPointer& unitPointer: methodBody)
        result += unitPointer->compile(level+1);
    result += generateShift(level) + "}\n";
    return result;
}
