#include "sharpmethodunit.h"


std::string SharpMethodUnit::compile(unsigned int level, bool firstTab) const{
    std::string result;
    if (!firstTab)
    result = generateShift(level);
    if (methodModifier&STATIC){
        result += "static ";
    }else if(methodModifier&VIRTUAL){
        result += "virtual ";
    }
    result += methodReturnType + " ";
    result += "() ";
    if (methodModifier&CONST)
        result +=methodName + " const";
    result += " {\n";

    for (const UnitPointer& unitPointer: methodBody)
        result += unitPointer->compile(level+1);
    result += generateShift(level) + "}\n";
    return result;
}
