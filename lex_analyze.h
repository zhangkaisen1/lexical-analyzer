#include <fstream>
#include <iostream>
#include <cstring>
#define   MAX 22             /*分析表的最大容量*/


struct node {
	char lexptr[30];
	int token;
};

const char key[MAX][10] = {
	"int",
	"char",
	"float",
	"main",
	"double",
	"case",
	"for",
	"if",
	"auto",
	"else",
	"do",
	"while",
	"void",
	"static",
	"return",
	"break",
	"struct",
	"const",
	"union",
	"switch",
	"typedef",
	"enum"
};

struct oplist {
	char myoperator[3];
	int number;
	char type[10];
};
/*1-3为其他符号，从4至25为op，26-30保留，30+为关键字*/
const oplist op[MAX] =
{
	{"(",4,"分界符"},
	{")",5,"分界符"},
	{"[",6,"分界符"},
	{"]",7,"分界符"},
	{"{",8,"分界符"},
	{"}",9,"分界符"},
	{";",10,"分界符"},
	{":",11,"分界符"},
	{",",12,"分界符"},
	{".",13,"分界符"},
	{"+",14,"运算符"},
	{"-",15,"运算符"},
	{"*",16,"运算符"},
	{"/",17,"运算符"},
	{"=",18,"运算符"},
	{">",19,"运算符"},
	{">=",20,"运算符"},
	{"<",21,"运算符"},
	{"<=",22,"运算符"},
	{"==",23,"运算符"},
	{"<>",24,"其他"},
	{"!",25,"运算符"}
};

/*tool*/
void init();
void text_analyse(std::string input, std::string output);
int Iskeyword(node keyword[], char* is_res);
bool IsLetter(char c);
bool IsDigit(char c);