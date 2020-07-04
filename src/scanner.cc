#include "scanner.h"



ts_number hexValue(ts_number cp) {
	if (cp >= 'a' && cp <= 'f') {
		return 10 + cp - 'a';
	} else if (cp >= 'A' && cp <= 'F') {
		return 10 + cp - 'A';
	} else {
		return cp - '0';
	}
}

ts_number octalValue(ts_number cp) {
	 return cp - '0';
}