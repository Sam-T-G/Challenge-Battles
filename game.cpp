/*
Name: Samuel gerungan
Date: 1/28/25
Purpose: Create a game based off of basic programming techniques
!!GAME CANNOT UTILIZE FUNCTIONS OR ARRAYS!!

**Main Viable Product Description**

*Game will preset three battle challenges that consist of hardcoded pets that will have a predetermined element and moveset*

-Elemental Advantages-
Fire > Grass > Water > Fire ...
Attacks against advantageous elemental property yield 25% more damage
Attacks against detrimental elemental property yield 25% less damage

*/

// System Libraries
#include <iostream>
using namespace std;

// User Libraries

// Global Constants

// Only use scientific values like pi, speed of light, etc

// Conversion between units

// Function Protypes

//create a structure for monster object

struct player {
    string name;
    //array of available items in player's inventory
    string items[];

};

struct npc{
    string name;
    // amount awarded to player when player wins against npc
    int winPay;
    monster monsInv;
};

struct monster{
    // name of individual monster
    string name;
    int level;
    char moveSet[];

};


int main(int argv, char **argc)
{
    // Random seeds are set for random number generator

    // Declare Variables

    // Initialize Variables

    // Map the inputs and outputs - Process

    // Display and output the results

    // Exit the program
    return 0;
}