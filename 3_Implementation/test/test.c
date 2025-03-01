#include "unity.h"
#include "gates.h" /** add your respective .h files here*/
#include "adder.h"
#include "Subtractor.h"
#include "mux.h"
#include "demux.h"
#include "conversion.h"
#include "latch.h"
#include "jk.h"
#include "flipflop.h"
#include "counter.h"

void setUp(void){}

void tearDown(void){}

void test_and_two_input(void){
    and_two _values;
    // for positive values
    _values._a = 1;
    _values._b = 1;
    _values._res1;
    TEST_ASSERT_EQUAL_INT(PASS_1, and_two_input(&_values));
    // for negative values
    _values._a = -1;
    _values._b = 1;
    _values._res1;
    TEST_ASSERT_EQUAL_INT(ERR_NEGATIVE_1, and_two_input(&_values));
}

void test_and_three_input(void){
    // for positive values
    and_three _values;
    _values._a1 = 1;
    _values._b1 = 1;
    _values._c1 = 1;
    _values._res2;
    TEST_ASSERT_EQUAL_INT(PASS_1, and_three_input(&_values));
    // for negative values
    _values._a1 = -1;
    _values._b1 = 1;
    _values._c1 = 1;
    _values._res2;
    TEST_ASSERT_EQUAL_INT(ERR_NEGATIVE_1, and_three_input(&_values));
}

void test_half_adder(void){
    hf_adder param;
    param.A  = 1;
    param.B  = 1;
    param.sum;
    param.carry;
    TEST_ASSERT_EQUAL_INT(PASS, halfadder(&param));
}

void test_full_adder(void){
    fl_adder param;
    param.A  = 1;
    param.B  = 1;
    param.C  = 1;
    param.sum;
    param.carry;
    TEST_ASSERT_EQUAL_INT(PASS, fulladder(&param));
}

void test_half_Subtractor(void){
    half_subtractor values;
    // for positive values
    values.a  = 1;
    values.b  = 1;
    values.Difference;
    values.Borrow;
    TEST_ASSERT_EQUAL_INT(PASS_sub, half_Subtractor(&values));
}

void test_full_Subtractor(void){
    full_subtractor values;
    // for positive values
    values.a1  = 1;
    values.b1  = 1;
    values.c1  = 1;
    values.Difference_1 ;
    values.Borrow_1;
    TEST_ASSERT_EQUAL_INT(PASS_sub, full_Subtractor(&values));
}

void test_MUX_2x1(void){
    mux_2x1 _values;
    // for positive values
    _values._en = 1;
    _values._d0 = 1;
    _values._d1 = 1;
    _values._s1 = 1;
    _values._res_2x1;
    TEST_ASSERT_EQUAL_INT(PASS_mux, MUX_2x1(&_values));
    // for negative values
    _values._en = 1;
    _values._d0 = -1;
    _values._d1 = 1;
    _values._s1 = 0;
    _values._res_2x1;
    TEST_ASSERT_EQUAL_INT(ERR_NEGATIVE_mux, MUX_2x1(&_values));
}

void test_MUX_4x1(void){
    mux_4x1 _values;
    // for positive values
    _values._en = 1;
    _values._d0 = 1;
    _values._d1 = 1;
    _values._s1 = 1;
    _values._d2 = 1;
    _values._d3 = 1;
    _values._s2 = 1;
    _values._res_4x1;
    TEST_ASSERT_EQUAL_INT(PASS_mux, MUX_4x1(&_values));
    // for negative values
    _values._en = 1;
    _values._d0 = 1;
    _values._d1 = 1;
    _values._s1 = 1;
    _values._d2 = 1;
    _values._d3 = -1;
    _values._s2 = 1;
    _values._res_4x1;
    TEST_ASSERT_EQUAL_INT(ERR_NEGATIVE_mux, MUX_4x1(&_values));
}

void test_MUX_8x1(void){
    mux_8x1 _values;
    // for positive values
    _values._en=1;
    _values._s1=0;
    _values._s2=0;
    _values._s3=1;
    _values._d0 = 1;
    _values._d1 = 1;
    _values._d2 = 1;
    _values._d3 = 1;
    _values._d4 = 1;
    _values._d5 = 1;
    _values._d6 = 1;
    _values._d7 = 1;
    _values._res_8x1;
    TEST_ASSERT_EQUAL_INT(PASS_mux, MUX_8x1(&_values));
    // for negative values
    _values._en=1;
    _values._s1=1;
    _values._s2=0;
    _values._s3=0;
    _values._d0 = -1;
    _values._d1 = -1;
    _values._d2 = -1;
    _values._d3 = -1;
    _values._d4 = -1;
    _values._d5 = -1;
    _values._d6 = -1;
    _values._d7 = -1;
    _values._res_8x1;
    TEST_ASSERT_EQUAL_INT(ERR_NEGATIVE_mux, MUX_8x1(&_values));
}

void test_DEMUX_1x2(void){
    demux_1x2 _values;
    // for positive values
    _values._en=1;
    _values._s1 = 1;
    _values._din = 1;
    _values._res1;
    _values._res2;
    TEST_ASSERT_EQUAL_INT(PASS_demux, DEMUX_1x2(&_values));

}

void test_DEMUX_1x4(void){
    demux_1x4 _values;
    // for positive values
    _values._en=1;
    _values._s1 = 1;
    _values._s2 = 1;
    _values._din = 1;
    _values._res1;
    _values._res2;
    _values._res3;
    _values._res4;
    TEST_ASSERT_EQUAL_INT(PASS_demux, DEMUX_1x4(&_values));
    
}

void test_DEMUX_1x8(void){
    demux_1x8 _values;
    // for positive values
    _values._en=1;
    _values._s1 = 1;
    _values._s2 = 1;
    _values._s3 = 1;
    _values._din = 1;
    _values._res1;
    _values._res2;
    _values._res3;
    _values._res4;
    _values._res5;
    _values._res6;
    _values._res7;
    _values._res8;
    TEST_ASSERT_EQUAL_INT(PASS_demux, DEMUX_1x8(&_values));
}

void test_encoder_21(void){
    enco_21 values;
    // for positive values
    values.X0 = 1;
    values.X1 = 1;
    values.Y0;
    TEST_ASSERT_EQUAL_INT(PASS_EDT, encoder_21(&values));
    
}

void test_encoder_42(void){
    enco_42 values;
    // for positive values
    values.X0 = 1;
    values.X1 = 1;
    values.X2 = 1;
    values.X3 = 1;
    values.Y0;
    values.Y1;
    TEST_ASSERT_EQUAL_INT(PASS_EDT, encoder_42(&values));
    
}

void test_encoder_83(void){
    enco_83 values;
    // for positive values
    values.X0 = 1;
    values.X1 = 1;
    values.X2 = 1;
    values.X3 = 1;
    values.X4 = 1;
    values.X5 = 1;
    values.X6 = 1;
    values.X7 = 1;
    values.Y0;
    values.Y1;
    values.Y2;
    TEST_ASSERT_EQUAL_INT(PASS_EDT, encoder_83(&values));
}

void test_decoder_12(void){
    deco_12 values;
    // for positive values
    values.A = 1;
    values.Y0;
    values.Y1;
    TEST_ASSERT_EQUAL_INT(PASS_EDT, decoder_12(&values));
}

void test_decoder_24(void){
    deco_24 values;
    // for positive values
    values.A = 1;
    values.B = 1;
    values.Y0;
    values.Y1;
    values.Y2;
    values.Y3;
    TEST_ASSERT_EQUAL_INT(PASS_EDT, decoder_24(&values));
    // for negative values
}

void test_decoder_38(void){
    deco_38 values;
    // for positive values
    values.A = 1;
    values.B = 1;
    values.C = 1;
    values.Y0;
    values.Y1;
    values.Y2;
    values.Y3;
    values.Y4;
    values.Y5;
    values.Y6;
    values.Y7;
    TEST_ASSERT_EQUAL_INT(PASS_EDT, decoder_38(&values));
    
}
void test_SR_latch(void) {
    SR_lat latches;
    // for positive values
    latches.en=1;
    latches.S=0;
    latches.R=0;
    TEST_ASSERT_EQUAL_INT(PASS_LAT, SR_latch(&latches));
}
void test_D_latch(void) {
    D_lat latches;
    // for positive values
    latches.en=1;
    latches.D=0;
    TEST_ASSERT_EQUAL_INT(PASS_LAT, D_latch(&latches));
}
void test_JK(void) {
    JK_LA latches;
    // for positive values
    latches.en=1;
    latches.j=0;
    latches.k=1;
    TEST_ASSERT_EQUAL_INT(PASS_LAJ, JK(&latches));
}
void test_T(void) {
    T_LA latches;
    // for positive values
    latches.en=1;
    latches.t=1;
    TEST_ASSERT_EQUAL_INT(PASS_LAJ, T(&latches));
}
void test_SR_FF(void) {
    SR_ff flipflop;
    // for positive values
    flipflop.clk=1;
    flipflop.S=1;
    flipflop.R=1;
    TEST_ASSERT_EQUAL_INT(PASS_FF, SR_FF(&flipflop));
}
void test_D_FF(void) {
    D_ff flipflop;
    // for positive values
    flipflop.clk=1;
    flipflop.D=1;
    TEST_ASSERT_EQUAL_INT(PASS_FF, D_FF(&flipflop));
}
void test_JK_FF(void) {
    JK_ff flipflop;
    // for positive values
    flipflop.clk=1;
    flipflop.J=1;
    flipflop.K=0;
    TEST_ASSERT_EQUAL_INT(PASS_FF, JK_FF(&flipflop));
}
void test_T_FF(void) {
    T_ff flipflop;
    // for positive values
    flipflop.clk=1;
    flipflop.T=1;
    TEST_ASSERT_EQUAL_INT(PASS_FF, T_FF(&flipflop));
}
void test_down_counter(void) {
    down_count values;
    values.n=8;
     TEST_ASSERT_EQUAL_INT(PASS_CT, down_counter(&values));
}
void test_up_counter(void) {
    up_count values;
    values.n=5;
     TEST_ASSERT_EQUAL_INT(PASS_CT, up_counter(&values));
}
void test_up_down_counter(void) {
    up_down_count values;
    values.n=3;
     TEST_ASSERT_EQUAL_INT(PASS_CT, up_down_counter(&values));
}
void test_johnson_counter(void) {
    johnson_count values;
    values.n=6;
     TEST_ASSERT_EQUAL_INT(PASS_CT, johnson_counter(&values));
}
void test_ring_counter(void) {
    ring_count values;
    values.n=2;
     TEST_ASSERT_EQUAL_INT(PASS_CT, ring_counter(&values));
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_and_two_input);
    RUN_TEST(test_and_three_input);
    RUN_TEST(test_half_adder);
    RUN_TEST(test_full_adder);
    RUN_TEST(test_half_Subtractor);
    RUN_TEST(test_full_Subtractor);
    RUN_TEST(test_MUX_2x1);
    RUN_TEST(test_MUX_4x1);
    RUN_TEST(test_MUX_8x1);
    RUN_TEST(test_DEMUX_1x2);
    RUN_TEST(test_DEMUX_1x4);
    RUN_TEST(test_DEMUX_1x8);
    RUN_TEST(test_encoder_21);
    RUN_TEST(test_encoder_42);
    RUN_TEST(test_encoder_83);
    RUN_TEST(test_decoder_12);
    RUN_TEST(test_decoder_24);
    RUN_TEST(test_decoder_38);
    RUN_TEST(test_SR_latch);
    RUN_TEST(test_D_latch);
    RUN_TEST(test_JK);
    RUN_TEST(test_T);
    RUN_TEST(test_SR_FF);
    RUN_TEST(test_D_FF);
    RUN_TEST(test_JK_FF);
    RUN_TEST(test_T_FF);
    RUN_TEST(test_down_counter);
    RUN_TEST(test_up_counter);
    RUN_TEST(test_up_down_counter);
    RUN_TEST(test_johnson_counter);
    RUN_TEST(test_ring_counter);
    return UNITY_END();
}