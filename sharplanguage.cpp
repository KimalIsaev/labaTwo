#include "sharplanguage.h"

AbstractClassUnit* SharpLanguage::createClassUnit(const std::string& name, Flags modifier){
    return new SharpClassUnit(name, modifier);
}

AbstractMethodUnit* SharpLanguage::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
    return new SharpMethodUnit(name, returnType, flags);
}

AbstractPrintUnit* SharpLanguage::createPrintUnit(const std::string& text){
    return new SharpPrintUnit(text);
}
