#include "../include/Animal.h"
#include <iostream>

     void Dog:: set_talents(std::string tal)
    {


        if (tal == "Swimming")
        {
            arr.push_back(new Swimming());
            delete new Swimming();
        }
        else if (tal == "Dancing")
        {
            arr.push_back(new Dancing());
            delete new Dancing();
        }
        else if (tal == "Counting")
        {
            arr.push_back(new Counting());
            delete new Counting();
        }
        else std::cout << "The dog "<< name <<" has no talents "<< std::endl;


    }
     void Dog::show_talents()
    {

        std::cout << "This is " << name << " it has some talents:"<< std::endl;

        for (int i = 0; i < arr.size(); ++i)
            arr[i]->show_talents();
    }



