#ifndef ENTRY_H_SEARCHLINE
#define ENTRY_H_SEARCHLINE

#include "BetterString.h"

class Entry
{

private:
	BString _contents;
	int _line;
	int MAX_STRING_SIZE = 200;
public:
	Entry();
	Entry(BString contents, int line)
	Entry(const Entry& e);
	~Entry() { };

}

Entry::Entry() : _contents(MAX_STRING_SIZE)
{
	_line = -1;
}

Entry::Entry(BString contents, int line) : _contents(MAX_STRING_SIZE)
{
	_line = line;
	_contents = contents;
}

Entry::Entry(const Entry & e) : _contents(MAX_STRING_SIZE)
{
	_contents = e._contents;
	_line = e._line
}



#endif 
