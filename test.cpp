#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
using namespace std;

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {

    vector<int> vect{0, 0, 0};

    REQUIRE( AddN(vect, 3).size() == 3 );
    REQUIRE( AddN(vect, 3)[0] == 3 );
    REQUIRE(AddN(vect, 4)[1] == 4);

    vector<int> vect2{1, 2, 3, 4};
    REQUIRE(SubtractN(vect2, 5).size() == 4);
    REQUIRE(SubtractN(vect2, 4)[1] == -2);

    vector<int> correctVec{-3, -2, -1, 0};
    for (int i = 0; i < correctVec.size(); i++) {
        REQUIRE(SubtractN(vect2, 4)[i] == correctVec[i]);
    }

}
