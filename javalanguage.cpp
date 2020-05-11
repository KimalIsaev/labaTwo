#include "javalanguage.h"


AbstractClassUnit* JavaLanguage::createClassUnit(const std::string& name, Flags modifier){
    return new JavaClassUnit(name, modifier);
}

AbstractMethodUnit* JavaLanguage::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
    return new JavaMethodUnit(name, returnType, flags);
}

AbstractPrintUnit* JavaLanguage::createPrintUnit(const std::string& text){
    return new JavaPrintUnit(text);
}
