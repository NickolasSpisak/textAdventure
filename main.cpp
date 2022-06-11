#include <iostream>

using namespace std;
//game functions
bool play = true;

//choices
//1st tier
void first();
void food(); // bucket + river
void water(); // bugs + hunting
//2nd tier
void bucket(); // rain
void river(); // jaguar + upstream
void bugs(); // hunting
void hunting(); // sneak + snare
//3rd tier
void jaguar(); // civ
void upstream(); // civ
void rain(); //shelter + sos
void sneak();
void snare(); //armadillo
//4th tier
void civ(); // win
void shelter(); // win
void sos(); // death
void armadillo(); // win

//End Conditions
void death();
void win();

int main () {
    if (play) {
    cout << "####################" << endl;
    cout << "#                  #" << endl;
    cout << "# Jungle Adventure #" << endl;
    cout << "#                  #" << endl;
    cout << "####################" << endl;
    first();
    } else {
        win();
        return 0;
    }
}

//STARTING CONDITIONS

void first() {
    int choice;
    cout << " Your plane has crashed in the Amazon Rain Forest!" << endl;
    cout << " You are the only survivor." << endl;
    cout << " You only have time to save one thing from the plane.." << endl;
    cout << " [1] to take some canned food" << endl;
    cout << " [2] take some bottles of water" << endl;
    cin >> choice;
    if (choice == 1) {
        food();
    } else if (choice == 2) {
        water();
    } else {
        first();
    }
}

//CHOICES

// 1st Tier Choices

void food(){
    int choice;
    cout << " You save as many cans as you can carry" << endl;
    cout << " The plane sinks into the ocean" << endl;
    cout << " You venture into the forest and build a camp for the night" << endl;
    cout << " When morning arrives you begin to feel the affects of dehydration..." << endl;
    cout << "\n [1] Stay near the camp and build a bucket to collect rain" << endl;
    cout << " [2] Leave the camp in search for a river" << endl;
    cin >> choice;
    if (choice == 1) {
        bucket();
    } else if (choice == 2) {
        river();
    } else {
        food();
    }
}
void water(){
    int choice;
    cout << "You save as many bottles of water as you can carry" << endl;
    cout << "The plane sinks into the ocean" << endl;
    cout << "You venture into the forest and build a camp for the night" << endl;
    cout << "When morning arrives you start to feel a little bit of hunger..." << endl;
    cout << " [1] Stay near the campsite and eat nearby bugs" << endl;
    cout << " [2] Attempt to go hunting for larger food" << endl;
    cin >> choice;
    if (choice == 1) {
        bugs();
    } else if (choice == 2) {
        hunting();
    } else {
        water();
    }
}

// 2nd Tier Choices

void bucket(){
    int choice;
    cout << "You decide to stay at the camp and build a bucket" << endl;
    cout << "You gather sticks, leaves, and vines to create a makeshift bucket" << endl;
    cout << "You grow more and more thirsty waiting for rain" << endl;
    cout << " [1] Keep waiting for rain" << endl;
    cout << " [2] Leave the camp with your bucket in search for water" << endl;
    cin >> choice;
    if (choice == 1) {
        rain();
    } else if (choice == 2) {
        cout << "You use the last of your energy searching for water" << endl;
        death();
    } else {
        bucket();
    }
}

void river(){
    int choice;
    cout << "You decide to abandon the campsite in search of a river" << endl;
    cout << "After a few hours of searching you discover a river" << endl;
    cout << "You duck into the nearby bushes when you notice a large Jaguar drinking out of the river" << endl;
    cout << " [1] Wait for the Jaguar to leave" << endl;
    cout << " [2] Keep moving to a different part of the river" << endl;
    cin >> choice;
    if(choice == 1) {
        jaguar();
    } else if(choice == 2) {
        upstream();
    } else {
        river();
    }
}
void bugs() {
    int choice;
    cout << "You decide to stay at the campsite and eat nearby bugs" << endl;
    cout << "They are filling, but make you feel sick in the stomach" << endl;
    cout << "You are unsure if this is due to how disgusting they taste of their lack of edibility" << endl;
    cout << " [1] Make a larger shelter, and continue eating bugs" << endl;
    cout << " [2] Leave camp and hunt for bigger food" << endl;
    cin >> choice;
    if (choice == 1) {
        cout << "These bugs turn out to be poisonious to eat!";
        death();
    } else if (choice == 2) {
        hunting();
    } else {
        bugs();
    }
}
void hunting () {
    int choice;
    cout << "You decide to leave the campsite and hunt for bigger food" << endl;
    cout << "Your only weapon is a sharp branch you found" << endl;
    cout << "You see a giant armadillo and notice it is much faster than you are..." << endl;
    cout << " [1] Sneak up on it and kill it with your weapon" << endl;
    cout << " [2] Create a snare with vines and try to catch it" << endl;
    cin >> choice;
    if (choice == 1) {
        sneak();
    } else if (choice == 2) {
        snare();
    } else {
        hunting();
    }
}
//3rd Tier Choices

void rain() {
    int choice;
    cout << "You decide to stay at the campsite until rain arrives" << endl;
    cout << "A few hours later rain arrives" << endl;
    cout << "The bucket fills with drinkable water" << endl;
    cout << "With your stomach filled and now hydrated you feel energized and hopeful" << endl;
    cout << " [1] Build a bigger shelter" << endl;
    cout << " [2] Create large S.O.S on the nearby beach" << endl;
    cin >> choice;
    if(choice == 1) {
        shelter();
    } else if(choice == 2) {
        sos();
    } else {
        rain();
    }
}
void upstream() {
    int choice;
    cout << "You continue up the river and notice a small man-made structure on the ground" << endl;
    cout << "You investigate and notice fresh footprints near it" << endl;
    cout << " [1] Wait at structure for people to return" << endl;
    cout << " [2] Continue upstream looking for people" << endl;
    cin >> choice;
    if(choice == 1) {
        cout << "You wait inside the structure for a few days" << endl;
        cout << "On the first day you were bitten by a spider you quickly crushed" << endl;
        cout << "You begin to show signs of a fever" << endl;
        cout << "You wait for another day feeling more and more sick" << endl;
        death();
    } else if(choice == 2) {
        civ();
    } else {
        upstream();
    }
}
void jaguar() {
    int choice;
    cout << "You decide to wait for the jaguar to leave" << endl;
    cout << "The Jaguar lays down next to the river" << endl;
    cout << "You grow tired as you wait and decide to sleep in the bushes" << endl;
    cout << "When you wake up the next morning you see the Jaguar is sitting in a tree next to the river" << endl;
    cout << "You move the slightest bit and the noise startles the Jaguar who investigates" << endl;
    cout << " [1] Attack before the Jaguar can attack you" << endl;
    cout << " [2] Run away" << endl;
    cin >> choice;
    if(choice == 1) {
        cout << "You run at the Jaguar with your pointed stick" << endl;
        cout << "You shove the stick into the side of the Jaguar" << endl;
        cout << "It growls in pain" << endl;
        cout << "It lashes out and scratches you" << endl;
        death();
    } else if (choice == 2) {
        cout << "You choose to run away from the Jaguar" << endl;
        cout << "The Jaguar is catching up to you fast!" << endl;
        cout << "You notice an odd shaped small structure with a latching door and leap into it" << endl;
        cout << "After a bit of waiting, the Jaguar loses interest and wanders off" << endl;
        cout << "You realize this structure had to be made by someone and continue upstream to find who made it" << endl;
        civ();
    } else {
        jaguar();
    }
}
void sneak() {
    int choice;
    cout << "You decide to sneak up on the armadillo" << endl;
    cout << "Your attack succeeds!" << endl;
    cout << "You take the animal back to camp and cook it" << endl;
    cout << "After cooking you feel energized and refreshed" << endl;
    cout << "The smell of your food attracts unwanted guests" << endl;
    cout << "You see two glowing eyes in the treeline sneaking up to your camp" << endl;
    if(choice == 1) {
        shelter();
    } else if(choice == 2) {
        sos();
    } else {
        sneak();
    }
}
void snare() {
    int choice;
    cout << "You decide to catch the animal" << endl;
    cout << "You create a trap using nearby vines" << endl;
    cout << "You wait in the nearby bushes for the animal to fall for it" << endl;
    cout << "The trap succeeds!" << endl;
    cout << "While the armadillo is trapped you see it's two children emerge from the bushes and start crying" << endl;
    cout << " [1] Kill the armadillo for food" << endl;
    cout << " [2] Let the armadillo loose" << endl;
    if(choice == 1) {
        cout << "You decide to kill the armadillo" << endl;
        cout << "When you do the children of the animal run in fear" << endl;
        cout << "Be it karma, divine justice, or pure nihilism, whatever it might be" << endl;
        cout << "Lightning happens to strike next to you" << endl;
        cout << "The fire spreds and you can't escape" << endl;
        death();
    } else if(choice == 2) {
        armadillo();
    } else {
        snare();
    }
}
//4th Tier Choices

void armadillo() {
    int choice;
    cout << "You decide to free the mother armadillo" << endl;
    cout << "The mother and the babies stop and lock eyes with you" << endl;
    cout << "You become infactuated with them and watch them leave with love in your heart" << endl;
    cout << "As you watch them leave, you can see something move in the distance" << endl;
    cout << "You squint your eyes to see what it is and notice it is a person" << endl;
    cout << "You yell and wave your arms to make them notice you" << endl;
    win();
}
void civ() {
    cout << "You continue upstream until you notice small lights in the distance" << endl;
    cout << "As you grow closer you notice these are the lights of small buildings!" << endl;
    cout << "They welcome you with open arms" << endl;
    win();
}
void sos() {
    cout << "You spend a couple days constructing a large S.0.S out of rocks in the area" << endl;
    cout << "On one fateful day the waves swell to double or even triple their normal height" << endl;
    cout << "The waves cover your sign as a plane flies past the island" << endl;
    cout << "You try to wave your hands, but the plane cannot see you" << endl;
    cout << "After that you sit and wait on the beach for more planes to come" << endl;
    cout << "None arrive and you slowly run out of food" << endl;
    death();
}
void shelter() {
    cout << "You decide to build a larger shelter" << endl;
    cout << "As you expand your structure you become creative and add traps at your camp" << endl;
    cout << "You also create larger, and more buckets" << endl;
    cout << "Now that you are comfortable with food and water you are able to become creative" << endl;
    cout << "You spend most of your days creating larger and larger structures, lights, and fires" << endl;
    cout << "One day a storm approaches and large waves crash on the beach" << endl;
    cout << "A plane flies overhead, and is able to notice your large encampment" << endl;
    win();
}
//END CONDITIONS

void death() {
    int playAgain;
    cout << "You died" << endl;
    cout << " [1] Play again?" << endl;
    cin >> playAgain;
    if (playAgain == 1) {
        first();
    } else {
        death();
    }
}
void win() {
    cout << "You are rescued!" << endl;
    cout << "You win!" << endl;
}