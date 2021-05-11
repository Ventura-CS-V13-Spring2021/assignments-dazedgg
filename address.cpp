#include <iostream>
#include "address.hpp"

using namespace std;


Address::Address() {

street = " ";
state = " ";
zip = 0;

}

Address::Address (string str, string st, int z) {

  street = str;
  state = st;
  zip = z;
}


string Address::getStreet()const {

  return street;
}

string Address::getState()const {

  return state;

}

int Address::getZip()const {

return zip;

}

void Address::printAddress()const {

  cout << "Street " << street << ", State " << state << ", Zip Code " << zip;
}

void Address::setStreet(std::string addr) {
street = addr;

}

void Address::setState(string st) {

state = st;

}

void Address::setZip(int z) {

  zip = z;

}

void Address::setAddress(std::string addr, std::string st, int z) {
street = addr;
state = st;
zip = z;
}