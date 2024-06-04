#ifndef TST_ROOTS_H
#define TST_ROOTS_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "root.h"
}

int result;
double arr[2];

TEST(root, right_answer) {
    result = roots(arr, 1, -5, 6);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 3);
    ASSERT_EQ(arr[1], 2);
}

TEST(root, float_input_float_out) {
    result = roots(arr, 1, -4, 3.75);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 2.5);
    ASSERT_EQ(arr[1], 1.5);
}

TEST(root, one_root) {
    result = roots(arr, 1, -6, 7);
    ASSERT_EQ(result, 1);
    ASSERT_EQ(arr[0], 3);
    ASSERT_EQ(arr[1], 3);
}

TEST(root, invalid_input) {
    result = roots(arr, 0, 0, 0);
    ASSERT_EQ(result, 0);
}


TEST(root, no_root) {
    result = roots(arr, 1, 2, 3);
    ASSERT_EQ(result, 0);
}

#endif // TST_ROOTS_H
