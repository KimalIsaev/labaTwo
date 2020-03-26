#ifndef PLUSMETODUNIT_H
#define PLUSMETODUNIT_H

#include "abstractmethodunit.h"


class PlusMethodUnit : public AbstractMethodUnit
{
public:
    enum Modifier{
        VIRTUAL = 1 << 2,
    };
    std::string compile(unsigned int) const;
};

#endif // PLUSMETODUNIT_H
