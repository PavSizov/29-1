#pragma once

class Talent
{
public:
     virtual void show_talents() = 0;

};

class Swimming :  public Talent
{
public:

    virtual void show_talents();

};
class Dancing :  public Talent
{
public:

    virtual void show_talents();

};
class Counting :  public Talent

{
public:

    virtual void show_talents();

};