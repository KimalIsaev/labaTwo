#include "javalanguage.h"


AbstractClassUnit* JavaLanguage::createClassUnit(){
    return new JavaClassUnit();
}

AbstractMethodUnit* JavaLanguage::createMethodUnit(){
    return new JavaMethodUnit();
}

AbstractPrintUnit* JavaLanguage::createPrintUnit(){
    return new JavaPrintUnit();
}
