#ifndef UNIT_H
#define UNIT_H

#include <memory>
#include <vector>

class Unit
{
public:
    using Flags = unsigned int;
    using UnitPointer = std::shared_ptr<Unit>;
    using UnitVector = std::vector<UnitPointer>;
    virtual ~Unit() = default;
    virtual void add(const UnitPointer& , Flags){
        throw std::runtime_error("Not supported");
    }
    virtual std::string compile(unsigned int level = 0, bool firtTab = 1) const = 0;
protected:
    virtual std::string generateShift(unsigned int level) const{
        static const auto DEFAULT_SHIFT = "    ";
        std::string result;
        for (unsigned int i = 0; i < level; ++i){
            result += DEFAULT_SHIFT;
        }
        return result;
    }
};

#endif // UNIT_H
