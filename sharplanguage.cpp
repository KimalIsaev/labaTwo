#include "sharplanguage.h"

AbstractClassUnit* SharpLanguage::createClassUnit(){
    return new SharpClassUnit();
}

AbstractMethodUnit* SharpLanguage::createMethodUnit(){
    return new SharpMethodUnit();
}

AbstractPrintUnit* SharpLanguage::createPrintUnit(){
    return new SharpPrintUnit();
}
