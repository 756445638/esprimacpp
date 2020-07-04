#ifndef TS_TYPES_H
#define TS_TYPES_H

#include<string>


typedef int ts_number;
using namespace std;


/*
	ts has this type definition
	var a string | number
*/
enum class tsIntersectionTypeKind {
	Number , String , Null , RegExp
};
struct  tsIntersectionType
{
	tsIntersectionTypeKind  kind;
	union valueType
	{
		string s;
		ts_number  n;
	}value;

};

#endif

