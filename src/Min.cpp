#include <limits>
#include <Min.hpp>

Min::Min() : m_min{std::numeric_limits<double>::min()} {}

void Min::update(double next)
{
    if (next < m_min || m_min == std::numeric_limits<double>::min())
    {
        m_min = next;
    }
}

double Min::eval() const
{
    return m_min;
};

const char *Min::name() const
{
    return "min";
}