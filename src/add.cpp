#include "add.hpp"

Add::Add(ASTNode *&lhs, ASTNode *rhs) : ASTNode("+", lhs, rhs) {}
Add::~Add() = default;