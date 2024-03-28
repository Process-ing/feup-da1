#ifndef DA_WATERSUPPLYMANAGEMENT_RESERVOIR_H
#define DA_WATERSUPPLYMANAGEMENT_RESERVOIR_H

#include "ServicePoint.h"

class Reservoir : public ServicePoint {
public:
    Reservoir(const std::string &name, const std::string &municipality, int id, const std::string &code, double maxDelivery);

    std::string getName() const;
    std::string getMunicipality() const;
    double getMaxDelivery() const;
    double getDelivery() const;

    std::string getDescription() const override;

private:
    std::string name;
    std::string municipality;
    double maxDelivery;
};

#endif //DA_WATERSUPPLYMANAGEMENT_RESERVOIR_H
