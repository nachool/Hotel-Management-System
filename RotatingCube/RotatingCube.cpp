#include <iostream>
using namespace std;

int main() {
	int quant;
	int choice;

	int Qrooms = 0, Qpastry = 0, Qbeef = 0, Qrice = 0, Qseafood = 0, Qchicken = 0;
	//holds the quantity we have
	int Sroom = 0, Spastry = 0, Sbeef = 0, Srice = 0, Sseafood = 0, Schicken = 0;
	//holds the quantity that solds
	int totalRooms = 0, totalPastry = 0, totalBeef = 0, totalRice = 0, totalSeafood = 0, totalChicken = 0;
	//holds the total price each items

	cout << "\n\t Quantity of items we have";
	cout << "\n Rooms available: ";
	cin >> Qrooms;
	cout << "\n Quantiry of pastry: ";
	cin >> Qpastry;
	cout << "\n Quantiry of beef: ";
	cin >> Qbeef;
	cout << "\n Quantiry of rice: ";
	cin >> Qrice;
	cout << "\n Quantiry of seafood: ";
	cin >> Qseafood;
	cout << "\n Quantiry of chicken: ";
	cin >> Qchicken;

	m:
	cout << "\n\t\t Please select  from the menu option ";
	cout << "\n\n1) Room";
	cout << "\n2) Pastry";
	cout << "\n3) Beef";
	cout << "\n4) Rice";
	cout << "\n5) Seafood";
	cout << "\n6) Chicken";
	cout << "\n7) Information regarding sales and collection";
	cout << "\n8) Exit";

	cout << "\n\n Please enter your choice! ";
	cin >> choice;

	//switch case 
	switch (choice)
	{
	case 1:
		cout << "\n\n Enter the number of rooms you want: ";

		cin >> quant;
		if (Qrooms - Sroom >= quant) {
			Sroom = Sroom + quant;
			totalRooms = (totalRooms + quant) * 1200;
			cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
		}
		else {
			cout << "\n\tOnly" << Qrooms - Sroom << "Rooms remaining in hotel";
			break;

	case 2:
		cout << "\n\n Enter Pastry quantity: ";

		cin >> quant;
		if (Qpastry - Spastry >= quant) {
			Spastry = Spastry + quant;
			totalPastry = (totalPastry + quant) * 100;
			cout << "\n\n\t\t" << quant << "Pastry is the order!";
		}
		else {
			cout << "\n\tOnly" << Qpastry - Spastry << "Pastry remaining in hotel";
			break;

	case 3:
		cout << "\n\n Enter Beef quantity: ";

		cin >> quant;
		if (Qbeef - Sbeef >= quant) {
			Sbeef = Sbeef + quant;
			totalBeef = (totalBeef + quant) * 250;
			cout << "\n\n\t\t" << quant << "Beef is the order!";
		}
		else {
			cout << "\n\tOnly" << Qbeef - Sbeef << "Beef remaining in hotel";
			break;

	case 4:
		cout << "\n\n Enter Rice quantity: ";

		cin >> quant;
		if (Qrice - Srice >= quant) {
			Srice = Srice + quant;
			totalRice = (totalRice + quant) * 50;
			cout << "\n\n\t\t" << quant << "Rice is the order!";
		}
		else {
			cout << "\n\tOnly" << Qrice - Srice << "Rice remaining in hotel";
			break;

	case 5:
		cout << "\n\n Enter Seafood quantity: ";

		cin >> quant;
		if (Qseafood - Sseafood >= quant) {
			Sseafood = Sseafood + quant;
			totalSeafood = (totalSeafood + quant) * 275;
			cout << "\n\n\t\t" << quant << "Seafood is the order!";
		}
		else {
			cout << "\n\tOnly" << Qseafood - Sseafood << "Seafood remaining in hotel";
			break;

	case 6:
		cout << "\n\n Enter Chicken quantity: ";

		cin >> quant;
		if (Qchicken - Schicken >= quant) {
			Schicken = Schicken + quant;
			totalChicken = (totalChicken + quant) * 175;
			cout << "\n\n\t\t" << quant << "Chicken is the order!";
		}
		else {
			cout << "\n\tOnly " << Qchicken - Schicken << " Chicken remaining in hotel";
			break;

	case 7:
		cout << "\n\t\tDetails of sales and collectors ";
		cout << "\n\n Number of rooms we had: " << Qrooms;
		cout << "\n\n Number of rooms we gave for rent " << Sroom;
		cout << "\n\n Remaining rooms: " << Qrooms - Sroom;
		cout << "\n\n Total room collection for the day: " << totalRooms;

		cout << "\n\n Number of Pastrys we had: " << Qpastry;
		cout << "\n\n Number of Pastrys we sold " << Spastry;
		cout << "\n\n Remaining Pastrys: " << Qpastry - Spastry;
		cout << "\n\n Total Pastry collection for the day: " << totalPastry;

		cout << "\n\n Number of Beef we had: " << Qbeef;
		cout << "\n\n Number of Beef we gave for rent " << Sbeef;
		cout << "\n\n Remaining Beef: " << Qbeef - Sbeef;
		cout << "\n\n Total Beef collection for the day: " << totalBeef;

		cout << "\n\n Number of Rice we had: " << Qrice;
		cout << "\n\n Number of Rice we gave for rent " << Srice;
		cout << "\n\n Remaining Rice: " << Qrice - Srice;
		cout << "\n\n Total Rice collection for the day: " << totalRice;

		cout << "\n\n Number of Seafood we had: " << Qseafood;
		cout << "\n\n Number of Seafood we gave for rent " << Sseafood;
		cout << "\n\n Remaining Seafood: " << Qseafood - Sseafood;
		cout << "\n\n Total Seafood collection for the day: " << totalSeafood;

		cout << "\n\n Number of Chicken we had: " << Qchicken;
		cout << "\n\n Number of Chicken we gave for rent " << Schicken;
		cout << "\n\n Remaining Chicken: " << Qchicken - Schicken;
		cout << "\n\n Total Chcicken collection for the day: " << totalChicken;

	case 8:
		exit(0);

	default:
		cout << "\n Please select the number mentioned above!";




		}
		}
		}
		}
		}
		}
	}
	goto m;
}