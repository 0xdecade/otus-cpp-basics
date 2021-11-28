#pragma once
#include "astnode.hpp"

class Sub : public ASTNode
{
public:
    Sub(ASTNode *&lhs, ASTNode *rhs);
    Sub(const Sub &other) = delete;
    ~Sub();
};
