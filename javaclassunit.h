#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H

#include "abstractclassunit.h"

class JavaClassUnit : public AbstractClassUnit
{
    bool publicOrNot = 0;
public:
    JavaClassUnit(const std::string& name):  AbstractClassUnit(name){}
    std::string compile(unsigned int level = 0, bool firtTab = 0) const;
};

#endif // JAVACLASSUNIT_H
