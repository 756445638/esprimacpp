#include "token.h"
using namespace std;

map<Token, string> TokenName;

void initTokenName() {
	TokenName.insert(make_pair(Token::BooleanLiteral , "Boolean" ));
	TokenName.insert(make_pair(Token::_EOF, "<end>"));
	TokenName.insert(make_pair(Token::Identifier, "Identifier"));
	TokenName.insert(make_pair(Token::Keyword, "Keyword"));
	TokenName.insert(make_pair(Token::NullLiteral, "Null"));
	TokenName.insert(make_pair(Token::NumericLiteral, "Numeric"));
	TokenName.insert(make_pair(Token::Punctuator, "Punctuator"));
	TokenName.insert(make_pair(Token::StringLiteral, "String"));
	TokenName.insert(make_pair(Token::RegularExpression, "RegularExpression"));
	TokenName.insert(make_pair(Token::Template, "Template"));
}

void token_init() {
	initTokenName();
}

