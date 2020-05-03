#ifndef PLUSMETODUNIT_H
#define PLUSMETODUNIT_H

#include "abstractmethodunit.h"


class PlusMethodUnit : public AbstractMethodUnit
{
public:
    PlusMethodUnit(const std::string& name, const std::string& returnType, Flags
                   flags ):  AbstractMethodUnit (name,returnType, flags){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};

#endif // PLUSMETODUNIT_H
