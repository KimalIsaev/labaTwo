#include "pluslanguage.h"


AbstractClassUnit* PlusLanguage::createClassUnit(const std::string& name, Flags modifier){
    return new PlusClassUnit(name, modifier);
}

AbstractMethodUnit* PlusLanguage::createMethodUnit(const std::string& name, const std::string& returnType, Flags flags){
    return new PlusMethodUnit(name, returnType, flags);
}

AbstractPrintUnit* PlusLanguage::createPrintUnit(const std::string& text){
    return new PlusPrintUnit(text);
}
