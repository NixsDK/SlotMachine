#pragma once
#include "Player.h"
#include "SlotMachine.h"
#include "Utils.h"

// Stores Player and SlotMachine objects
class Game{

    private:
        Player player;
        SlotMachine slotMachine;

    public:
        Game(); // Initializes the game
        void RUN();
        void playRound(); // One game round
        bool Continue(); // Determines whether to continue the game

};
