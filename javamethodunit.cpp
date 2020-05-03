#include "javamethodunit.h"

std::string JavaMethodUnit::compile(unsigned int level, bool firtTab) const{
    std::string result;
    if (firtTab)
        result = generateShift(level);
    if (methodModifier&STATIC){
        result += "static ";
    }else if(!(methodModifier&VIRTUAL)){
        result += "final ";
    }
    result += methodReturnType + " ";
    result += methodName + "() ";
    if (methodModifier&CONST)
        result += " const";
    result += " {\n";

    for (const UnitPointer& unitPointer: methodBody)
        result += unitPointer->compile(level+1);
    result += generateShift(level) + "}\n";
    return result;
}
