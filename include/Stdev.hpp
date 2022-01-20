#pragma once
#include <vector>
#include <IStatistics.hpp>
#include <Mean.hpp>

class Stdev : public IStatistics
{
public:
    Stdev();
    void update(double next) override;
    double eval() const override;
    const char *name() const override;
    ~Stdev();

private:
    Mean *m_mean;
    std::vector<double> m_items;
};
