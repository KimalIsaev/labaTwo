#ifndef SHARPMETODUNIT_H
#define SHARPMETODUNIT_H

#include "abstractmethodunit.h"


class SharpMethodUnit : public AbstractMethodUnit
{
public:
    SharpMethodUnit(const std::string& name, const std::string& returnType, Flags
                   flags ):  AbstractMethodUnit (name,returnType, flags){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};


#endif // SHARPMETODUNIT_H
