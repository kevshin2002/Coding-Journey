#include <iostream>

#include <utility>
#include <iostream>
class Test {
public:
    Test() {
        std::cout << "ctor" << std::endl;
    }
    Test(const Test&) {
        std::cout << "copy ctor" << std::endl;
    }
    Test(Test&&) {
        std::cout << "move ctor" << std::endl;
    }
};

void func(Test const&)
{
    std::cout << "requires lvalue" << std::endl;
}

void func(Test&&)
{
    std::cout << "requires rvalue" << std::endl;
}

template<typename Arg>
void pass(Arg&& arg) {
    // use arg here
    func(std::forward<Arg>(arg));
    return;
}

template<typename Arg, typename ...Args>
void pass(Arg&& arg, Args&&... args)
{
    // use arg here
    return pass(std::forward<Args>(args)...);
}

int main(int, char**)
{
    pass(Test());
    return 0;
}
//int main(int argc, const char* argv[]) {

//}