#ifndef ABSTRACTINTERPRETER_H
#define ABSTRACTINTERPRETER_H

#include "abstractclassunit.h"
#include "abstractmethodunit.h"
#include "abstractprintunit.h"


class AbstractLanguage
{
public:
    virtual ~AbstractLanguage() {};
    virtual AbstractClassUnit* createClassUnit() = 0;
    virtual AbstractMethodUnit* createMethodUnit() = 0;
    virtual AbstractPrintUnit* createPrintUnit() = 0;
};

#endif // ABSTRACTINTERPRETER_H
