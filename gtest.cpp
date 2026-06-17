#include <gtest/gtest.h>
#include "megaphone.hpp"

TEST(Megaphone, Construtor) {
    Megaphone m("oi");
    SUCCEED();
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
