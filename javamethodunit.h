#ifndef JAVAMETODUNIT_H
#define JAVAMETODUNIT_H

#include "abstractmethodunit.h"
#include <array>
#include <algorithm>

class JavaMethodUnit : public AbstractMethodUnit
{
    static const constexpr std::array<Flags,4> supporteModifier{ABSTRACT, FINAL, STATIC, OVERRIDE};
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, Flags
                   flags ):  AbstractMethodUnit (name,returnType, flags){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};

#endif // JAVAMETODUNIT_H
