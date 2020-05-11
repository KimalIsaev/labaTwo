#ifndef SHARPINTERPRETER_H
#define SHARPINTERPRETER_H

#include "abstractlanguage.h"
#include "sharpclassunit.h"
#include "sharpmethodunit.h"
#include "sharpprintunit.h"

using Flags = unsigned int;

class SharpLanguage : public AbstractLanguage
{
public:
    AbstractClassUnit* createClassUnit(const std::string& name, Flags modifier = 0);
    AbstractMethodUnit* createMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
    AbstractPrintUnit* createPrintUnit(const std::string& text);
};

#endif // SHARPINTERPRETER_H
