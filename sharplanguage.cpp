#include "sharplanguage.h"

AbstractClassUnit* SharpLanguage::createClassUnit(const std::string& name){
    return new SharpClassUnit(name);
}

AbstractMethodUnit* SharpLanguage::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
    return new SharpMethodUnit(name, returnType, flags);
}

AbstractPrintUnit* SharpLanguage::createPrintUnit(const std::string& text){
    return new SharpPrintUnit(text);
}
