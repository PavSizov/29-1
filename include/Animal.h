#pragma once
#include "string"
#include "Talent.h"
#include <vector>

class Animal
{
protected:
    std::string name;
};
class Dog :  public Animal
{
public:
    std::vector <Talent*> arr;
    Dog() {};
    Dog ( std::string _name)
    {
        name = _name;

    }
    void set_talents(std::string tal);

    void show_talents();


};

