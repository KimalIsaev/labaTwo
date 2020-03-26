#ifndef PRINTUNIT_H
#define PRINTUNIT_H

#include "unit.h"

class PrintUnit : public Unit
{
public:
    explicit PrintUnit(const std::string& text):
        printText(text) {}
    std::string compile(unsigned int level = 0) const {
        return generateShift(level) + "print(\"" + printText +"\");\n";
    }
private:
    std::string printText;
};

#endif // PRINTUNIT_H
