#include "mylib/two/byeWorld.h"

// Added component two from mylib
int main() {
    mylib::two::bye();

//     This will NOT compile because it's NOT exposed in the include directory
//    mylib::two::Print::print_stateless("Hello, World!");
}
