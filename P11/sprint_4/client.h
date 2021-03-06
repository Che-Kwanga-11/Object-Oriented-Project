#ifndef __CLIENT_H
#define __CLIENT_H

#include "animal.h"
#include <string>
#include <vector>

class Client {
  public:
    Client(std::string name, std::string phone, std::string email);
    friend std::ostream& operator<<(std::ostream& ost, const Client& client);
    std::string name();
    std::string phone();
    std::string email();
    void adopt(Animal& animal);
    int num_adopted();
    const Animal& animal(int index);
 
  private:
    std::string _name;
    std::string _phone;
    std::string _email;
    std::vector<Animal*> _adopted;
};

#endif

