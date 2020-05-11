#include "javamethodunit.h"

std::string JavaMethodUnit::compile(unsigned int level, bool firstTab) const{
    std::string result = (firstTab?generateShift(level):"");
    unsigned long indexOfFlag = 1;
    for (unsigned int i=0; i < MODIFIERS.size(); i++, indexOfFlag*=2)
        if ((indexOfFlag&methodModifier)&&(std::find(supporteModifier.begin(), supporteModifier.end(), indexOfFlag) != supporteModifier.end())){
            if (indexOfFlag == OVERRIDE) {
                result += "@Override ";
            } else {
                result += MODIFIERS[i] + " ";
            }
        }
    result += methodReturnType + " ";
    result += methodName + "() ";
    result += " {\n";
    for (const UnitPointer& unitPointer: methodBody)
        result += unitPointer->compile(level+1);
    result += generateShift(level) + "}\n";
    return result;
}
