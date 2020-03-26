#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "abstractclassunit.h"
#include "abstractmethodunit.h"
#include "abstractprintunit.h"
#include <vector>

class Interpreter
{
public:
    ~Interpreter(){
        for(auto classUnitPointer: classUnitList)
            delete classUnitPointer;
        for(auto methodUnitPointer: methodUnitList)
            delete methodUnitPointer;
        for(auto printUnitPointer: printUnitList)
            delete printUnitPointer;
    }
    std::vector<AbstractClassUnit*> classUnitList;
    std::vector<AbstractMethodUnit*> methodUnitList;
    std::vector<AbstractPrintUnit*> printUnitList;
};

#endif // INTERPRETER_H
