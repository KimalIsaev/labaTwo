#ifndef SHARPMETODUNIT_H
#define SHARPMETODUNIT_H

#include "abstractmethodunit.h"
#include <array>
#include <algorithm>

class SharpMethodUnit : public AbstractMethodUnit
{
    static const constexpr std::array<Flags,4> beforeModifier{ABSTRACT, VIRTUAL, STATIC, OVERRIDE};
    //static const constexpr std::array<Flags,1> afterModifier{OVERRIDE};
public:
    SharpMethodUnit(const std::string& name, const std::string& returnType, Flags
                   flags ):  AbstractMethodUnit (name,returnType, flags){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;
};


#endif // SHARPMETODUNIT_H
