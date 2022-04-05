#include<iostream>
using namespace std;
// princess quiz!


int main() {
	int Strife = 0;
	int War = 0;
	int Death = 0;//defining all of the variables that determine which horsemen you are
	int Fury = 0;
	char input;

	cout << "This is a quiz that will test which Horseman you are!" << endl;
//asking a question and giving options
	cout << "What is your ideal ending to a story?" << endl;
	cout << "A. You don't care how it ends" << endl;
	cout << "B. You want the story to keep going forever" << endl;
	cout << "C. You're just along for the ride" << endl;
	cout << "D. You don't like stories" << endl;

	cin >> input;
	if (input == 'a')
		Death++;
	else if (input == 'b')
		Strife++;//here it records which answer would be which. It keeps track of which choices you have made
	else if (input == 'c')
		War++;
	else//Fury gets all other inputs
		Fury++;

	cout << "What is your weapon of choice?" << endl;

	cout << "A. A scythe that collects souls" << endl;
	cout << "B. An unbreakable sword known as Chaoseater" << endl;
	cout << "C. A whip to punish sinners" << endl;//questions
	cout << "D. A Pair of magical Guns" << endl;
	cin >> input;

	if (input == 'a')
		Death++;
	else if (input == 'b')
		War++;
	else if (input == 'c')
		Fury++;
	else
		Strife++;


	cout << "If given the opportunity, would you take charge of a difficult situation on your own?" << endl;

	cout << "A. I would protest the thought of having to act in the situation" << endl;
	cout << "B. I would serve as the guy that tried but failed" << endl;
	cout << "C. I would literally not try at all" << endl;
	cout << "D. I would rise up and take charge" << endl;
	cin >> input;

	if (input == 'a')
		Fury++;
	else if (input == 'b')
		War++;
	else if (input == 'c')
		Death++;
	else
		Strife++;


	cout << "What is your ideal summer night?" << endl;

	cout << "A. Slay demons" << endl;
	cout << "B. Do all of your Duties so you can feel fulfilled" << endl;
	cout << "C. Sit and admire all of your accomplishments" << endl;
	cout << "D. Sit in your room just kind of chilling out" << endl;
	cin >> input;

	if (input == 'a')
		Death++;
	else if (input == 'b')
		War++;
	else if (input == 'c')
		Strife++;
	else
		Fury++;


	cout << "What is your preferred damage type?" << endl;

	cout << "A. Physical damage" << endl;
	cout << "B. Slashing damage" << endl;
	cout << "C. A comprimise of fire and physical" << endl;
	cout << "D. Pure Ranged" << endl;
	cin >> input;

	if (input == 'a')
		War++;
	else if (input == 'b')
		Death++;
	else if (input == 'c')
		Fury++;
	else
		Strife++;

	cout << "Out of these options, which one do you prefer?" << endl;

	cout << "A. Chaos" << endl;
	cout << "B. the scent of decay" << endl;
	cout << "C. Anger issues" << endl;
	cout << "D. Or a complete battle to the death" << endl;
	cin >> input;

	if (input == 'a')
		Strife++;
	else if (input == 'b')
		Death++;
	else if (input == 'c')
		Fury++;
	else
		War++;


	//check which BOSS has the highest score
	if (Strife > War && Strife > Fury && Strife > Death) {//this line of code checks to see whether or not the score for Strife is higher than the rest
		cout << "You are Strife, who prefers conflict and use of magical firearms." << endl;
		cout << "You are very determined to succeed and you will stop at nothing to do so!" << endl;//text that describes which boss you would be
	}

	else if (War > Strife && War > Fury && War > Death) {
		cout << "You are war, king of batlles and weilder of the mighty chaoseater" << endl;
		cout << "you have followed this path for a long time. your is willing to go the extra mile to complete Your job." << endl;
	}
	else if (Fury > Strife && Fury > War && Fury > Death) {
		cout << "You are fury, who does not care what others think nor do as long as they dont get in your way." << endl;
		cout << "If given the choice, you  would rather ignore commands to do your own thing." << endl;
	}
	else if (Death > Strife && Death > Fury && Death > War) {
		cout << "You are Death! To put it quite simply, you don't really care. You just happened to be there when it happened but you couldn't really care less." << endl;
		cout <<  "Death is a reaper, meaning he weilds magicand a soul collecting scythe.." << endl;
	}
	else
		cout << "I don't even know who you are." << endl;//should scores be the same, this line will serve as a cheap way to defensively code

