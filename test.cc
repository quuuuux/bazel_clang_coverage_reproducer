#include <gtest/gtest.h>

#if 1
#include <doesntwork.h>
#else
#include "include/doesntwork.h"
#endif
#include "works.h"

TEST(Test, test) {
    ASSERT_EQ(foo(), 0);
    ASSERT_EQ(bar(), 1);
    ASSERT_EQ(baz(), 2);
}
