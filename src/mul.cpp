#include "mul.hpp"

Mul::Mul(ASTNode *&lhs, ASTNode *rhs) : ASTNode("*", lhs, rhs) {}
Mul::~Mul() = default;
