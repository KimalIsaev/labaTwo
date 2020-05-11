#ifndef SHARPCLASSUNIT_H
#define SHARPCLASSUNIT_H

#include "abstractclassunit.h"
#include <array>
#include <algorithm>

class SharpClassUnit : public AbstractClassUnit
{
    static const constexpr std::array<Flags,6> supportedModifier{PUBLIC, PRIVATE, PROTECTED, INTERNAL, PROTECTEDINTERNAL, PRIVATEPROTECTED};
public:
    SharpClassUnit(const std::string& name, Flags modifier = 0):  AbstractClassUnit(name, modifier){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;

};

#endif // SHARPCLASSUNIT_H
