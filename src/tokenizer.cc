#include "tokenizer.h"

class BufferEntry {
    string type;
    string value;
    struct {
        string pattern;
        string flags;
    }  regex;
    ts_number range[2];
    SourceLocation loc;
};
