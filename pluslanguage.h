#ifndef PLUSINTERPRETER_H
#define PLUSINTERPRETER_H

#include "abstractlanguage.h"


class PlusLanguage : public AbstractLanguage
{
public:
    AbstractClassUnit* createClassUnit();
    AbstractPrintUnit* createPrintUnit();
    AbstractMethodUnit* createMethodUnit();
};

#endif // PLUSINTERPRETER_H
