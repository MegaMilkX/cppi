
#include <stdint.h>
#include <string>

template<int VALUE>
class value_object {};

template<typename T>
class value_array{};

template<typename T = value_array< value_object<(5 < 4)> >>
class value_test{};

static const value_array<value_object<(1 >> 4)>> my_array;
static const value_test<int> my_test;

static const int hello = 10;

[[]]
bool val;

[[Attrib]];

decltype(2) boob;

struct MyStruct {};

class A {
    template<typename T>
    void foo();
};
template<typename T>
void A:: template foo<T>();

enum EnumBase {
    POO
};

enum [[A]] Enum : unsigned int {
    FIRST,
    SECOND,
    THIRD
};

void kek(unsigned int a) {

}

void foo() {
    
}

[[A]]
const volatile int [[A]]* const volatile [[A]] poop2 [[A]];

class bar {};

const int typedef lol;

extern int(*gloop)(int);

inline int poop(float value) {
    return 0;
}
inline int poop_3(float booba);

namespace Hidden {
    class BaseClass {
        int foo();
    };
    int BaseClass::foo() {
        return 0;
    }
}

class BaseA {};
class BaseB {};
class BaseC {};
class BaseD {};
class BaseE {};

class [[]] MyClassZ final : BaseA, public BaseB, [[Poop]] virtual BaseC, virtual private BaseD, protected virtual BaseE {

};

class [[]] : BaseA {};

namespace Test {
    namespace Z0 {
        class MyClass;
    }
}

static const BaseA base_a;

class
[[ Engine::Actor(health = 10 { mana=9, cuteness=3 }), Category(Stuff), Editor, Reflect ]] 
::Test::Z0::MyClass : public ::Hidden::BaseClass {
public:
    void foo(int a, float b) {

    }
};