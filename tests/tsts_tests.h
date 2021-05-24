#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "abc.h"
}

TEST(abc, test1)
{
    solution help = abc(2,3,4);
    EXPECT_EQ(-23,help.d);
}

TEST(abc, test2)
{
    solution help = abc(1,12,36);
    EXPECT_EQ(0,help.d);
    EXPECT_EQ(-6,help.x);
}

TEST(abc, test3)
{
    solution help = abc(2,5,0);
    EXPECT_EQ(25,help.d);
    EXPECT_EQ(0,help.x);
    EXPECT_EQ(-2.5,help.x1);
}

TEST(abc, test4)
{
    solution help = abc(5,3,7);
    EXPECT_EQ(-131,help.d);
}

TEST(abc, test5)
{
    solution help = abc(1,-2,-3);
    EXPECT_EQ(16,help.d);
    EXPECT_TRUE((help.x >= 3)&&(help.x <=4));
    EXPECT_TRUE((help.x1 >= -1)&&(help.x1 <=0));
}

TEST(abc, test6)
{
    solution help = abc(-1,-2,15);
    EXPECT_EQ(64,help.d);
    EXPECT_TRUE((help.x >= -5)&&(help.x <=-4));
    EXPECT_TRUE((help.x1 >= 3)&&(help.x1 <=4));
}


TEST(abc, test7)
{
    solution help = abc(4,0,0);
    EXPECT_EQ(0,help.d);
    EXPECT_EQ(0,help.x);
}

TEST(abc, test8)
{
    solution help = abc(5,0,-20);
    EXPECT_EQ(400,help.d);
    EXPECT_EQ(2,help.x);
    EXPECT_EQ(-2,help.x1);
}


TEST(abc, test9)
{
    solution help = abc(0,0,2);
    EXPECT_EQ(-1,help.r);
}
