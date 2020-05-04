#ifndef SHARPCLASSUNIT_H
#define SHARPCLASSUNIT_H

#include "abstractclassunit.h"

class SharpClassUnit : public AbstractClassUnit
{
    bool internal_ = 0;
public:
    SharpClassUnit(const std::string& name, bool internal = 0):  AbstractClassUnit(name), internal_(internal){}
    std::string compile(unsigned int level = 0, bool firtTab = 1) const;

};

#endif // SHARPCLASSUNIT_H
