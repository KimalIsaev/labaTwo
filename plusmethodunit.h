#ifndef PLUSMETODUNIT_H
#define PLUSMETODUNIT_H

#include "abstractmethodunit.h"
#include <array>
#include <algorithm>

class PlusMethodUnit : public AbstractMethodUnit
{
    static const constexpr std::array<Flags,2> beforeModifier{VIRTUAL, STATIC};
    static const constexpr std::array<Flags,2> afterModifier{CONST, OVERRIDE};
public:
    PlusMethodUnit(const std::string& name, const std::string& returnType, Flags
                   flags ):  AbstractMethodUnit (name,returnType, flags){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};

#endif // PLUSMETODUNIT_H
