#include "pch.h"

TEST(Testadd,Test1) 
{
	EXPECT_EQ(add(1, 2), 3);
	
}
TEST(Testadd, Test2)
{
	EXPECT_EQ(add(1222, 2), 1224);
	
}
TEST(Testjianfa, Test3)
{
	EXPECT_EQ(jianfa (1222, 2), 1220);
	
}
TEST(Testchengfa, Test4)
{
	EXPECT_EQ(chengfa(5, 2), 10);
	
}
TEST(Testda, Test5)
{
	EXPECT_GT(add(1, 2),add(0, 1));

}