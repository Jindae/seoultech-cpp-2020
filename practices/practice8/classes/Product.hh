#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <string>

class Product {
    private:
        std::string name;
        int price;
        double weight;
    public:
        Product(std::string name = "", int price = 0, double weight = 0);
        std::string getName() const;
        int getPrice() const;
        double getWeight() const;
        void updatePrice(int newPrice);
        void changeName(std::string newName);
        void setWeight(double weight);
        ~Product();
};
#endif