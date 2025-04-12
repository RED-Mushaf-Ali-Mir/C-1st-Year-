#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int choice, options, selectedPlan;
    bool repeat = true;

     cout<<"\n\t\t||=============================================================================================||";
 cout<<"\n\t\t||                             The RED'S Expense Managemnet System                             ||";
 cout<<"\n\t\t||=============================================================================================||";
    cout << "\n\n\tDO YOU WANT TO VIEW PLANS OR SELECT THEM? \n\n\n\n\n"
         << "1. Press 1 to View the Plans. \n\n"
         << "2. Press 2 to Select the Plans. ";
    cin >> choice;

    switch (choice) {
        case 1:
            do {
                system("cls");
                cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\tEXPENSE PLAN RECOMMENDATION! ";
                cout << "\n\n\n\nWHICH PLAN DO YOU WANT TO VIEW? \n\n"
                     << "a) Basic Plan under 15,000 PKR (Press 1): \n"
                     << "b) Balanced Plan under 23,000 PKR (Press 2): \n"
                     << "c) Lavish Plan under 40,000 PKR (Press 3): ";
                cin >> options;

                // Ensure valid input: 1, 2, or 3
                if (options >= 1 && options <= 3) {
                    repeat = false; // Valid input, exit loop
                } else {
                    repeat = true; // Invalid input, repeat loop
                    cout << "\nInvalid choice. Please select a valid option (1, 2, or 3).\n";
                    system("pause"); // Pause to let the user see the error message
                }
            } while (repeat);

            switch (options) {
                case 1:
                    system("cls");
                    cout<<"\n\t\t||=============================================================================================||";
 cout<<"\n\t\t||                             The RED'S Expense Managemnet System                             ||";
 cout<<"\n\t\t||=============================================================================================||";
                    cout << "\n\n\n\t\t\tBASIC PLAN! ";
                    cout << "\n\n\n- Breakfast:  \n  1 paratha + tea = 40 + 90 = 130 x 30 = 3,900 PKR  \n\n"
                         << "\tSwitchable Options:  \n\t\t\tTea + Anda (60) = 150 PKR  \n\n"
                         << "- Lunch:  \n  2 roti + vegetable salan = 40 + 120 = 160 x 30 = 4,800 PKR  \n\n"
                         << "\tSwitchable Option:  \n\t\t\tPlain rice + vegetable salan = 280 PKR  \n\n"
                         << "- Dinner:  \n  2 roti + vegetable salan = 40 + 120 = 160 x 30 = 4,800 PKR  \n\n"
                         << "\tSwitchable Option:  \n\t\t\tPlain rice + chicken salan = 360 PKR  \n\n"
                         << "Essentials:  	Soap =	100, Paste = 120, Laundry (20 items) = 30 x 20 = 600 PKR  \n\t"
                         << "Total =    3,900 + 4,800 + 4,800 + 820 = 14,420 PKR ";
                    break;

                case 2:
                    system("cls");
                    cout<<"\n\t\t||=============================================================================================||";
 cout<<"\n\t\t||                             The RED'S Expense Managemnet System                             ||";
 cout<<"\n\t\t||=============================================================================================||";
              \
                    cout << "\n\n\n\t\t\tBALANCED PLAN! ";
                    cout << "\n\n\n- Breakfast:  \n  1 paratha + tea = 40 + 90 = 130 x 30 = 3,900 PKR   \n\n"
                         << "\tSwitchable Option:   \n\t\t\tTea + Fried E Burger = 250 PKR  \n\n"
                         << "- Lunch: \nChicken salan + 2 roti = 200 + 40 = 240 x 30 = 7,200 PKR  \n\n"
                         << "\tSwitchable Option: \n\t\t\tChicken biryani = 250 PKR  \n\n"
                         << "- Dinner: \n1 plate chicken rice = 250 x 30 = 7,500 PKR  \n\n"
                         << "\tSwitchable Option: \n\t\t\tPlain rice + chicken salan = 360 PKR  \n\n"
                         << "- Weekends:\n\tPizza/Ice cream = 3,000 PKR  \n\n"
                         << "\tSwitchable Treats: \n\t\t\tParatha Roll (250), Shawarma (200–400)  \n\n"
                         << "Essentials: Soap = 100, Paste = 120, Laundry (30 items) = 30 x 30 = 900 PKR  \n\t"
                         << "Total =    3,900 + 7,200 + 7,500 + 3,000 + 1,120 = 22,720 PKR";
                    break;

                case 3:
                    system("cls");
                    cout<<"\n\t\t||=============================================================================================||";
 cout<<"\n\t\t||                             The RED'S Expense Managemnet System                             ||";
 cout<<"\n\t\t||=============================================================================================||";
                    cout << "\n\n\n\t\t\tLAVISH PLAN! ";
                    cout << "\n\n\n- Breakfast: \n1 paratha + tea = 40 + 90 = 130 x 30 = 3,900 PKR  \n\n"
                         << "\tSwitchable Option: \n\t\t\tTea + Anda (150) or Fried E Burger (250)  \n"
                         << "- Lunch: \nChicken rice + 2 seekh kababs = 250 + 350 x 2 = 950 x 30 = 28,500 PKR  \n\n"
                         << "\tSwitchable Option: \n\t\t\tBarbecue (Chicken Boti or Beef Seekh = 350 per seekh)  \n"
                         << "- Dinner: \nChicken salan + 2 roti = 200 + 40 = 240 x 30 = 7,200 PKR  \n\n"
                         << "\tSwitchable Option: \n\t\t\tChicken biryani (250) or Paratha Roll (250)  \n\n"
                         << "- Weekends: Extra desserts, fast food = 6,000 PKR  \n\n"
                         << "\tSwitchable Treats: \n\t\t\tShawarma (400), Pizza (1,500), Ice Cream \n\n"
                         << "Essentials: Soap = 200, Paste = 150, Laundry = 1,000 PKR.";
                    break;

                default:
                    cout << "WRONG INPUT ENTERED";
            }
            break;

        case 2:

            cout << "\n\nNow, please select a plan to proceed :\n\n"
                     << "\na) Basic Plan under 15,000 PKR (Press 1): "
                     << "\nb) Balanced Plan under 23,000 PKR (Press 2):"
                     << "\nc) Lavish Plan under 40,000 PKR (Press 3): ";
            
            cin >> selectedPlan;

            if (selectedPlan == 1) {
                cout << "\nYou have selected the BASIC PLAN!";
            } else if (selectedPlan == 2) {
                cout << "\nYou have selected the BALANCED PLAN!";
            } else if (selectedPlan == 3) {
                cout << "\nYou have selected the LAVISH PLAN!";
            } else {
                cout << "\nInvalid selection. No plan selected.";
            }
            break;

        default:
            cout << "\nInvalid choice! Please restart the program.";
    }

    return 0;
}