/*
* Created by Kevin Shin, 7/21/2023 
* The AbstractFactory Pattern as part of a Creational Design Pattern
* 
* The functionality of this AbstractFactory consists of:
* An unordered map with an enum key and a constructor value.
* This uses perfect forwarding and move semantics.
*/


#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp

#include <functional>
#include <unordered_map>

namespace Creational {
    // FactoryKeyType MUST be an enum
    template <typename FactoryKeyType, typename FactoryValue, typename... Arguments>
    class AbstractFactory {
    public:
        using Constructor = std::function<FactoryValue (Arguments&&...)>;
        template <FactoryKeyType Key>
        AbstractFactory& add(Constructor aConstructor) {
            factory[Key] = aConstructor;
            return *this;
        }

        FactoryValue create(FactoryKeyType Key, Arguments&&... args) {
            auto it = factory.find(Key);
            if (it != factory.end()) {
                return it->second(std::forward<Arguments>(args)...);
            }
            return FactoryValue();
        }
    protected:

    private:
        std::unordered_map<FactoryKeyType, Constructor> factory;
    };

}

#endif // AbstractFactory_hpp
