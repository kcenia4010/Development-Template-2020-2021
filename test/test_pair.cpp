#include "pair.h"

#include <gtest.h>


TEST(TPair, can_get_value_of_first_el_of_pair)
{
    TPair <int, int> p(2, 3);
    EXPECT_EQ(2, p.getFirst());
}

TEST(TPair, can_create_pair)
{
    TPair <int, int> p(2, 3);

    EXPECT_EQ(2, p.getFirst());
    EXPECT_EQ(3, p.getSecond());
}
TEST(TPair, can_set_first)
{
    TPair <int, int> p(2, 3);
    p.setFirst(1);

    EXPECT_EQ(1, p.getFirst());
}
TEST(TPair, can_set_second)
{
    TPair <int, int> p(2, 3);
    p.setSecond(1);

    EXPECT_EQ(1, p.getSecond());
}
TEST(TPair, can_comparet_pairs_opperator_more)
{
    TPair <int, int> p1(5, 3);
    TPair <int, int> p2(2, 0);

    EXPECT_EQ(1, p1 > p2);
}
TEST(TPair, can_compare_pairs_opperator_less)
{
    TPair <int, int> p1(1, 3);
    TPair <int, int> p2(2, 0);

    EXPECT_EQ(1, p1 < p2);
}
TEST(TPair, can_compare_pairs_opperator_equally)
{
    TPair <int, int> p1(2, 3);
    TPair <int, int> p2(2, 0);

    EXPECT_EQ(0, p1 == p2);
}
TEST(TPair, can_compare_pairs_opperator_non_equally)
{
    TPair <int, int> p1(2, 3);
    TPair <int, int> p2(2, 0);

    EXPECT_EQ(1, p1 != p2);
}


TEST(TPair, can_equate_two_pairs)
{
    TPair <int, int> p1(2, 3);
    TPair <int, int> p2(0, 3);
    p1 = p2;
    EXPECT_EQ(0, p1.getFirst());
    EXPECT_EQ(3, p1.getSecond());

}