#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

		 int main()
		{
			double crewGold, PBAGold;
			double totalGold = 100, CJGold, FMGold, crewMembers = 5, evenGold;
			string CapName = "Seaplusplus", FMName = "Java the Nut";
			cout << "What is your name?" << endl;
			//cin >> CapName;
			cout << endl;
			cout<<"What is the name of your trusty First Mate?" << endl;
			//cin >> FMName;
			cout << endl;
			cout<<"How much Gold did you get with your Crew?" << endl;
			//cin >> totalGold;
			while (cin.fail())
			{
				cout << "Error: Data not readable. Try again." << endl;
				cin.clear();
				string garbage;
				cin >> garbage;

				cout << "How much Gold did you get with your Crew?" << endl;
				cin >> totalGold;
			}
			cout << endl;
			cout << "How many Crew Members are there (besides You and " << FMName << ")?" << endl;
			//cin >> crewMembers;
			while (cin.fail())
			{
				cout << "Error: Data not readable. Try again." << endl;
				cin.clear();
				string garbage;
				cin >> garbage;

				cout << "How many Crew Members are there (besides You and " << FMName << ")?" << endl;
				cin >> crewMembers;
			}
			cout << endl;
			//
			int totalcrew = (int)crewMembers + 2;
			totalGold -= 3 * crewMembers;
			crewGold = 3;
			CJGold = .12 * totalGold;
			CJGold = round(CJGold);
			totalGold -= CJGold;
			FMGold = .08 * totalGold;
			FMGold = round(FMGold);
			totalGold -= FMGold;
			evenGold = (int)totalGold / totalcrew;
			evenGold = (int)evenGold;
			crewGold += evenGold;
			FMGold += evenGold;
			CJGold += evenGold;
			totalGold -= evenGold * totalcrew;
			PBAGold = (int)totalGold % totalcrew;
			cout << CJGold << " Gold for you, Captain " << CapName << ". " << FMGold << " Gold for " << FMName << ", your First Mate. " << crewGold << " Gold per Crew Member (" << crewMembers << " members), and " << PBAGold << " Gold goes to the PBA." << endl;
			
			system("PAUSE");
			return 0;
		}
