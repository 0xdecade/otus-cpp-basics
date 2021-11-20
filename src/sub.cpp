#include "sub.hpp"

Sub::Sub(ASTNode *&lhs, ASTNode *rhs) : ASTNode("-", lhs, rhs) {}
Sub::~Sub(){};