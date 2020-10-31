#ifndef DELIVERYSERVICE_H_
#define DELIVERYSERVICE_H_
#include "Product.hh"

class DeliveryService {
    private:
        const double UNIT_PRICE = 100.0;
        double freeWeight;
        double extraWeight;
    public:
        DeliveryService(double freeWeight, double extraWeight);
        double deliveryPrice(double weight, double distance);
        double deliveryPrice(const Product& p, double distance);
};
#endif