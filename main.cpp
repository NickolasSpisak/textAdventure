#include <iostream>

using namespace std;
//game functions
bool play = true;
// void pause();

//choices
//1st tier
void first();
void food();
void water();
//2nd tier
void bucket();
void river();
void bugs();
void hunting();
//3rd tier
void jaguar();
void upstream();
void rain();
//4th tier
void shelter();
void sos();

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