#ifndef PLUSPRINTUNIT_H
#define PLUSPRINTUNIT_H

#include "abstractprintunit.h"

class PlusPrintUnit : public AbstractPrintUnit
{
public:
    std::string compile(unsigned int level = 0) const {
        return generateShift(level) + "print(\"" + printText +"\");\n";
    }
};

#endif // PLUSPRINTUNIT_H
