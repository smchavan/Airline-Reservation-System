

#include<iostream>

#include<stdexcept>

#include "Database.h"

#include<vector>
#include <iomanip>



using namespace std;



namespace AirlineApp 
{
	//************************Passenger Data Handling******************************************************	


	Passenger& Database::addPassenger(const string& firstName, const string& lastName,

		const string& emailId, const string& phoneNo, const string& passportNo)

	{

		Passenger thePassenger(firstName, lastName, emailId, phoneNo, passportNo);

		thePassenger.setBookingNo(mNextBookingID++); 

		mPassenger.push_back(thePassenger); // Store it in the vector



		return mPassenger[mPassenger.size() - 1];// Returning the address of this Passenger



	}

	

	Passenger& Database::getPassenger(const string& firstName,

		const string& lastName) {

		for (auto& Passenger : mPassenger) {

			if (Passenger.getFirstName() == firstName &&

				Passenger.getLastName() == lastName) 
			{

				return Passenger;

			}

		}

		throw logic_error("No passenger found.");

	}


	void Database::displayPassengerDetails() const

	{

		for (const auto& passenger : mPassenger) {

			passenger.displayPassengerDetails();

		}

	}

//************************Flight Data Handling******************************************************	

		Flight& Database::addFlight(const string& airlineName, const string& flightNo,

			const string& DateofDeparture, const string& Timeofdeparture,

		    const string& DepartureCity, const string& DestinationCity )
	{

		Flight theFlight(airlineName, flightNo, DateofDeparture,

		Timeofdeparture, DepartureCity, DestinationCity); 

		
		mFlight.push_back(theFlight);
		
		return mFlight[mFlight.size() - 1]; // Returningthe address of the saved flight data at the end of the vector

	}

		
		vector<Flight>& Database::getAllFlights() const

	{
			std::vector<Flight> mFlight;
			return mFlight;

	}



	void Database::displayAllFlights() const

	{	
		//Database db;
		

		Flight flight;

		cout << endl;

		cout << endl;

		cout << "-------------------------------------------------------- " << endl;

		cout << "******Available Flights for Booking ******" << endl;

		cout << "-------------------------------------------------------- " << endl;

		cout << "Name of the Airline" <<setw(10)<<"Flight No." <<setw(10)<< "Date of Departure " << "Departure City" <<" " << "Arrival City" <<  " " << "Available Seats" << endl;

		cout << "-------------------------------------------------------- " << endl;

		for (auto& flight : mFlight)

		{

			flight.displayFlightInfo();
			

		}


		cout << endl;

	}




	Flight& Database::getFlight(const string& airlineName, const string& flightNo,

				const string& DateofDeparture, const string& TimeofDeparture,

		        const string& destination, const string& TimeofArrival)  



	{      

		for (auto& flight : mFlight)

		{

			if

				(flight.getAirlineName() == airlineName &&

					flight.getFlightNo() == flightNo &&

					flight.getDateofDeparture() == DateofDeparture &&

					flight.getTimeofDeparture() == TimeofDeparture &&

					flight.getDestinationofFlight() == destination &&

					flight.getTimeofArrival() == TimeofArrival)

			{

				return flight;

			}

		}

		// if there is no flight  to match the data then thrwo the exception below

		throw logic_error("No flights found.");

	}



	Flight& Database::getFlight(const string& flightNo)

	{

		for (auto& flight : mFlight) {

			if (flight.getFlightNo() == flightNo) {

				return flight;

			}

		}

		throw logic_error("No flights found.");

	}

	//*********************** Reservation Data Handling******************************************************	

	Reservation& Database::AddReservation(const string& AirlineName, const string& FlightNo,const int& PassengerId, const string& SeatClass, const string& SeatPosition,
		const int& NoofBags, const string& DateofDeparture, const string& TimeofDeparture, const string& DepartureCity,
		const string& DestinationCity)
	{
		Reservation theReservation(AirlineName, FlightNo, PassengerId, SeatClass, SeatPosition,
			NoofBags, DateofDeparture, TimeofDeparture, DepartureCity, DestinationCity);
	
		theReservation.setReservationNo(mNextReservationNo++);
		theReservation.getReservationNo();


		mReservation.push_back(theReservation);

		theReservation.DisplayUserReservation();

		return mReservation[mReservation.size() - 1];

	}
	Reservation& Database::getReservation(const int& reservationNo) 

	{
		cout << reservationNo;
		cout<<mReservation.size();
		
		for (auto& reservation : mReservation)
		{
			//reservation.DisplayUserReservation();

			if ((reservation.getReservationNo()) == reservationNo)
			{

				return reservation;

			}

		}

		cout << "Please Enter the Valid Reservation No." << endl;
		//throw logic_error("No Reservation found.");

	}


	void Database::DisplayTicketInformation() 

	{
		int myreservationNo;
		Database Db;
		Reservation myreservation;
		
		cout << "Please Enter your Reservation No" << endl;

		cin >> myreservationNo;

		myreservation = Db.getReservation(myreservationNo);
	
	}


	
	void Database::DisplayAllTickets()
	{
		

			for (const auto& reservation : mReservation) 
			{

				reservation.DisplayUserReservation();

			}

		
	}
	
		
}




