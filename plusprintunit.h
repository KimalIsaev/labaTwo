#ifndef PLUSPRINTUNIT_H
#define PLUSPRINTUNIT_H

#include "abstractprintunit.h"

class PlusPrintUnit : public AbstractPrintUnit
{
public:
    PlusPrintUnit(const std::string& text): AbstractPrintUnit(text){}
    std::string compile(unsigned int level = 0, bool firstTab = 1) const {
        return (firstTab?generateShift(level):"") + "print(\"" + printText +"\");\n";
    }
};

#endif // PLUSPRINTUNIT_H
