#ifndef ABSTRACTINTERPRETER_H
#define ABSTRACTINTERPRETER_H

#include "abstractclassunit.h"
#include "abstractmethodunit.h"
#include "abstractprintunit.h"
using Flags = unsigned int;


class AbstractLanguage
{
public:
    virtual ~AbstractLanguage() {};
    virtual AbstractClassUnit* createClassUnit(const std::string& name) = 0;
    virtual AbstractMethodUnit* createMethodUnit(const std::string& name, const std::string& returnType, Flags flags) = 0;
    virtual AbstractPrintUnit* createPrintUnit(const std::string& name) = 0;
};

#endif // ABSTRACTINTERPRETER_H
