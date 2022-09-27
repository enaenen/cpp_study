#pragma once

#include <iostream>

class MyString {
   private:
	unsigned int size;
	char *string_contents;

   public:
	MyString( void );
	MyString( char c );
	MyString( const char *str );
	MyString( const MyString &str );
	size_t getSize( void ) const;
};
