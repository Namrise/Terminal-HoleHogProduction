#include <iostream>
#include <string>

using namespace std;

double wall, totalRds, spcGear, totalInches, rdsDone, opDepth, production;

void wallThickness(), totalRounds(), spacingGear(), inchesTotal(), roundsDone(), operationDepth(), productionTotal();

int main() {
	wallThickness();
	return 0;
}

void wallThickness() {
	bool on = true;
	while (on) {
		cout << "Wall thickness: ";
		if (!(cin >> wall)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			totalRounds();
		}
	}
}

void totalRounds() {
	bool on = true;
	while (on) {
		cout << "Total rounds: ";
		if (!(cin >> totalRds)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			spacingGear();
		}
	}
}

void spacingGear() {
	bool on = true;
	while (on) {
		cout << "Spacing gear: ";
		if (!(cin >> spcGear)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			inchesTotal();
		}
	}
}

void inchesTotal() {
	totalInches = wall * totalRds * spcGear;
	roundsDone();
}

void roundsDone() {
	bool on = true;
	while (on) {
		cout << "Rounds completed: ";
		if (!(cin >> rdsDone)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			operationDepth();
		}
	}
}

void operationDepth() {
	bool on = true;
	while (on) {
		cout << "Operation depth: ";
		if (!(cin >> opDepth)) {
			string str;
			cin.clear();
			getline(cin, str);
			cout << endl << "'" << str << "'" << " must be a number." << endl << endl;
		}
		else {
			on = false;
			productionTotal();
		}
	}
}

void productionTotal() {
	production = spcGear * rdsDone * opDepth / totalInches;
	cout << endl << "Collected Information:";
	cout << endl << "  |  Wall: " << wall;
	cout << endl << "  |  Total rounds: " << totalRds;
	cout << endl << "  |  Spacing gear: " << spcGear;
	cout << endl << "  |  Total inches: " << totalInches;
	cout << endl << "  |  Rounds completed: " << rdsDone;
	cout << endl << "  |  Round: " << rdsDone;
	cout << endl << "  |  Production: " << production << endl << endl;
	main();
}