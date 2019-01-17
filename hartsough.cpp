#include "house.h"
#include <iostream>

using namespace std;

house::house() {
    this->color = "unknown";
    this->price = -1;
    this->num_rooms = -1;
}

house::house(const string &ColorValue, int PriceValue, int Num_roomsValue) {
    this->color = ColorValue;
    this->price = PriceValue;
    this->num_rooms = Num_roomsValue;
}

void house::SetColor(const string &ColorValue) {       //set the member variable "color"
    this->color = ColorValue;
}

string house::GetColor() const {                      //return the value of the member variable "color"
    return color;
}

void house::SetPrice(int PriceValue) {               //set the member variable "price"
    this->price = PriceValue;
}

int house::GetPrice() const {                       //return the value of the member variable "price"
    return price;
}

void house::SetNum_rooms(int Num_roomsValue) {      //set the member variable "num_rooms"
    this->num_rooms = Num_roomsValue;
}

int house::GetNum_rooms() const {                   //return the value of the member variable "num_rooms"
    return num_rooms;
}

void house::PrintInfo() const {
    cout << color << " " << price << " " << num_rooms << endl;
} //show color, price and num_rooms in the output screen