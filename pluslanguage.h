#ifndef PLUSINTERPRETER_H
#define PLUSINTERPRETER_H

#include "abstractlanguage.h"
#include "plusmethodunit.h"
#include "plusprintunit.h"
#include "plusclassunit.h"

using Flags = unsigned int;

class PlusLanguage : public AbstractLanguage
{
public:
    AbstractClassUnit* createClassUnit(const std::string& name, Flags modifier = 0);
    AbstractMethodUnit* createMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    AbstractPrintUnit* createPrintUnit(const std::string& text);
};

#endif // PLUSINTERPRETER_H
