#include "interpretercreator.h"

Interpreter* InterpreterCreator::createInterpreter(AbstractLanguage& language)
{
    Interpreter* p = new Interpreter;
    p->classUnitList.push_back(language.createClassUnit());
    p->methodUnitList.push_back(language.createMethodUnit());
    p->printUnitList.push_back(language.createPrintUnit());
    return p;
}
