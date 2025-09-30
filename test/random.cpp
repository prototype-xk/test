#include "random.h"
int getRandomNumber(int min, int max)                           // Prise Random d'un nombre
{
    std::random_device m_rd;
    std::mt19937 m_gen(m_rd());
    std::uniform_int_distribution<int> dis(min, max);
    return dis(m_gen);
}