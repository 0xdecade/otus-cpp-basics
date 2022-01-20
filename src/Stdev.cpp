#include <vector>
#include <cmath>
#include <Stdev.hpp>
#include <Mean.hpp>

Stdev::Stdev() : m_mean{new Mean{}} {};

void Stdev::update(double next)
{
    m_mean->update(next);
    m_items.push_back(next);
}

double Stdev::eval() const
{
    double mean = m_mean->eval();
    double sum{0.0};
    for (size_t i = 0; i < m_items.size(); i++)
    {
        sum += std::pow(std::abs(m_items[i] - mean), 2);
    }
    double ratio = sum / m_items.size();
    return std::sqrt(ratio);
};

const char *Stdev::name() const
{
    return "std";
}

Stdev::~Stdev()
{
    delete m_mean;
}