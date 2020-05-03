#ifndef JAVAMETODUNIT_H
#define JAVAMETODUNIT_H

#include "abstractmethodunit.h"

class JavaMethodUnit : public AbstractMethodUnit
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, Flags
                   flags ):  AbstractMethodUnit (name,returnType, flags){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};

#endif // JAVAMETODUNIT_H
