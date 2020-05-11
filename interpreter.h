#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "abstractclassunit.h"
#include "abstractmethodunit.h"
#include "abstractprintunit.h"
#include <vector>
using UnitPointer = std::shared_ptr<Unit>;
using Flags = unsigned int;

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
    void add(const UnitPointer&, Flags);
   // std::string compile(unsigned int, bool);
    std::vector<AbstractClassUnit*> classUnitList;
    std::vector<AbstractMethodUnit*> methodUnitList;
    std::vector<AbstractPrintUnit*> printUnitList;
};

#endif // INTERPRETER_H
