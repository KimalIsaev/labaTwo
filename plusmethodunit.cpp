#include "plusmethodunit.h"

std::string PlusMethodUnit::compile(unsigned int level, bool firstTab) const{
    std::string result;
    if (firstTab)
    result = generateShift(level);
    if (methodModifier&STATIC){
        result += "static ";
    }else if(methodModifier&VIRTUAL){
        result += "virtual ";
    }
    result += methodReturnType + " ";
    result +=methodName + "() ";
    if (methodModifier&CONST)
        result += " const";
    result += " {\n";

    for (const UnitPointer& unitPointer: methodBody)
        result += unitPointer->compile(level+1);
    result += generateShift(level) + "}\n";
    return result;
}
