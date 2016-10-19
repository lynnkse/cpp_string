#include "mu_test.h"
#include "string_t.h"
#include <iostream>

using namespace std;

UNIT(NUM_OF_STRINGS)
	String_t s1("hello !!!");
	String_t s2(" world!!!");
	String_t s3("hello world");
	ASSERT_THAT(String_t::getNumOfStrings() == 3);
END_UNIT

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

UNIT(RESIZE)
	String_t s("a");
	s.setString("hello");
	ASSERT_THAT(s.length() == 5);
END_UNIT 

UNIT(TO_UPPER)
	String_t s("hello");
	s.toUpper();
	ASSERT_THAT(s.compare("HELLO") == 0);
END_UNIT 

UNIT(TO_LOWER)
	String_t s("HELLO");
	s.toLower();
	ASSERT_THAT(s.compare("hello") == 0);
END_UNIT

UNIT(PLUS)
	String_t s1("hello ");
	String_t s2("world");
	s1 += s2;
	ASSERT_THAT(s1.compare("hello world") == 0);
END_UNIT

UNIT(PREP_CTR)
	String_t s1("world");
	String_t s2("hello ");
	s1.prepend(s2);
	ASSERT_THAT(s1.compare("hello world") == 0);
END_UNIT

UNIT(PREP_CHAR)
	String_t s1("world");
	char s2[] = "hello ";
	s1.prepend(s2);
	ASSERT_THAT(s1.compare("hello world") == 0);
END_UNIT

UNIT(GREATER)
	String_t s1("b");
	String_t s2("a");
	ASSERT_THAT(s1 > s2);
END_UNIT

UNIT(LESS)
	String_t s1("a");
	String_t s2("b");
	ASSERT_THAT(s1 < s2);
END_UNIT

UNIT(MORE_OR_EQ)
	String_t s1("a");
	String_t s2("a");
	ASSERT_THAT(s1 >= s2);
	s1.setString("b");
	ASSERT_THAT(s1 >= s2);
END_UNIT

UNIT(LESS_OR_EQ)
	String_t s1("a");
	String_t s2("a");
	ASSERT_THAT(s1 <= s2);
	s2.setString("b");
	ASSERT_THAT(s1 <= s2);
END_UNIT

UNIT(EQ)
	String_t s1("a");
	String_t s2("a");
	ASSERT_THAT(s1 == s2);
END_UNIT

UNIT(NOT_EQ)
	String_t s1("b");
	String_t s2("a");
	ASSERT_THAT(s1 != s2);
END_UNIT

UNIT(CONTAINS)
	String_t s1("hi this is some string");
	String_t s2("hi");
	String_t s3(" string");
	String_t s4("hi  ");
	ASSERT_THAT(s1.contains(s2));
	ASSERT_THAT(s1.contains(s3));
	ASSERT_THAT(!s1.contains(s4));
END_UNIT

UNIT(CONTAINS_CHARS)
	String_t s1("hi this is some string");
	char s2[] = "hi";
	char s3[] = " string";
	char s4[] = "hi  ";
	ASSERT_THAT(s1.contains(s2));
	ASSERT_THAT(s1.contains(s3));
	ASSERT_THAT(!s1.contains(s4));
END_UNIT

UNIT(BRACKETS)
	String_t s1("hello world");
	ASSERT_THAT(s1[0] == 'h');
	ASSERT_THAT(s1[4] == 'o');
	ASSERT_THAT(s1[20] == 0);
END_UNIT

UNIT(OUT)
	String_t s1("hello world!!!");
	cout << s1;
END_UNIT

UNIT(IN)
	String_t s1();
	cin >> s1;
	cout << s1;
END_UNIT


TEST_SUITE(String_t test)
	TEST(NUM_OF_STRINGS)
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
	TEST(RESIZE)
	TEST(TO_UPPER)
	TEST(TO_LOWER)
	TEST(PLUS)
	TEST(PREP_CTR)
	TEST(PREP_CHAR)
	TEST(GREATER)
	TEST(LESS)
	TEST(MORE_OR_EQ)
	TEST(LESS_OR_EQ)
	TEST(EQ)
	TEST(NOT_EQ)
	TEST(CONTAINS)
	TEST(CONTAINS_CHARS)
	TEST(BRACKETS)
	TEST(OUT)
	TEST(IN)
END_SUITE


































