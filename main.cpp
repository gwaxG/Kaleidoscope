#include <iostream>
#include "include/parser.h"

using namespace std;

inline string error_description;

void run_parser();
int run_compiler();

int main()
{
    std::cout << "Hello World!\n";
    int result = run_compiler();

    if (result == 0)
    {
        cout << "Compilation succesfully finished" << endl;
    }
    else
    {
        cout << "Compilation finished" << endl;
    }
}

int run_compiler()
{
    run_parser();
    return 0;
}

void run_parser()
{
    // Install standard binary operators.
    // 1 is lowest precedence.
    BinopPrecedence['<'] = 10;
    BinopPrecedence['+'] = 20;
    BinopPrecedence['-'] = 20;
    BinopPrecedence['*'] = 40; // highest.

    // Prime the first token.
    fprintf(stderr, "ready> ");
    getNextToken();

    // Run the main "interpreter loop" now.
    MainLoop();
}