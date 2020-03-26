#include "interpretercreator.h"

Interpreter* InterpreterCreator::createInterpreter(AbstractLanguage& language)
{
    Interpreter* p = new Interpreter;
    p->classUnitVector.push_back(language.createClassUnit());
    p->methodUnitListVector.push_back(language.createMethodUnit());
    p->printUnitVector.push_back(language.createPrintUnit());
}
