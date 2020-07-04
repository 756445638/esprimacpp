#ifndef XHTM_ENTITIES_H
#define XHTM_ENTITIES_H


#include <map>
#include <string>


using namespace std;


void xhtml_entities_init();

extern map<string, char32_t> XHTMLEntities;


#endif
