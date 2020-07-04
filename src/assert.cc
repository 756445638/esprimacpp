#include "assert.h"

void assert(bool condition, std::string message) {
    /* istanbul ignore if */
    if (!condition) {
        throw "ASSERT: " + message;
    }
}