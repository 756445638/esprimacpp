#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include <map>

using namespace std;

enum  class Token {
    BooleanLiteral = 1,
    _EOF,  //EOF already define as macro
    Identifier,
    Keyword,
    NullLiteral,
    NumericLiteral,
    Punctuator,
    StringLiteral,
    RegularExpression,
    Template
};

void token_init();
extern map<Token, string> TokenName;


#endif