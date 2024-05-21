/* Copyright (C) Denys Valchuk - All Rights Reserved
 * ZHZhbGNodWtAZ21haWwuY29tCg==
 */

#include <call_foo_if_exist.hpp>

#include <gtest/gtest.h>

namespace mock {
    struct A {
        int foo() { return 42; }
    };

    struct B {
        int bar() { return 43; }
    };
}

TEST(SFINAETest, testFoo) {
    mock::A a;
    mock::B b;

    EXPECT_EQ(42, processObject<int>(a));
    EXPECT_EQ(0, processObject<int>(b));
}
