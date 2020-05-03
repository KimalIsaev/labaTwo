#ifndef SHARPPRINTUNIT_H
#define SHARPPRINTUNIT_H

#include "abstractprintunit.h"

class SharpPrintUnit : public AbstractPrintUnit
{
public:
    SharpPrintUnit(const std::string& text): AbstractPrintUnit(text){}
    std::string compile(unsigned int level = 0, bool firstTab = 1) const {
        return (firstTab?generateShift(level):"") + "print(\"" + printText +"\");\n";
    }
};

#endif // SHARPPRINTUNIT_H
