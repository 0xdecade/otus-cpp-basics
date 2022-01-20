#include <limits>
#include <Max.hpp>

Max::Max() : m_max{std::numeric_limits<double>::max()} {}

void Max::update(double next)
{
    if (next > m_max || m_max == std::numeric_limits<double>::max())
    {
        m_max = next;
    }
}

double Max::eval() const
{
    return m_max;
};

const char *Max::name() const
{
    return "max";
}