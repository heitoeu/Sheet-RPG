#ifndef SHEET_HPP
#define SHEET_HPP
#include <map>
#include <fstream>
#include "skill.hpp"
#include "dice.hpp"

struct Atributes
{
    int FOR, AGI, INT,
        VIG, PRE;

    void setAtributes(int f, int a, int i, int v, int p);
};

class Sheet
{
protected:
    std::string name;
    Atributes atributes;
    int pv, des, status;
    Dice dice;

public:
    std::map<std::string, Skill> skills;

    virtual int rollAtribute(std::string atribute);
    virtual int rollSkills(std::string skill);
    virtual void printSkills();
    void setStatus(int status);
};

#endif