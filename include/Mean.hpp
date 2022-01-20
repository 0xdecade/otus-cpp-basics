#pragma once
#include <cstddef>
#include <IStatistics.hpp>

class Mean : public IStatistics
{
public:
    Mean();
    void update(double next) override;
    double eval() const override;
    const char *name() const override;

private:
    double m_sum;
    size_t m_items;
};
