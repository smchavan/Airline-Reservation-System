

#include <iostream>

#include<istream>

#include<iomanip>

#include "Database.h"


#include<string>



using namespace std;

using namespace AirlineApp;



int displayMenu();

void displayFlightSchedule();

void addNewPassenger(Database& db);

void MakeReservation(Database& db);

Database PassengerDb;


int main()

{

	while (true)

	{

		int selection = displayMenu();

		switch (selection) {

		case 0:

			return 0;

		case 1:

			addNewPassenger(PassengerDb);

			break;

		case 2:

			displayFlightSchedule();
			
			break;

		case 3:

			MakeReservation(PassengerDb);
			

			break;

		case 4:

			
			PassengerDb.DisplayAllTickets();

			break;

		case 5:

			PassengerDb.displayPassengerDetails();

			break;

		

		default:

			cerr << "Unknown command. Try again." << endl;

			break;

		}

	}

	return 0;

}



int displayMenu()

{

	int selection;

	cout << endl;

	cout << setw(30)<<"*********************************Airline Reservation System*************************************" << endl;
	
	cout << setw(30)<<"************************************************************************************************" << endl;

	cout << setw(30) << "1.Add a passenger" << endl;

	cout << setw(30) << "2.Flight schedule" << endl;

	cout << setw(30) << "3.Make a Reservation" << endl;

	cout << setw(30) << "4. Display  tickets" << endl;

	cout << setw(30) << "5.Passenger information" << endl;

	
	cout << setw(30) << "0.Exit" << endl;

	cout << endl;

	cout << "*************************************************************************************************";



	cin >> selection;



	return selection;



}



void displayFlightSchedule()

{


	Database flightdb;

	flightdb.addFlight("Emirates", "EK209", "06/22/2019", "0550PM", "Seattle","Dubai");

	flightdb.addFlight("Delta", "DL400", "06/25/2019", "0630AM", "Miami", "Seattle");

	flightdb.addFlight("Alaska", "AK305", "06/22/2019", "0500PM", "Seattle", "Anchorage");

	flightdb.addFlight("United", "UN502", "06/22/2019", "0730AM", "Seattle", "Boston");

	flightdb.displayAllFlights();
	
	
	
}

void addNewPassenger(Database& db)

{

	string firstName;

	string lastName;

	string emailAddress;

	string phoneNo;

	string passportNo;



	cout << "First name? ";

	cin >> firstName;

	cout << "Last name?  ";

	cin >> lastName;

	cout << "Your e-mail address? ";

	cin >> emailAddress;

	cout << "Your phone number? ";

	cin >> phoneNo;

	cout << "Your Passport Number?";

	cin >> passportNo;



	db.addPassenger(firstName, lastName, emailAddress, phoneNo,passportNo);

}


void MakeReservation(Database& db)

{

	string airlineName;

	string flightNo;

	int PassengerId;

	string seatClass;

	string seatPosition;

	int NoofBags;

	string DateofDeparture;

	string TimeofDeparture;

	string DestinationCity;

	string DepartureCity;




	cout << "Please choose airline Name:" << endl;

	cin >> airlineName;


	cout << "Please enter the flight number:" << endl;


	cin >> flightNo;

	cout << "Please enter the Passenger Id:" << endl;


	cin >> PassengerId;


	cout << "Please choose a cabin class (Business/Comfort+/Economy)" << endl;


	cin >> seatClass;


	cout << "Please choose a seat position(Aisle/Middle/Window)" << endl;

	cin >> seatPosition;


	cout << "Please enter No of Bags" << endl;

	cin >> NoofBags;

	cout << "Please enter the departure date:" << endl;

	cin >> DateofDeparture;



	cout << "Please enter Departure time:" << endl;

	cin >> TimeofDeparture;


	cout << "Please enter Departure City:" << endl;

	cin >> DepartureCity;

	cout << "Please enter Destination City:" << endl;

	cin >> DestinationCity;

	db.AddReservation(airlineName, flightNo, PassengerId, seatClass, seatPosition, NoofBags, DateofDeparture, TimeofDeparture, DepartureCity, DestinationCity);

	
  }


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


