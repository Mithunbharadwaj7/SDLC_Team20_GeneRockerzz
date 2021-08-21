#include "unity.h"
#include "and.h" /** add your respective .h files here*/

void setUp(void){}

void tearDown(void){}

void test_and_two_input(void){
    and_two _values;
    // for positive values
    _values._a = 1;
    _values._b = 1;
    _values._res1;
    TEST_ASSERT_EQUAL_INT(PASS, and_two_input(&_values));
    // for negative values
    _values._a = -1;
    _values._b = 1;
    _values._res1;
    TEST_ASSERT_EQUAL_INT(ERR_NEGATIVE, and_two_input(&_values));
}

void test_and_three_input(void){
    // for positive values
    and_three _values;
    _values._a1 = 1;
    _values._b1 = 1;
    _values._c1 = 1;
    _values._res2;
    TEST_ASSERT_EQUAL_INT(PASS, and_three_input(&_values));
    // for negative values
    _values._a1 = -1;
    _values._b1 = 1;
    _values._c1 = 1;
    _values._res2;
    TEST_ASSERT_EQUAL_INT(ERR_NEGATIVE, and_three_input(&_values));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_and_two_input);
    RUN_TEST(test_and_three_input);/** add other functions*/
    return UNITY_END();
}