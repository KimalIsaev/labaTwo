#ifndef JAVAINTERPRETER_H
#define JAVAINTERPRETER_H

#include "abstractlanguage.h"

class JavaLanguage : public AbstractLanguage
{
public:
    AbstractClassUnit* createClassUnit();
    AbstractPrintUnit* createPrintUnit();
    AbstractMethodUnit* createMethodUnit();
};

#endif // JAVAINTERPRETER_H
