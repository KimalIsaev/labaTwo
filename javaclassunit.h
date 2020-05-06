#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "abstractclassunit.h"
#include <array>
#include <algorithm>

class JavaClassUnit : public AbstractClassUnit
{
    static const constexpr std::array<Flags,3> supportedModifier{PUBLIC, PRIVATE, PROTECTED};
public:
    JavaClassUnit(const std::string& name, Flags modifier = 0):  AbstractClassUnit(name, modifier){}
    std::string compile(unsigned int level = 0, bool firtTab = 0) const;
};

#endif // JAVACLASSUNIT_H
