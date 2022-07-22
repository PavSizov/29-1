#include <iostream>
#include <vector>

class Talent
{
public:
    virtual void show_talents() = 0;

protected:
    std::string name;
};

class Swimming : virtual public Talent
{
public:

    virtual void show_talents()
    {
        std::cout << "It can Swim" << std::endl;
    }
};
class Dancing : virtual public Talent
{
public:

    virtual void show_talents()
    {
        std::cout << "It can Dance" << std::endl;
    }
};
class Counting : virtual public Talent

{
public:

    virtual void show_talents()
    {
        std::cout << "It can Count" << std::endl;
    }
};


class Dog : virtual public Swimming,virtual public Dancing, virtual public Counting
{
public:
    Dog() {};
    Dog ( std::string _name)
    {
        name = _name;
    }
    virtual void show_talents()
    {
        std::vector <Talent*> arr ;
        std::string tal;
        std::cout << "Enter talents Swimming, Dancing, Counting" << std::endl;
        std::cin >> tal;
        if (tal == "Swimming") arr.push_back(new Swimming());
        else if (tal == "Dancing") arr.push_back(new Dancing());
        else if (tal == "Counting") arr.push_back(new Counting());
        else std::cout << "The dog "<< name <<" has no talents "<< std::endl;

        while (tal != "exit")
        {
            std::cout << "Enter talents Swimming, Dancing, Counting or exit" << std::endl;
            std::cin >> tal;
            if (tal == "Swimming") arr.push_back(new Swimming());
            if (tal == "Dancing") arr.push_back(new Dancing());
            if (tal == "Counting") arr.push_back(new Counting());

        }
        std::cout << "This is " << name << " it has some talents:"<< std::endl;

        for (int i = 0; i < arr.size(); ++i)
            arr[i]->show_talents();
    }

};


int main()
{

    Dog d ("Steve");

    d.show_talents();

    return 0;
}

