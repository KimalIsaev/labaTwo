#ifndef SHARPINTERPRETER_H
#define SHARPINTERPRETER_H

#include "abstractlanguage.h"
#include "abstractclassunit.h"
#include "abstractmethodunit.h"
#include "abstractprintunit.h"


class SharpLanguage : public AbstractLanguage
{
public:
    AbstractClassUnit* createClassUnit();
    AbstractPrintUnit* createPrintUnit();
    AbstractMethodUnit* createMethodUnit();
};

#endif // SHARPINTERPRETER_H
