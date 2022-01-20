#include <Mean.hpp>

Mean::Mean() : m_sum{0}, m_items{0} {}

void Mean::update(double next)
{
    m_sum += next;
    m_items++;
}

double Mean::eval() const
{
    return m_sum / m_items;
};

const char *Mean::name() const
{
    return "mean";
}