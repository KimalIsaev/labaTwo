#ifndef INTERPRETERCREATOR_H
#define INTERPRETERCREATOR_H

#include "abstractlanguage.h"
#include "interpreter.h"

class InterpreterCreator
{
public:
    Interpreter* createInterpreter(AbstractLanguage&);
};

#endif // INTERPRETERCREATOR_H
