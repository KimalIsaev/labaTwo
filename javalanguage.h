#ifndef JAVAINTERPRETER_H
#define JAVAINTERPRETER_H

#include "abstractlanguage.h"
#include "javaclassunit.h"
#include "javamethodunit.h"
#include "javaprintunit.h"

using Flags = unsigned int;

class JavaLanguage : public AbstractLanguage
{
public:
        AbstractClassUnit* createClassUnit(const std::string& name);
        AbstractMethodUnit* createMethodUnit(const std::string& name, const std::string& returnType, Flags flags);
        AbstractPrintUnit* createPrintUnit(const std::string& text);
};

#endif // JAVAINTERPRETER_H
