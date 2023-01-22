#pragma once
#include <iostream>

// Scanner.
int gettok();
inline std::string IdentifierStr; // Filled in if tok_identifier
inline double NumVal;             // Filled in if tok_number

// The lexer returns tokens [0-255] if it is an unknown char
// acter, otherwise one
// of these for known things.
enum Token {
	tok_eof = -1,

	// commands
	tok_def = -2,
	tok_extern = -3,

	// primary
	tok_identifier = -4,
	tok_number = -5,
};
