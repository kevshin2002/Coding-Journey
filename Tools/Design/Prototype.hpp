/*
	Created by Kevin Shin on 1/19/2024
	The Prototype design pattern as part of the Creational designs.
*/

#ifndef Prototype_hpp
#define Prototype_hpp

#include <unordered_map>
#include <memory>

namespace Creational {
	template <typename derivedClass>
	using PrototypeState = std::shared_ptr<derivedClass>
	class Prototype {
	public:
		Prototype(){}
		~Prototype(){}

		PrototypeState 
	protected:


	private:

		Prototype(Prototype& aPrototype) = delete;
		std::unordered_map<uint32_t, ProtoTypeState> states;
	};

}

#endif // Prototype.hpp

/*
We create a class and want a history of their old versions.


*/