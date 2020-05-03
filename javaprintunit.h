#ifndef JAVAPRINTUNIT_H
#define JAVAPRINTUNIT_H

#include "abstractprintunit.h"

class JavaPrintUnit : public AbstractPrintUnit
{
public:
    JavaPrintUnit(const std::string& text): AbstractPrintUnit(text){}
    std::string compile(unsigned int level = 0, bool firstTab = 1) const {
        return (firstTab?generateShift(level):"") + "System.out.printf(\"" + printText +"\");\n";
    }
};

#endif // JAVAPRINTUNIT_H
