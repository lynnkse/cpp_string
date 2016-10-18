#ifndef __STRING_T_H__
#define __STRING_T_H__

class String_t
{
	public:
		String_t();
		String_t(const char* _str);
		String_t(const String_t& _str);	
		~String_t();
		const String_t& operator=(const String_t& _str);
		int length() const;
		void setString(const char* _str);
		const char* getString() const;
		int compare(const String_t& _str) const;
		int print() const;

	private:	
		char* m_chars;
		int m_currSize;
		
		void ReallocIfNeed();
};

#endif //__STRING_T_H__
