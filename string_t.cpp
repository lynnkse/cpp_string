#include "string_t.h"
#include <string.h>
#include <iostream>

#define STR_INITIAL_SIZE 128
#define STR_EQUAL 0
#define STR_LESS_THEN_PARAM 1
#define STR_GREATER_THEN_PARAM 2

using namespace std;

		String_t::String_t()
		{
			m_chars = new char[STR_INITIAL_SIZE];
			m_chars[0] = 0;
			m_currSize = STR_INITIAL_SIZE;
		}
		
		String_t::String_t(const char* _str)
		{
			int strLen = strlen(_str);
			m_chars = new char[strLen + 1];
			strcpy(m_chars, _str);
			m_currSize = strLen;
		}
		
		String_t::String_t(const String_t& _str)
		{
			int strLen = _str.length();
			m_chars = new char[strLen + 1];
			strcpy(m_chars, _str.getString());
			m_currSize = strLen;
		}
		
		String_t::~String_t()
		{
			delete[] m_chars;
		}
		
		const String_t& String_t::operator=(const String_t& _str)
		{
			if(&_str != this)
			{
				ReallocIfNeed(_str.length() + 1);
				
				strcpy(m_chars, _str.getString());
			}
			
			return *this;
		}
		
		int String_t::length() const
		{
			return strlen(m_chars);
		}
		
		void String_t::setString(const char* _str)
		{
			ReallocIfNeed(strlen(_str) + 1);
			strcpy(m_chars, _str); 
		}
		
		const char* String_t::getString() const
		{
			return m_chars;
		}
		
		int String_t::compare(const String_t& _str) const
		{
			int res = strcmp(this->m_chars, _str.getString());
			
			if(res == 0)
			{
				return 0;
			}
			else if(res > 0)
			{
				return STR_GREATER_THEN_PARAM;
			}
			else // if(res < 0)
			{
				return STR_LESS_THEN_PARAM;
			}
		}
		
		int String_t::print() const
		{
			cout << m_chars;
		}
		
		void String_t::ReallocIfNeed(int _newSize)
		{
			if(_newSize > m_currSize)
			{
				delete[] m_chars;
				m_chars = new char[_newSize + 1];
				m_currSize = _newSize + 1;
			}
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
