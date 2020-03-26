#ifndef ABSTRACTPRINTUNIT_H
#define ABSTRACTPRINTUNIT_H

#include "unit.h"

class AbstractPrintUnit: Unit
{
public:
    explicit AbstractPrintUnit(const std::string& text):
        printText(text) {}
private:
    std::string printText;
};

#endif // ABSTRACTPRINTUNIT_H
