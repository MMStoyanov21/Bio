#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>



using namespace std;
int qNo = 1;
int correct = 0;
int wrong = 0;
bool ask[11] = {true, true, true, true, true, true, true, true, true, true, true};
void menu();
void rules() {
    system("cls");
    int back;
    do {
        cout << "If you want to win the game you have to answer 10 questions.\nFor every right question you get 10 points. But if you make \na mistake you will lose 5 points." << endl;
        cout << endl << endl << "Now that you've read the rules you can go back by pressing 0: ";
        cin >> back;
        switch (back) {
        case 0:
            menu();
            break;
        }
    } while (back != 0);
    
}
void credits() {
    system("cls");
    int back;
    do {
        cout << "The game is made by:" << endl << "Martin Stoyanov" << endl << "Yana Ilcheva" << endl << "Polina Dineva" << endl << endl << "If you want to exit the credits enter 0: ";
        cin >> back;
        switch (back) {
        case 0:
            menu();
            break;
        }
    } while (back != 0);
    
}
 

void displayRandomQuestion();
void display();
void question(string question,string a, string b, string c,string d, char correctAnswer);
void result();
void menu() {
    system("cls");
    int choice;
    do {
        cout << "1-PLAY" << endl << "2-RULES" << endl << "3-CREDITS" << endl << "4-EXIT" << endl << endl << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "You chose to play.\n";
            display();
            break;
        case 2:
            cout << "Here are the rules:\n";

            rules();
            break;
        case 3:
            credits();
            break;
        case 4:
            exit(0);
        }
    } while (choice != 1 && choice != 2 && choice != 3);
}
void display() {
    for(int i = 0;i<5;i++){
        system("cls");
        cout << "Question NO:" << qNo << "\t\tYour points are:" << correct << "\t\tTimes you made a mistake:" << wrong << endl << endl;
        displayRandomQuestion();
    }
}
void printCenteredText()
{
}
void displayRandomQuestion() {
    srand(time(0));
    //it makes sure the number is random//
    bool isQuestionRemaining = false;
    for (int i = 0; i < 10; i++) {
        if (ask[i]) {
            isQuestionRemaining = true;
            break;
        }
    }
    while (isQuestionRemaining) {
        int num = rand() % 10;
        if (ask[num]) {
            ask[num] = false;
            switch (num) {
            case 0:
                question("The amount of energy that is passed from one organism to the next in a food chain is ?", "5%", "10%", "15%","20%", 'b');
                break;
            case 1:
                question("In the following food chain, which organism is the secondary consumer? grass ------> rabbit -------> snake ------> hawk ", "Grass", "Rabbit", "Snake", "Hawk", 'c');
                break;
            case 2 :
                question("The term nitrogen fixation refers to: ", "The process that turns nitrates and nitrites into nitrogen.", "The process where bacteria turns nitrogen into a form that plants can use (ammonia).", "The process where nitrogen gas in the atmosphere is converted to nitrates.", "None of the above.", 'b');
                break;
            case 3:
                question("Which of the following is an abiotic factor in an ecosystem? ", "Bird", "Tree", "Rock", "Deer", 'c');
                break;
            case 4:
                question("Sea anemones contain a venom that is used to sting and paralyze their prey. The clownfish contains an enzyme in their scales that makes them immune to the venom. This allows them to freely live in the sea anemone without being harmed. This is an example of what type of relationship? ", "Predator-prey", "Mutualism", "Commensalism", "Parasitism", 'c');
                break;
            case 5:
                question("The ultimate source of energy for all organisms in life is", "Water", "Oxygen", "Nitrogen", "The sun", 'd');
                break;
            case 6:
                question("The release of water vapor from the leaves of trees is called ", "Evaporation", "Precipitation", "Condensation", "Transpiration", 'd');
                break;
            case 7:
                question("Mushrooms and other fungi are responsible for breaking down dead organic matter. In the ecosystem, they are called ", "Producers", "Consumers", "Decomposers", "Scavengers", 'c');
                break;
            case 8:
                question("All of the following are ways that we can protect the biosphere except:", "Recycling", "Protecting waterways from the dumping of illegal chemicals.", "Burning fossil fuels.", "Decreasing the process of deforestation.", 'c');
                break;
            case 9:
                question("Which of the following organisms is an autotroph? ", "Algae", "A bear", "A cheetah", "A fish", 'a');
                break;
            case 10:
                question("Which of the following cannot be recycled? ", "Nitrogen", "Carbon", "Water", "Energy", 'd');
                break;

            }
        }
    }
    result();
}
void result()
{
    int back;
    system("cls");
    if (correct == 100)
    {
        cout << "                                                                                    ,---,    ,---,    ,---, " << endl;
        cout << "                                                                                 ,`--.' | ,`--.' | ,`--.' | " << endl;
        cout << "                                                                                 |   :  : |   :  : |   :  : " << endl;
        cout << "        ,---,                                                                    '   '  ; '   '  ; '   '  ; " << endl;
        cout << "       /_ ./|   ,---.           ,--,                  .---.   ,---.        ,---, |   |  | |   |  | |   |  | " << endl;
        cout << " ,---, |  ' :  '   ,'\\        ,'_ /|                 /. ./|  '   ,'\\   ,-+-. /  |'   :  ; '   :  ; '   :  ; " << endl;
        cout << "/___/ \\.  : | /   /   |  .--. |  | :              .-'-. ' | /   /   | ,--.'|'   ||   |  ' |   |  ' |   |  ' " << endl;
        cout << " .  \\  \\ ,' '.   ; ,. :,'_ /| :  . |             /___/ \\: |.   ; ,. :|   |  ,'' |'   :    | '   :  | ' :  | " << endl;
        cout << "  \\  ;  `  ,''   | |: :|  ' | |  . .          .-'.. '   ' .'   | |: :|   | /  | |;   |  ; ;   |  ; ;   |  ; " << endl;
        cout << "   \\  \\    ' '   | .; :|  | ' |  | |         /___/ \\:     ''   | .; :|   | |  | |`---'. | `---'. | `---'. | " << endl;
        cout << "    '  \\   | |   :    |:  | : ;  ; |         .   \\  ' .\\   |   :    ||   | |  |/  `--..`;  `--..`;  `--..`; " << endl;
        cout << "     \\  ;  ;  \\   \\  / '  :  `--'   \\         \\   \\   ' \\ | \\   \\  / |   | |--'  .--,_    .--,_    .--,_    " << endl;
        cout << "      :  \\  \\  `----'  :  ,      .-./          \\   \\  |--   `--- - ' |   |/      |    |`. |    |`. |    |`. " << endl;
        cout << "       \\  ' ;           `--`----'               \\   \\ |              '---'       `-- -`, ;`-- -`, ;`-- -`, ;" << endl;
        cout << "        `--`                                     '---'                             '---`'   '-- - `'   '---`" << endl;
        cout << "If you want to exit the page enter 0: ";
        cin >> back;
        switch (back)
        {
        case 0:
            menu();
            break;
        }
    }
    else
    {
        cout << "Total questions = " << qNo - 1 << endl;
        cout << "Your points = " << correct << endl;
        cout << "Wrong answers = " << wrong << endl;
        cout << "If you want to exit the credits enter 0: ";
        cin >> back;
        switch (back)
        {
        case 0:
            menu();
            break;
        }
    }
}
void question(string question, string a, string b, string c, string d, char correctAnswer) {
    cout << question << endl<<endl<<endl;
    cout << "a) " << a << " b) " << b << endl << "c) " << c << " d) " << d<<endl;
    char answer;
    cout <<endl<<endl<< "Please input your answer: ";
    cin >> answer;
    if (answer == correctAnswer) {
        correct+=10;

    }
    else {
        wrong++;
        correct -= 5;
    }
    qNo++;
    display();
}
int main()
{
    system("color 0B");
    menu();
    
}