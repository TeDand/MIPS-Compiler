#ifndef ast_pointer_hpp
#define ast_pointer_hpp

#include <string>
#include <iostream>

#include "ast_expression.hpp"

class PointerDec
    : public Expression
{
private:
    int points;
    ExpressionPtr variable_name;
public:
    PointerDec(const int points_id, const ExpressionPtr &variable_id)
        : points(points_id), variable_name(variable_id)
    {}

    virtual void print_python(std::ostream &dst, ContextPtr& context) const override
    {
        
        dst << "pointers not implemented for python" << std::endl;

    }

    virtual void print_MIPS(std::ostream &dst, ContextPtr_MIPS& context) const override
    {

        variable_name->print_MIPS(dst, context);

    }
};

#endif
