#include "div.hpp"

Div::Div(ASTNode *&lhs, ASTNode *rhs) : ASTNode("/", lhs, rhs) {}
Div::~Div() = default;