// Có các đặc trưng first_name, last_name kế thừa từ lớp Person !
// Chỉ cần thêm biến m_game !
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <string_view>
#include "person.h"

class Player : public Person
{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
public:
    Player() = default;
    Player(std::string_view game_param);
    
private : 
    std::string m_game{"None"};
};

#endif // PLAYER_H
