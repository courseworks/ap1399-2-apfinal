#include <limits.h>
#include "student.h"
#include "grade.h"
#include "apfinal.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <queue>
#include "gtest/gtest.h"
namespace
{
/*
TEST(APFinal,Test0)
{
    Grade grade({{3, 20}, {2, 16}});
    EXPECT_EQ(18.4, grade.average());
}

TEST(APFinal,Test1)
{
    Grade grade({{3, 20}, {2, 16}});
    Student student{9423013, grade};    
    EXPECT_EQ(18, student.average());
}

TEST(APFinal,Test2)
{
    auto v = getStudents("s1.txt");
    EXPECT_EQ(19.25, v[1].average());
}

TEST(APFinal,Test3)
{
    auto v = getStudents("s1.txt");
    auto ds = convert<std::deque<Student>, std::vector<Student>>(v);
    EXPECT_EQ(19.5, ds[2].average());
}

TEST(APFinal, Test4){
    Grade grade({{3, 20}, {2, 16}});
    Student student{9423013, grade};    
    Grade* pg{&grade};
    EXPECT_EQ(18.4, pg->average());
    pg = &student;
    EXPECT_EQ(18, pg->average());
}

TEST(APFinal, Test5){
    auto v = getStudents("s1.txt");
    std::priority_queue<Student, std::vector<Student>, Compare> pq (v.begin(), v.end());
    auto s = pq.top();
    EXPECT_EQ(9423102, s.getID());
}
*/
}
