# CMakeList.txt: esprimacpp 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

# 将源代码添加到此项目的可执行文件。
add_executable (esprimacpp 
	"esprimacpp.cpp" 
	"esprimacpp.h" 
	"assert.h"
	"assert.cc" 
	"character.h"
	"character.cc" 
	"comment_handler.h" 
	"comment_handler.cc"
	"token.h"
	"token.cc"
	"xhtml_entities.h" 
	"xhtml_entities.cc"
    "tokenizer.h" 
	"tokenizer.cc" 
	"scanner.h"
	"scanner.cc")

# TODO: 如有需要，请添加测试并安装目标。 
