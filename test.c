#include <stdio.h>
#include "power.h"

void test_r_normal() {
    float voltage = 4;
    float resistance = 4;
    float expected = 4;
    float actual = calc_power_r(voltage, resistance);
    if(actual == expected) {
        printf("Test case test_r_normal passed with success!\n");
    } else {
        printf("Test case test_r_normal failed!\n Expected value: %.2f , Actual value: %.2f\n", expected, actual);
    }
}

void test_r_illegal_volatage() {
    float voltage = 0;
    float resistance = 4;
    float expected = -2;
    float actual = calc_power_r(voltage, resistance);
    if(actual == expected) {
        printf("Test case test_r_illegal_volatage passed with success!\n");
    } else {
        printf("Test case test_r_illegal_volatage failed!\n Expected value: %.2f , Actual value: %.2f\n", expected, actual);
    }
}
void test_r_illegal_resistance() {
    float voltage = 4;
    float resistance = 0;
    float expected = -1;
    float actual = calc_power_r(voltage, resistance);
    if(actual == expected) {
        printf("Test case test_r_illegal_resistance passed with success!\n");
    } else {
        printf("Test case test_r_illegal_resistance failed!\n Expected value: %.2f , Actual value: %.2f\n", expected, actual);
    }    
}

void test_i_normal() {
    float voltage = 4;
    float current = 4;
    float expected = 16;
    float actual = calc_power_i(voltage, current);
    if(actual == expected) {
        printf("Test case test_i_normal passed with success!\n");
    } else {
        printf("Test case test_i_normal failed!\n Expected value: %.2f , Actual value: %.2f\n", expected, actual);
    }
}

void test_i_illegal_volatage() {
    float voltage = 0;
    float current = 4;
    float expected = -2;
    float actual = calc_power_i(voltage, current);
    if(actual == expected) {
        printf("Test case test_i_illegal_volatage passed with success!\n");
    } else {
        printf("Test case test_i_illegal_volatage failed!\n Expected value: %.2f , Actual value: %.2f\n", expected, actual);
    }
}
void test_i_illegal_current() {
    float voltage = 4;
    float current = 0;
    float expected = -1;
    float actual = calc_power_i(voltage, current);
    if(actual == expected) {
        printf("Test case test_i_illegal_current passed with success!\n");
    } else {
        printf("Test case test_i_illegal_current failed!\n Expected value: %.2f , Actual value: %.2f\n", expected, actual);
    }    
}

void main() {
    test_r_normal();
    test_r_illegal_volatage();
    test_r_illegal_resistance();

    test_i_normal();
    test_i_illegal_volatage();
    test_i_illegal_current();
}