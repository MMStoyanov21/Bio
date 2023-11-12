#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>




using namespace std;
int qNo = 1;
int correct = 0;
int wrong = 0;
bool askEasy[5] = {true, true, true, true, true};
bool askMedium[7] = {true, true, true, true, true, true, true};
bool askHard[10] = {true, true, true, true, true, true, true, true, true, true};
void menu();
void display_easy();
void display_hard();
void display_medium();
void displayRandomQuestion_hard();
void displayRandomQuestion_easy();
void displayRandomQuestion_medium();
void levels();
void choice_easy() {
    int num;
    do {
        system("cls");
        cout << "1 - RESUME" << endl << "2 - RETURN TO MENU" << endl << endl << "Enter your choice: ";
        cin >> num;
        switch (num) {
        case 1:
            cout << "You chose tho resume the game";
            display_easy();
            break;
        case 2:
            cout << "You chose to return to the menu";
            levels();
            break;
        }
    } while (num != 1 && num != 2);
}
void choice_medium() {
    int num;
    do {
        system("cls");
        cout << "1 - RESUME" << endl << "2 - RETURN TO MENU" << endl << endl << "Enter your choice: ";
        cin >> num;
        switch (num) {
        case 1:
            cout << "You chose tho resume the game";
            display_medium();
            break;
        case 2:
            cout << "You chose to return to the menu";
            levels();
            break;
        }
    } while (num != 1 && num != 2);
}
void choice_hard() {
    int num;
    do {
        system("cls");
        cout << "1 - RESUME" << endl << "2 - RETURN TO MENU" << endl << endl << "Enter your choice: ";
        cin >> num;
        switch (num) {
        case 1:
            cout << "You chose tho resume the game";
            display_hard();
            break;
        case 2:
            cout << "You chose to return to the menu";
            levels();
            break;
        }
    } while (num != 1 && num != 2);
}
void levels() {
    int choice;
    do {
        system("cls");
        cout << "1 - EASY" << endl;
        cout << "2 - MEDIUM" << endl;
        cout << "3 - HARD" << endl;
        cout << "0 - RETURN TO MENU" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            display_easy();
            break;
        case 2:
            display_medium();
            break;
        case 3:
            display_hard();
            break;
        case 0:
            menu();
            break;
        }

    } while (choice != 1 && choice != 2 && choice != 3 && choice != 0);
}

void display_hard() {
    for (int i = 0; i < 5; i++) {
        system("cls");
        cout << "Question NO:" << qNo << "\t\tYour points are:" << correct << "\t\tTimes you made a mistake:" << wrong << endl <<"If you want to exit enter 0"<<endl<< endl;
        displayRandomQuestion_hard();
    }
    system("color 0C");
}
void display_medium() {
    for (int i = 0; i < 5; i++) {
        system("cls");
        cout << "Question NO:" << qNo << "\t\tYour points are:" << correct << "\t\tTimes you made a mistake:" << wrong << endl << "If you want to exit enter 0" << endl << endl;
        displayRandomQuestion_medium();
    }
    system("color 0E");
}
void display_easy() {
    for (int i = 0; i < 5; i++) {
        system("cls");
        cout << "Question NO:" << qNo << "\t\tYour points are:" << correct << "\t\tTimes you made a mistake:" << wrong << endl << "If you want to exit enter 0" << endl << endl;
        displayRandomQuestion_easy();
    }
    system("color 0A");
}

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
    system("color 0B");

    
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
    system("color 0B");
    
}
 



void question_ez(string question,string a, string b, string c,string d, char correctAnswer);
void question_mid(string question, string a, string b, string c, string d, char correctAnswer);
void question_h(string question, string a, string b, string c, string d, char correctAnswer);
void result();

void menu() {
    int choice;
    do {
        system("CLS");
        cout << "1-LEVELS" << endl << "2-RULES" << endl << "3-CREDITS" << endl << "4-EXIT" << endl << endl << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "You chose to play.\n";
            levels();
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
        default: continue;
        }
    } while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
    
}

void printCenteredText()
{
}
void displayRandomQuestion_easy() {
    system("color 0A");
    srand(time(0));
    //it makes sure the number is random//
    bool isQuestionRemaining = false;
    for (int i = 0; i < 10; i++) {
        if (askEasy[i]) {
            isQuestionRemaining = true;
            break;
        }
    }
    while (isQuestionRemaining) {
        int num = rand() % 10;
        if (askEasy[num]) {
            askEasy[num] = false;
            switch (num) {
            case 0:
                question_ez("The amount of energy that is passed from one organism to the next in a food chain is ?", "5%", "10%", "15%","20%", 'b');
                break;
            case 1:
                question_ez("In the following food chain, which organism is the secondary consumer? grass ------> rabbit -------> snake ------> hawk ", "Grass", "Rabbit", "Snake", "Hawk", 'c');
                break;
            case 2 :
                question_ez("The term nitrogen fixation refers to: ", "The process that turns nitrates and nitrites into nitrogen.", "The process where bacteria turns nitrogen into a form that plants can use (ammonia).", "The process where nitrogen gas in the atmosphere is converted to nitrates.", "None of the above.", 'b');
                break;
            case 3:
                question_ez("Which of the following is an abiotic factor in an ecosystem? ", "Bird", "Tree", "Rock", "Deer", 'c');
                break;
            case 4:
                question_ez("Sea anemones contain a venom that is used to sting and paralyze their prey. The clownfish contains an enzyme in their scales that makes them immune to the venom. This allows them to freely live in the sea anemone without being harmed. This is an example of what type of relationship? ", "Predator-prey", "Mutualism", "Commensalism", "Parasitism", 'c');
                break;
            case 5:
                question_ez("The ultimate source of energy for all organisms in life is", "Water", "Oxygen", "Nitrogen", "The sun", 'd');
                break;
            case 6:
                question_ez("The release of water vapor from the leaves of trees is called ", "Evaporation", "Precipitation", "Condensation", "Transpiration", 'd');
                break;
            case 7:
                question_ez("Mushrooms and other fungi are responsible for breaking down dead organic matter. In the ecosystem, they are called ", "Producers", "Consumers", "Decomposers", "Scavengers", 'c');
                break;
            case 8:
                question_ez("All of the following are ways that we can protect the biosphere except:", "Recycling", "Protecting waterways from the dumping of illegal chemicals.", "Burning fossil fuels.", "Decreasing the process of deforestation.", 'c');
                break;
            case 9:
                question_ez("Which of the following organisms is an autotroph? ", "Algae", "A bear", "A cheetah", "A fish", 'a');
                break;
            case 10:
                question_ez("Which of the following cannot be recycled? ", "Nitrogen", "Carbon", "Water", "Energy", 'd');
                break;

            }
        }
    }
    result();
}
void displayRandomQuestion_medium() {
    
    system("color 06"); 
    srand(time(0));
    //it makes sure the number is random//
    bool isQuestionRemaining = false;
    for (int i = 0; i < 10; i++) {
        if (askMedium[i]) {
            isQuestionRemaining = true;
            break;
        }
    }
    while (isQuestionRemaining) {
        int num = rand() % 10;
        if (askMedium[num]) {
            askMedium[num] = false;
            switch (num) {
            case 0:
                question_mid("The amount of energy that is passed from one organism to the next in a food chain is ?", "5%", "10%", "15%", "20%", 'b');
                break;
            case 1:
                question_mid("In the following food chain, which organism is the secondary consumer? grass ------> rabbit -------> snake ------> hawk ", "Grass", "Rabbit", "Snake", "Hawk", 'c');
                break;
            case 2:
                question_mid("The term nitrogen fixation refers to: ", "The process that turns nitrates and nitrites into nitrogen.", "The process where bacteria turns nitrogen into a form that plants can use (ammonia).", "The process where nitrogen gas in the atmosphere is converted to nitrates.", "None of the above.", 'b');
                break;
            case 3:
                question_mid("Which of the following is an abiotic factor in an ecosystem? ", "Bird", "Tree", "Rock", "Deer", 'c');
                break;
            case 4:
                question_mid("Sea anemones contain a venom that is used to sting and paralyze their prey. The clownfish contains an enzyme in their scales that makes them immune to the venom. This allows them to freely live in the sea anemone without being harmed. This is an example of what type of relationship? ", "Predator-prey", "Mutualism", "Commensalism", "Parasitism", 'c');
                break;
            case 5:
                question_mid("The ultimate source of energy for all organisms in life is", "Water", "Oxygen", "Nitrogen", "The sun", 'd');
                break;
            case 6:
                question_mid("The release of water vapor from the leaves of trees is called ", "Evaporation", "Precipitation", "Condensation", "Transpiration", 'd');
                break;
            case 7:
                question_mid("Mushrooms and other fungi are responsible for breaking down dead organic matter. In the ecosystem, they are called ", "Producers", "Consumers", "Decomposers", "Scavengers", 'c');
                break;
            case 8:

                question_mid("All of the following are ways that we can protect the biosphere except:", "Recycling", "Protecting waterways from the dumping of illegal chemicals.", "Burning fossil fuels.", "Decreasing the process of deforestation.", 'c');
                break;
            case 9:
                question_mid("Which of the following organisms is an autotroph? ", "Algae", "A bear", "A cheetah", "A fish", 'a');
                break;
            case 10:
                question_mid("Which of the following cannot be recycled? ", "Nitrogen", "Carbon", "Water", "Energy", 'd');
                break;

            }
        }
    }
    result();
}
void displayRandomQuestion_hard() {
    system("color 04");
    srand(time(0));
    //it makes sure the number is random//
    bool isQuestionRemaining = false;
    for (int i = 0; i < 10; i++) {
        if (askHard[i]) {
            isQuestionRemaining = true;
            break;
        }
    }
    while (isQuestionRemaining) {
        int num = rand() % 10;
        if (askHard[num]) {
            askHard[num] = false;
            switch (num) {
            case 0:
                question_h("What is the term for a trophic cascade where the apex predator's decline leads to an increase in the population of its prey and a subsequent decrease in the next lower trophic level?", "Apex Reversal", "Trophic Overturn", "Mesopredator Release","Predator Compensation", 'c');
                break;
            case 1:
                question_h("Name one marine organism often considered a keystone species and explain its role in maintaining ecosystem stability.", "Clownfish - regulates coral health", "Sea Otter - controls sea urchin population", "Blue Whale - maintains plankton balance", "Hammerhead Shark - regulates fish populations", 'b');
                break;
            case 2 :
                question_h("Define secondary succession and provide an example of an ecosystem where it commonly occurs.", "The initial colonization of a barren area; e.g., mosses on rocks.", "The development of an ecosystem after a volcanic eruption; e.g., new island formation.", "The process of change in an ecosystem following a disturbance; e.g., regrowth after a fire.", "The gradual transformation of a forest into a grassland; e.g., savanna formation.", 'c');
                break;
            case 3:
                question_h("Identify two criteria used to define an area as a biodiversity hotspot.", "High species richness and low human impact.", "High species endemism and significant habitat loss.", "High elevation and low precipitation.", "Large land area and high agricultural activity.", 'b');
                break;
            case 4:
                question_h("Explain the role of mycorrhizal fungi in nutrient cycling in terrestrial ecosystems.", "Fix atmospheric nitrogen for plants.", "Break down dead organic matter, releasing nutrients.", "Enhance nutrient absorption by forming symbiotic relationships with plant roots.", "Facilitate nutrient runoff in aquatic ecosystems.", 'c');
                break;
            case 5:
                question_h("In the context of biogeochemical cycles, differentiate between the terms flux and pool.", "Flux is the total amount of a substance in a specific reservoir; pool is the movement of a substance between reservoirs.", "Flux is the movement of a substance between reservoirs; pool is the total amount of a substance in a specific reservoir.", "Flux and pool are synonymous terms representing the movement of substances within ecosystems.", "Flux is the net gain of a substance in a reservoir; pool is the net loss.", 'b');
                break;
            case 6:
                question_h("Briefly describe one ecological impact of invasive species on native ecosystems.", "Promotion of native species diversity.", "Restoration of natural ecosystem balance.", "Competition with native species, predation, or introduction of new diseases.", "Enhancement of ecosystem resilience.", 'c');
                break;
            case 7:
                question_h("Define the concept of an ecological niche and discuss how it differs from a habitat.", "Ecological niche is the physical location where a species lives; habitat is the role and position a species has in its environment.", "Ecological niche is the role and position a species has in its environment, including its habitat; habitat is the physical location where a species lives.", "Ecological niche and habitat are interchangeable terms.", "Ecological niche is the collective term for all the habitats within an ecosystem.", 'b');
                break;
            case 8:
                question_h("Name two specific ways in which climate change can affect freshwater ecosystems.", "Increased precipitation and reduced evaporation.", "Elevated temperatures affecting fish migration patterns, and altered precipitation patterns leading to changes in water availability.", "Decreased atmospheric carbon dioxide levels and increased dissolved oxygen.", "Enhanced nutrient runoff and decreased algal blooms.", 'b');
                break;
            case 9:
                question_h("According to the theory of island biogeography, how does the size and distance of an island influence species diversity?", "Larger islands and shorter distances result in lower species diversity.", "Smaller islands and shorter distances result in higher species diversity.", "Larger islands and greater distances result in higher species diversity.", "Smaller islands and greater distances result in lower species diversity.", 'c');
                break;
            case 10:
                question_h("Identify the major factors influencing the distribution of biomes on Earth and explain how these factors contribute to the diversity of ecosystems.", "Latitude and altitude", "Wind patterns and ocean currents", "Soil composition and vegetation types", "All of the above", 'd');
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
        cout << "        ,----,                                                                                                     " << endl;
        cout << "      ,/   .`|                                                                                         ___    ,---," << endl;
        cout << "    ,`   .'  :                                                                                        /  .\\ ,---.'|" << endl;
        cout << "  ;    ;     /                                                             ,--,                       \\  ; ||   | :" << endl;
        cout << ".'___,/    ,' __  ,-.                                                    ,--.'|         ,---,          `--' '   : '" << endl;
        cout << "|    :     |,' ,'/ /|                              ,----._,.             |  |,      ,-+-. /  |              :   | |" << endl;
        cout << ";    |.';  ;'  | |' |   .--,            ,--.--.   /   /  ' /   ,--.--.   `--'_     ,--.'|'   |              |   ' :" << endl;
        cout << "`----'  |  ||  |   ,' /_ ./|           /       \\ |   :     |  /       \\  ,' ,'|   |   |  ,'' |              ;   ; |" << endl;
        cout << "    '   :  ;'  :  /, ' , ' :          .--.  .-. ||   | .\\  . .--.  .-. | '  | |   |   | /  | |              '   | '" << endl;
        cout << "    |   |  '|  | '/___/ \\: |           \\__\\/: . ..   ; ';  |  \\__\\/: . . |  | :   |   | |  | |              |   | :" << endl;
        cout << "    '   :  |;  : | .  \\  ' |           ,' .--.; | '   .   . |  ,' .--.; | '  : | __ |   | |  |/          ___  '   :" << endl;
        cout << "   ;   |.' |  , ;  \\  ;   :          /  /  ,.  | `---`-'| | /  /  ,.  | |  | '.'||   | |--'          /  .\\ |   | | " << endl;
        cout << "    '---'    ---'    \\  \\  ;         ;  :   .'   \\.'__/\\_: |;  :   .'   \\;  :    ;|   |/              \\  ; |;   : ;" << endl;
        cout << "                      :  \\  \\        |  ,     .-./|   :    :|  ,     .-./|  ,   / '---'                `--' | , /  " << endl;
        cout << "                       \\  ' ;         `--`---'     \\   \\  /  `--`---'     ---`-'                            '---'  " << endl;
        cout << "If you want to exit enter 0: ";
        cin >> back;
        switch (back)
        {
        case 0:
            menu();
            break;
        }
    }
}
void question_ez(string question, string a, string b, string c, string d, char correctAnswer) {
    
        cout << question << endl << endl << endl;
        cout << "a) " << a << " b) " << b << endl << "c) " << c << " d) " << d << endl;
        char answer;
        cout << endl << endl << "Please input your answer: ";
        cin >> answer;
        if (answer == correctAnswer) {
            correct += 10;

        }
        if (answer == '0') {
            choice_easy();
        }
        else {
            wrong++;
            correct -= 5;
        }
        qNo++;
        display_easy();
    
}
void question_mid(string question, string a, string b, string c, string d, char correctAnswer) {
    cout << question << endl << endl << endl;
    cout << "a) " << a << " b) " << b << endl << "c) " << c << " d) " << d << endl;
    char answer;
    cout << endl << endl << "Please input your answer: ";
    cin >> answer;
    if (answer == correctAnswer) {
        correct += 10;

    }
    if (answer == '0') {
        choice_medium();
    }
    else {
        wrong++;
        correct -= 5;
    }
    qNo++;
    display_medium();
}
void question_h(string question, string a, string b, string c, string d, char correctAnswer) {
    cout << question << endl << endl << endl;
    cout << "a) " << a << " b) " << b << endl << "c) " << c << " d) " << d << endl;
    char answer;
    cout << endl << endl << "Please input your answer: ";
    cin >> answer;
    if (answer == correctAnswer) {
        correct += 10;

    }
    if (answer == '0') {
        choice_hard();
    }
    if(answer != correctAnswer) {
        wrong++;
        correct -= 5;
    }
    qNo++;
    display_hard();
}


int main()
{
   
    system("color 0B");
    menu();   
}