#include "mu_test.h"
#include "string_t.h"

UNIT(Def_CTOR)
	String_t s;
	ASSERT_THAT(s.length() == 0);
END_UNIT 

UNIT(CHAR_CTOR)
	char str[] = "hello";
	String_t s(str);
	ASSERT_THAT(s.length() == 5);
END_UNIT 

UNIT(STR_CTOR)
	char str[] = "hello";
	String_t s(str);
	String_t s2(s);
	ASSERT_THAT(s2.length() == 5);
END_UNIT 

UNIT(EQ_CRT_CTOR)
	char str[] = "hello";
	String_t s(str);
	String_t s2 = s;
	ASSERT_THAT(s2.length() == 5);
END_UNIT 

UNIT(EQ_SET_CTOR)
	char str[] = "hello";
	String_t s(str);
	String_t s2;
	s2 = s;
	ASSERT_THAT(s2.length() == 5);
END_UNIT 

UNIT(SET_STR)
	String_t s;
	s.setString("hello");
	ASSERT_THAT(s.length() == 5);
END_UNIT 

UNIT(GET_STR)
	String_t s;
	String_t s2;
	s.setString("hello");
	s2.setString(s.getString());
	ASSERT_THAT(s2.length() == 5);
END_UNIT 

UNIT(COMPARE)
	String_t s;
	String_t s2;
	s.setString("hello");
	s2.setString("hello");
	ASSERT_THAT(s.compare(s2) == 0);
END_UNIT 

UNIT(COMPARE_LESS)
	String_t s;
	String_t s2;
	s.setString("a");
	s2.setString("b");
	ASSERT_THAT(s.compare(s2) == 1);
END_UNIT 

UNIT(COMPARE_MORE)
	String_t s;
	String_t s2;
	s.setString("b");
	s2.setString("a");
	ASSERT_THAT(s.compare(s2) == 2);
END_UNIT 

TEST_SUITE(String_t test)
	TEST(Def_CTOR)
	TEST(CHAR_CTOR)
	TEST(STR_CTOR)
	TEST(EQ_CRT_CTOR)
	TEST(EQ_SET_CTOR)
	TEST(SET_STR)
	TEST(GET_STR)
	TEST(COMPARE)
	TEST(COMPARE_LESS)
	TEST(COMPARE_MORE)
END_SUITE


































