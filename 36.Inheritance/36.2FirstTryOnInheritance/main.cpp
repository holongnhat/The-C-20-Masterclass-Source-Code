#include <iostream>
#include "player.h"


int main(){

    Player p1("Basketball"); // --> player.h --> game_param = Basketball --> player.cpp --> m_game = game_param -> player.m_game
    p1.set_first_name("John"); // Set được do Player được thừa hưởng từ Person !
    p1.set_last_name("Snow"); 
    std::cout << "player : " << p1 << std::endl;
   
    return 0;
}
