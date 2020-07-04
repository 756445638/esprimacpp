#ifndef SCANNER_H
#define SCANNER_H

#include <string>
#include "ts_types.h"
#include "token.h"
#include <vector>


using namespace std;

ts_number hexValue(ts_number cp);
ts_number octalValue(ts_number cp);


class Position {
	ts_number line;
	ts_number column;
};
class SourceLocation {
	Position start;
	Position end;
	string source;
};
 
class Comment {
	bool multiLine;
	vector<ts_number> slice;
	ts_number range[2];
	SourceLocation loc;
};

class RawToken {
	Token type;
	tsIntersectionType value;
	string pattern;
	string flags;
	tsIntersectionType regex;
	bool octal;
	string cooked;
	bool head;
	bool tail;
	ts_number lineNumber;
	ts_number lineStart;
	ts_number start;
	ts_number end;
};

class ScannerState {
	ts_number index;
	ts_number lineNumber;
	ts_number lineStart;
	vector<string>curlyStack;
};



#endif
