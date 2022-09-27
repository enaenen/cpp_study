#include "MyString.hpp"

MyString::MyString( void ) {
	string_contents = new char[0];
	size = 0;
}

MyString::MyString( char c ) {}

MyString::MyString( const char *str ) {}

MyString::MyString( const MyString &ref ) {
	if ( this->string_contents )
		delete string_contents;
	string_contents = new char[ref.getSize()];
	for ( int i = 0; i < ref.getSize(); i++ )
		string_contents[i] = ref.string_contents[i];
}
MyString::~MyString( void ) { delete string_contents; }
size_t MyString::getSize( void ) const { return size; }
