#ifndef ENEMY_SHEET_HPP
#define ENEMY_SHEET_HPP
#include "sheet.hpp"

class EnemySheet : public Sheet
{
private:
public:
    EnemySheet(std::string name, Atributes atributos, int pv, int des, int stauts);
    ~EnemySheet();
};

#endif