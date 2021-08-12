#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int soldiers{60};
    int enemy_soldiers{60};
    int soldier_health{100};
    int money{6000};
    int cost_m416{100};
    int cost_scarl{75};
    int cost_ak47{50};
    string user_choice_gun{};
    size_t soldiers_deployed{};
    size_t distance_from_soldiers{};
    vector<string> guns{};
    guns.push_back("M416");
    guns.push_back("SCAR-L");
    guns.push_back("AK-47");

    cout << "Mission Encounter";
    cout << "\nTotal soldiers: " << soldiers;
    cout << "\nHow many soldiers do you want to deploy? ";
    cin >> soldiers_deployed;
    soldiers -= soldiers_deployed;
    cout << "Soldiers left: " << soldiers; 
    cout << "\nName of guns: " << guns.at(0) << " " << guns.at(1) << " " << guns.at(2) << endl;
    cout <<  "\nCost of 1 M416: " << cost_m416;
    cout << "\nCost of 1 Scar-l: " << cost_scarl;
    cout << "\nCost of 1 AK-47: " << cost_ak47;
    do{
        cout << "\nWhich gun do you want to buy? ";
        cin >>  user_choice_gun;
        if(user_choice_gun == guns.at(0)){
            money -= cost_m416;
            cout << user_choice_gun << " bought.";
            cout << "\nMoney: " << money;
        }else if(user_choice_gun == guns.at(1)){
            money -= cost_scarl;
            cout << user_choice_gun << " bought.";
            cout << "\nMoney: " << money;
        }else if(user_choice_gun == guns.at(2)){
            money -= cost_ak47;
            cout << user_choice_gun << " bought.";
            cout << "\nMoney: " << money;
        }else{
            cout << "Gun not avialable.";
        }
    }while(user_choice_gun != guns.at(0) & user_choice_gun != guns.at(1) & user_choice_gun != guns.at(2));
    
    cout << "\nAt what distance from the enemy do you want to deploy the soldiers between 1m to 10m? ";
    cin >> distance_from_soldiers;




}