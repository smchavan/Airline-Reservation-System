#pragma once
#include<iostream>

#include<vector>

#include "Passenger.h"

#include "Flight.h"

#include"Reservation.h"


using std::string;


namespace AirlineApp 
{
	const int kFirstReservationNo = 2000;
	const int kFirstBookingID = 1000;

	const int kFirstFlightNo = 100;

	
	class Database

	{


	public:

		Passenger& addPassenger(const string& firstName, const string& lastName,

			const string& emailId, const string& phoneNo, const string& passportNo);
				
		Passenger& getPassenger(const string& firstName,

			const string& lastName);

		void displayPassengerDetails() const;




		Flight& addFlight(const string& airlineName, const string& flightNo,

			const string& DateofDeparture, const string& Timeofdeparture,

			const string& DepartureCity, const string& DestinationCity);


		Flight& getFlight(const string& airlineName, const string& flightNo,

			const string& Dateofdeparture, const string& Timeofdeparture,

			const string& DepartureCity, const string& destination);

		Flight& getFlight(const string& flightNo);

			   
		void displayAllFlights() const;

		
		void DisplayAllTickets();

		std::vector<Flight>& getAllFlights() const;


		Reservation& AddReservation(const string& AirlineName, const string& FlightNo, const int& PassengerId, const string& SeatClass, const string& SeatPosition,
			const int& NoofBags, const string& DateofDeparture, const string& TimeofDeparture, const string& DepartureCity,
			const string& DestinationCity);

		Reservation& getReservation(const int& ReservationNo);

		void DisplayTicketInformation();

		
	private:

		std::vector<Passenger> mPassenger;

		int mNextBookingID = kFirstBookingID;

		
		std::vector<Flight> mFlight;

		int mNextFlightID = kFirstFlightNo;

		std::vector<Reservation> mReservation;

		int mNextReservationNo = kFirstReservationNo;

		
	};

	



}