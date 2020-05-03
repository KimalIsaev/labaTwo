#include "interpreter.h"


void Interpreter::add(const UnitPointer& unitPointer, Flags flags)
{
    int i;
    for(i=0; i<classUnitList.size(); i++)
        classUnitList[i]->add(unitPointer, flags);

    for(i=0; i<methodUnitList.size(); i++)
        methodUnitList[i]->add(unitPointer, flags);
}
/*
std::string Interpreter::compile(unsigned int level, bool firstTab)
{
    int i;
    for(i=0; i<classUnitList.size(); i++)
        classUnitList[i]->compile(level, firstTab);

    for(i=0; i<methodUnitList.size(); i++)
        methodUnitList[i]->add(unitPointer, flags);
}*/
