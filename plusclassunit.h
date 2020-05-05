#ifndef PLUSCLASSUNIT_H
#define PLUSCLASSUNIT_H

#include "abstractclassunit.h"
#include <array>
#include <algorithm>


class PlusClassUnit : public AbstractClassUnit
{
    static const constexpr std::array<Flags,3> supportedModifier{PUBLIC, PRIVATE, PROTECTED};
public:
    PlusClassUnit(const std::string& name, Flags modifier = 0):  AbstractClassUnit(name, modifier){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};

#endif // PLUSCLASSUNIT_H
