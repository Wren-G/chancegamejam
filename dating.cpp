#include <iostream>
#include <cmath>
#include <string>
#include <random>
using namespace std;

int onetotwenty = 1;
int choice = 0;
bool dumped = false;

int rolld20()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1, 20);
	return dis(gen);
}

void end()
{
	cout << "I'm gonna be honest..." << endl;
	cout << "You fumbled hard, man." << endl;
	cout << "~THE END~" << endl;
	cout << "Restart to try again!" << endl;
	dumped = true;
	return;
}

void redo()
{
	cout << "[1] Unknown" << endl;
	cout << "[2] Unknown" << endl;
	cout << "[3] Unknown" << endl;
	cout << "Please type the number corresponding to your choice:" << endl;	
	cin >> choice;
	if (choice == 1 || choice == 2 || choice == 3)
	{
		return;
	}
	else
	{
		cout << "Erm... sorry, that's not an option. Try again!" << endl;
		redo();
	}
}

int main()
{
	//This variable space is just a holder for any key that is pressed by the player.
	string space;
	string ttrpg;
	cout << "CONNECTION STARTED, CONNECTING TO HOST SERVER..." << endl;
	cout << "HOST SERVER CONNECTED. WELCOME TO BLIND DATE." << endl;
	cout << "YOU MAY NOW BEGIN COMMUNICATION." << endl;
	cin >> space;
	cout << "Hello? ... " << endl;
	cout << "Is anyone there? ... " << endl;
	cin >> space;
	cout << "Ah! There is someone there!" << endl;
	cout << "Hi there, stranger. What's your name?" << endl;
	cout << "Enter your name: ";
	string name;
	cin >> name;
	cout << "Nice to meet you, ";
	cout << name << endl;
  	cout << "Welcome to the session! We run a few different sessions here but uhhh... give me a minute..." << endl; 
	cin >> space;
	cout << "Okay, I think I got it working!" << endl;
	cout << "Have you ever played any role-playing games before?" << endl;
	cin >> ttrpg;
	if (ttrpg == "yes" || ttrpg == "yeah" || ttrpg == "Yes" || ttrpg == "Y" || ttrpg == "Yea" || ttrpg == "Yeah") 
	{
		cout << "Awesome! Then this won't be a problem for you!" << endl;
	}
	else if (ttrpg == "no" || ttrpg == "never" || ttrpg == "nah" || ttrpg == "n" || ttrpg == "No" || ttrpg == "N")
	{
		cout << "Okay, let me give you a few pointers then to start you off!" << endl;
		cout << "So! Role-Playing games often involve… playing a role! They will involve a greater story that you can unravel often and let yourself be immersed in a world." << endl;
	cout << "And I… will act as your Game Master! (Someone who creates a story and game for you to explore.)" << endl;
	cout << "You will get to interact with several characters!" << endl;
	}
	else
	{
		cout << "Honestly, I have no idea how to take that... but uhh, I'll explain anyway." << endl;
		cout << "So! Role-Playing games often involve… playing a role! They will involve a greater story that you can unravel often and let yourself be immersed in a world." << endl;
		cout << "And I… will act as your Game Master! (Someone who creates a story and game for you to explore.)" << endl;
		cout << "You will get to interact with several characters!" << endl;
	}
	cout << "Okay, so this role playing game will be based on chance." << endl;
	cout << "I am going to give you the power to actually choose conversation options!" << endl;
	cout << "These text games can be finicky so you won't be able to say just anything." << endl;
	cout << "Here let's give you an example!" << endl;
	redo();
	if (choice == 1) 
	{
		cout << "Choice 1, huh? Well you couldn't tell what you pressed, but that's natural!" << endl;
	}
	else if (choice == 2)
	{
		cout << "Choice 2, huh? Well, you couldn't tell what you pressed, but that's natural!" << endl;
	}
	else if (choice == 3)
	{
		cout << "Choice 3, huh? Well, you couldn't tell what you pressed, but that's natural!" << endl;
	}
	cout << "Not everyone knows what to say, or even thinks about it before speaking!" << endl;
	cout << "In this game you will be going on blind dates- though in this case we take 'blind' to the next level!" << endl;
	cout << "Heh, yup, you guessed it, you won't know what you're saying to your dates until you've already said it!" << endl;
	cout << "[1] You've gotta be kidding me..." << endl;
	cout << "[2] Sounds fun!" << endl;
	cin >> choice;
	if (choice == 1)
	{
		cout << "I am in fact not kidding you!" << endl;
		cout << "As if dating wasn't stressful enough am I right?" << endl;
	}
	else if (choice == 2)
	{
		cout << "Glad to have you on board!" << endl;
	}
	else
	{
		cout << "That was not one of the options but okay!" << endl;
	}
	cout << "Let's get you in your first date!" << endl;
	cout << "Oh, I suppose I should ask, do you prefer men or women?" << endl;
	cout << "[1] Women" << endl;
	cout << "[2] Men" << endl;
	int sex;
	cin >> sex;
	if (sex == 1)
	{
		cout << "Women! Same here, though I prefer women who would just straight up kill me." << endl;
	}
	else if (sex == 2)
	{
		cout << "Men! Good pick, personally I prefer women who would just straight up kill me but to each their own." << endl;
	}
	else
	{
		cout << "A secret third option?" << endl;
		cout << "Well uhhh, not quite one of the two options but it's al good, there are more than two genders anyway." << endl;
	}
	cout << "Let's meet your date!" << endl;
	if (sex == 1)
	{
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⣾⡦⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⣀⠄⠄⠄⠄⠄⠄⠄⠄⣴⣿⣿⠃⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢄⣳⣬⠇⠄⠄⠄⠄⠄⣠⣶⣾⣿⠋⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣠⣶⣾⣿⣿⡏⠄⠄⠄⠄⣤⣾⣿⣿⡿⠃⣠⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⠐⠄⢀⣾⣿⣿⣛⣛⡛⠄⠄⠄⠴⠿⢿⣿⣿⢟⣡⣾⠇⠄⠄⠄⠄⠄⠄⢀⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠞⠃⠐⠛⠿⠿⠿⠿⠿⠁⢀⣴⣿⣿⣦⣪⣽⣷⣿⣿⡟⠄⠄⠄⠄⠄⠄⢠⡿⠄⡀⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣶⠄⠄⣤⣤⣀⡀⠄⠄⠄⠄⠄⠉⠙⠛⣿⣿⣿⣿⣿⣿⢁⣼⠄⠄⠄⠄⠠⠛⠃⣶⠂⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢹⣠⠄⣿⣿⣯⠃⠄⠈⠓⠲⠆⠄⢠⣀⡸⣿⣿⣿⣿⣣⣿⡇⠄⠄⠄⣰⣿⣿⣿⣿⡆⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⣿⣆⣻⣿⣿⠄⠄⠄⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⠁⠄⢀⠄⡀⠄⠄⠉⠹⠇⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⡀⡼⣿⣿⣿⣿⡆⡄⣀⣤⡀⢀⣸⣿⣿⣿⣿⣿⣿⣿⣿⡟⠄⣴⠃⠄⠉⠉⣴⠄⠎⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠐⣿⣮⣿⣿⣿⣿⣔⡿⠿⡷⣶⣿⣿⣿⣿⣿⣿⣿⣿⡿⣡⣾⣿⠄⠄⠄⢠⣧⡞⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⡠⣶⣀⣾⡿⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠐⢿⠽⣿⣵⢻⡞⡻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣽⣽⣿⠃⠄⠄⠄⠄⠄⠄⠄⠄⢀" << endl;
	cout << "⣶⣶⣶⣶⠶⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠺⡿⣿⣾⣿⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣏⢽⣿⣿⣿⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⣻⣭⣿⣶⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠉⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⠄⠄⠄⠄⠄⠄⢀⠄⠄⠄" << endl;
	cout << "⣿⣿⣿⣿⡇⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠙⢽⣟⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠄⠄⠄⠄⠄⢀⣿⣿⣿⣶" << endl;
	cout << "⣿⢟⣻⣵⣄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⢿⣿⣿⣶⡍⠋⠩⠭⣭⣽⣿⣿⣿⠏⠄⠄⠄⠄⠄⢀⣾⣿⣿⣿⣿" << endl;
	cout << "⣷⣿⣿⣿⣿⣷⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢸⣿⣿⣿⣿⡀⠄⠄⠄⠉⠩⣿⣁⣀⠄⠄⠄⢀⣴⣿⣿⣿⣿⣿⣿" << endl;
	cout << "⣿⣿⢿⣛⣉⣀⢄⣤⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢸⣿⣿⣿⣿⡇⠄⠄⠄⠄⠄⢹⣿⣿⣿⣿⣦⠄⠈⠉⠉⠙⢛⣛⣻" << endl;
	cout << "⡿⣣⣿⣿⡟⣵⣿⣿⣿⢆⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣠⣿⣿⣿⣿⣿⡇⠄⠄⠄⠄⠄⠸⣿⣿⣿⣿⣿⣧⠄⠄⠄⠄⠄⠹⣿" << endl;
	cout << "⣾⣿⣿⣿⡇⣿⣿⡿⣡⣤⣶⣶⣦⡄⠄⠄⠄⠄⠄⠄⠄⠄⣠⣶⣿⣿⣿⣿⣿⡿⠄⠄⠄⠄⠄⠄⢸⣿⣿⣿⣿⣿⣿⡀⠄⠄⠄⠄⠄⠹" << endl;
	cout << "⣿⣿⣿⣿⢿⡿⡿⣳⣿⣿⣿⣿⣿⣿⡄⠄⠄⠄⠄⠄⢠⣟⡻⢿⣿⣿⣿⣿⠟⠄⠄⠄⠄⠄⠄⢀⣾⣿⣿⣿⣿⣿⣿⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⣿⣿⣿⣿⣘⣥⣿⣿⣿⣿⣿⣿⣿⣿⡇⠄⠄⠄⠄⠄⢸⣿⣿⣿⣾⣽⠛⠁⠄⠄⠄⠄⠄⠄⢀⣾⣿⣿⣿⣿⣿⣿⠇⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⠄⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⠄⠄⠄⠄⠄⠄⢠⣴⣿⣿⣿⣿⣿⣿⡿⠃⠄⠄⠄⠄⠄⠄⠄⢠" << endl;
	}
	else if (sex == 2)
	{
	cout << "⣿⣿⣿⣿⣿⣿⣿⣿⠿⠄⠄⠈⡀⣔⣶⢟⣫⣶⣾⣿⣿⣿⣿⣿⣿⣿⣛⣳⠶⣶⣤⣇⠤⠤⠄⣐⡂⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠻⣿⣿⣿⣿⣿⠟⠁⠄⠄⠄⠄⠠⠸⠱⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠶⣬⡻⣿⣿⣿⣶⣦⣤⣀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠈⠙⠿⠋⠄⠄⠄⠨⣷⣠⣄⣀⣀⣧⠘⡟⢿⣿⡉⠛⠿⣿⣿⣿⣿⣷⣮⡻⣿⣶⣝⠦⡙⠻⣿⣿⣿⣿⣷⣦⡀⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⣶⡠⠊⠉⠉⠁⢠⣤⣷⡇⡈⢿⢽⡦⡀⠄⠉⠙⠻⢝⡿⣿⣎⠻⣿⣷⣌⠄⠄⠉⠻⣿⡻⢿⣷⡀⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⡴⠋⠄⠄⠄⠄⠄⣿⢻⡿⠐⢀⠘⣎⢻⣮⡂⢄⢄⣀⠄⠄⠄⠙⠳⠜⣿⣿⣧⡀⠄⠄⠄⠛⣦⢻⣇⢢⡀⠄⠄⠄⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠰⠁⠄⠄⠄⠄⠄⠄⠏⣾⠃⢠⣿⣧⢻⡀⠙⠿⣷⣥⣙⠻⣷⣶⣤⣴⡀⠈⢿⣷⠹⡄⠄⠄⠄⠈⠋⡿⢑⠹⣷⣄⡀⠄⠄" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢰⠇⣠⣿⣿⣿⡄⣇⢳⣤⣈⠙⠻⢿⣶⣝⣻⢿⣷⡆⡈⠁⠄⢳⢐⡠⠄⠄⢀⠇⣾⣷⣿⣿⣿⣷⣤" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⣸⣿⣿⣿⣿⣷⢸⠘⠋⣉⣉⣱⣶⣤⣤⣶⣶⣾⣟⠄⠄⣸⡞⣼⣿⣆⠄⠄⠈⠻⣿⣿⣿⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠠⣿⣿⡿⠟⠉⡀⡀⠄⠄⣈⠙⢿⣿⣿⣿⣿⣿⣿⣿⠁⣠⡶⠚⠉⠄⠙⠄⠄⢶⣄⡉⠛⢿⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠂⢟⣯⣾⣿⣻⣽⠧⠈⠛⠛⢻⣿⣿⣿⣿⣿⣿⣿⣿⣾⠉⣠⡰⣄⣿⣶⠄⠄⠈⢻⣿⣷⣦⣬⣝⡛" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢹⣿⡿⠟⠉⢀⣀⠠⣶⣶⣶⣤⣯⣿⣿⣿⣿⣿⣿⣼⣇⣣⢷⠇⣛⣋⣴⡆⠄⠄⠻⣿⣿⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠂⠄⠄⠛⢁⢠⡖⣷⢹⣟⢻⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣡⣷⣶⡝⣿⣿⣿⣿⣷⢀⡀⠄⠄⢬⣉⣙⣛" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⡐⠄⠄⠄⠅⠄⠈⠳⢭⠿⢛⣋⣬⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⣿⣿⣿⣿⣿⣧⠹⣿⣿⣷⣶⠖⣴" << endl;
	cout << "⠄⠄⣠⠊⠄⠄⠄⠄⠄⠠⢠⠂⠄⠄⠄⠄⢱⣶⣶⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣆⠉⠙⠛⠋⠾⠿" << endl;
	cout << "⠄⡰⠁⠄⠄⠄⠄⠄⠄⠄⠘⠄⠐⠄⠈⠠⡈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠄⠄⠄⠄⠄⣼" << endl;
	cout << "⡸⠃⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⢿⣿⣿⣿⣿⣿⠄⠄⠄⢀⣼⣿" << endl;
	cout << "⠁⠄⠄⠄⠄⠄⢀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⢛⣛⣻⣿⣿⣽⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⣽⣿⣌⣿⣿⣿⣿⣿⠄⠄⢀⣾⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠐⠈⠈⠢⢀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠄⢠⣿⢿⣫⣶" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⡀⠈⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⣰⣿⢣⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠠⠁⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢸⣿⡏⣸⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠁⠂⠄⠄⠄⠄⠄⠄⠄⡀⠄⠄⠄⠄⠄⠄⠄⠈⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⣿⣿⢀⣿⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠐⠂⠄⢀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠐⠄⠉⡉⣉⡉⠉⠻⠟⠛⠛⣋⣩⣴⣾⣿⠇⢰⣿⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⠄⠤⣀⣴⣿⣷⣮⣝⡻⠋⠄⢸⣿⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣠⡾⠃⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⡀⢀⣴⣾⣿⣿⣿⣿⣿⡟⠁⡀⣼⣿⣿⣿⣿⣿" << endl;
	cout << "⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠤⠚⠁⠄⠄⠄⠄⠄⠄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⣠⣴⣿⣿⣿⣿⣿⣿⡿⠋⡠⠪⠾⠿⠿⠿⠿⢿⣿" << endl;
	}
	else
	{
	cout << "⠄ ⠄⠄⣤⣀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⣿⣿⣷⣶⣄⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⣀⣀⠄" << endl;
	cout << "⠄ ⠄⠄⢻⣿⣿⣿⣿⣿⣿⣤⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⣤⣴⣾⣿⣿⡏⠄" << endl;
	cout << "⠄ ⠄⠄⠄⢿⣿⣿⣿⣿⣿⣿⣿⣷⣆⡀⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⢀⣠⣴⣶⣿⣿⣿⣿⣿⣿⣿⠇⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣀⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣤⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠄⠄⠙⢿⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠁⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠄⠄⠄⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣽⠉⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠄⠄⣠⣿⣿⣿⣿⢿⣭⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢟⣭⠉⢻⣿⣿⣿⣿⣿⣇⠄⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠄⢀⣿⣿⣿⣿⣿⡈⠉⠄⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⠉⠄⣸⣿⣿⣿⣿⣿⣿⡆⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠄⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠄⠄⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⢀⡟⠉ ⠈⠙⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠉⠁ ⠉⢿⣿⣿⡇⠄⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⢸⣇   ⢀⣼⣿⣿⣿⣿⣿⡿⢻⣭⣭⣭⡝⢿⣿⣿⣿⣿⣿⡇    ⣠⣿⣿⣷⡀⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⢻⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣷⣤⣤⣾⣿⣿⣿⣿⡇⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠄⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣯⣙⣋⣱⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠄⠄⠄⠄" << endl;
	cout << "⠄ ⠄⠄⠄⠄⠄⠄⠄⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠄⠄⠄⠄" << endl;
	cout << "......⠄⠄⠄⠄⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡆⠄⠄⠄" << endl;
	}
	cout << "'H-Hi. My name is Sam.'" << endl;
	redo();
	if (choice == 1) 
	{
		cout << "You: 'Nice to meet you, Sam. I'm " << name << ".'" << endl;
		cout << "Sam: 'Nice to meet you, " << name << ".'" << endl;
		cout << "Sam: 'You seem pretty cool.'" << endl;
	}
	else if (choice == 2)	
	{
		cout << "You: 'Hey there, you got a nice face ;)'" << endl;
		cout << "Sam: 'Uhhh... thank you... I think?'" << endl;
		cout << "Really smooth there..." << endl;
		cout << "You: 'Shut up.'" << endl;
		cout << "Sam: 'Did you say something?'" << endl;
		cout << "You: 'Uhhh- no.'" << endl;
		cout << "Sam: 'Oh... alright then.'" << endl;
	}
	else if (choice == 3)
	{
		cout << "You: 'Ew, I'm really not interested.'" << endl;
		cout << "Sam: 'Oh... you didn't have to lead me on like that if you weren't interested in me.'" << endl;
		cout << "Sam gets up and walks out the door looking downtrodden." << endl;
		end();
		if (dumped == true)
		{
			abort();
		}			
	}
	cout << "Sam: 'So... what do you like to do for fun?'" << endl;
	redo();
		if (choice == 1) 
		{
			cout << "You: 'Stalk people for fun.'" << endl;
			cout << "Sam: 'Haha! You're kidding... right?'" << endl;
			cout << "You: '...'" << endl;
			cout << "Sam: '...'" << endl;
			cout << "You: '...'" << endl;
			cout << "Sam: 'Okay... uhhh... I'm going to use the bathroom real quick.'" << endl;
			cout << "Sam leaves you alone and climbs out through the bathroom window into the night." << endl;
			cout << "It takes you three hours to realize you've been ditched." << endl;
			end();
			if (dumped == true)
			{
				abort();
			}

		}
		else if (choice == 2)
		{
			cout << "You: 'I play guitar.'" << endl;
			cout << "Sam: 'Really? I've always had a thing for musicians.'" << endl;
			cout << "Sam: 'Can you play me something?'" << endl;
			cout << "You: 'Erm... no.'" << endl;
			cout << "Sam: 'Oh... I see.'" << endl;
		}
		else if (choice == 3)
		{
			cout << "You: 'Painting mostly.'" << endl;
			cout << "Sam: 'Really? I've always had a thing for artists.'" << endl;
			cout << "Sam: 'Can you show me something you've painted?'" << endl;
			cout << "You: 'Yeah, sure.'" << endl;
			cout << "You pull out a painting that looks so fucking cool." << endl;
			cout << "Legit, like I can't even pull up ASCII art for it." << endl;
			cout << "It just looks way too cool to try and replicate. Trust me bro." << endl;
			cout << "Sam: 'Wow... this painting is sick.'" << endl;
			cout << "You: 'I know.'" << endl;
		}
		cout << "Sam: 'Do you like animals? I have a cat.'" << endl;
		redo();
		if (choice == 1) 
		{
			cout << "You: 'Not really, I don't like animals.'" << endl;
			cout << "You: 'They have these deep eyes... like they can see through me...'" << endl;
			cout << "Sam: 'Erm... okay. Forget I asked.'" << endl;
			cout << "Sam mentally checks out for the rest of the date." << endl;
			end();
			if (dumped == true)
			{
				abort();
			}

		}
		else if (choice == 2)
		{
			cout << "You: 'A cat? I have a bird.'" << endl;
			cout << "Sam: 'Oof, I guess we might have to worry about that.'" << endl;
			cout << "There is some awkward energy in the conversation, but it's not awful!" << endl;
		}
		else if (choice == 3)
		{
			cout << "You: 'Yeah, actually cats are my favorite too!'" << endl;
			cout << "Sam: 'Oh, awesome! Then you'll get along great with mine.'" << endl;
			cout << "The two of you talk about Sam's cat and more through the night." << endl;
			cout << "You seem to really hit it off from this point!" << endl;
		}
		cout << "Sam thanks you for the pleasant evening and heads off." << endl;
		cout << "Nice work! You didn't totally blow it!" << endl;
		cout << "Well that was great, right?" << endl;
		cout << "[1] Wait, that's it?" << endl;
		cout << "[2] Thank god that's over!" << endl;
		cin >> choice;
		if (choice == 1) 
		{
			cout << "Yeah! This is only a demo! When you only have a few hours to code..." << endl;
			cout << "I mean- countless hours of hard work went into this how dare you suggest otherwise!" << endl;
			cout << "... Anyway... " << endl;
		}
		else if (choice == 2)
		{
			cout << "Ohh, come on it wasn't so bad! At least you didn't get ditched." << endl;
		}
		else
		{
			cout << "Man you really like to ignore the given options don't you?" << endl;
		}
		cout << "Thank you for playing 'Blind Date!'" << endl;


//	if (choice == 1) 
//	{
//		cout << "" << endl;
//	}
//	else if (choice == 2)
//	{
//		cout << "" << endl;
//	}
//	else if (choice == 3)
//	{
//		cout << "" << endl;
//	}

cout << "This game was made in about one day and started over three times." << endl;
cout << "Thank you for playing." << endl;
cout << "-Wren" << endl;
}
