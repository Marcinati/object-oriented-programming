#include "cargo.hpp"

#include <iostream>
#include <string>

Cargo::Cargo(std::string name, size_t amount, size_t basePrice)
    : name_(name), amount_(amount), basePrice_(basePrice) {}

Cargo& Cargo::operator+=(size_t amount) {
    amount_ += amount;
    return *this;
}
Cargo& Cargo::operator-=(size_t amount) {
    if (amount_ < amount) {
        std::cerr << "Cargo is lower than 0 \n";
        return *this;
    }
    amount_ -= amount;
    return *this;
};

bool Cargo::operator==(std::string name) {
    return name_ == name;
};

std::string Cargo::GetName() const {
    return name_;
}
size_t Cargo::GetAmount() const {
    return amount_;
}
size_t Cargo::GetBasePrice() const {
    return basePrice_;
}

bool Cargo::operator==(std::string name) {
    return name_ == name;
};