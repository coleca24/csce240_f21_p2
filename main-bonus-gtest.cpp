// Copyright 2021 Coleca24
#include <gtest/gtest.h>
#include <iostream>
#include "./SuperString.h"

// DO NOT MODIFY THIS FILE

TEST(Commit1, dummy) {
     SuperString s;
     EXPECT_EQ(0, 0) << "just a placeholder";
}

int main(int argc, char** argv) {
     ::testing::InitGoogleTest(&argc, argv);
     return RUN_ALL_TESTS();
}

// DO NOT MODIFY END
