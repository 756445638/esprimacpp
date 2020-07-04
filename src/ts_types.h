#ifndef TS_TYPES_H
#define TS_TYPES_H

typedef int ts_number;
using namespace std;


/*
	ts has this type definition
	var a string | number
*/
enum class tsIntersectionTypeKind {
	Number , String , Null , Reg
};
struct  tsIntersectionType
{
	tsIntersectionTypeKind  kind;
	union valueType
	{
		std::string s;
		ts_number  n;
		
	}value;

};

#endif

