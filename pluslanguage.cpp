#include "pluslanguage.h"


AbstractClassUnit* PlusLanguage::createClassUnit(){
    return new PlusClassUnit();
}

AbstractMethodUnit* PlusLanguage::createMethodUnit(){
    return new PlusMethodUnit();
}

AbstractPrintUnit* PlusLanguage::createPrintUnit(){
    return new PlusPrintUnit();
}
