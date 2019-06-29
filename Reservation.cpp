#include"Reservation.h"
#include <stdexcept>
#include <string>
//#include "Database.h"
#include <iomanip>
#include <iostream>
#include<vector>

using namespace std;

namespace AirlineApp
{
	
	
	Reservation::Reservation(const string& AirlineName, const string& FlightNo, const int& PassengerId, const string& SeatClass, const string& SeatPosition,
		const int& NoofBags, const string& DateofDeparture, const string& TimeofDeparture, const string& DepartureCity,
		const std::string& DestinationCity):mAirlineName(AirlineName),mFlightNo(FlightNo), mPassengerId(PassengerId), mSeatclass(SeatClass), mSeatPosition(SeatPosition), 
		mNoofBags(NoofBags),mDateofDeparture(DateofDeparture), mTimeofDeparture(TimeofDeparture), mCityofDeparture(DepartureCity), mDestinationCity(DestinationCity)
	{}

	void Reservation::setAirlineName(const string AirlineName)

	{

		mAirlineName = AirlineName;

	}

	const::string Reservation::getAirlineName() const

	{

		return mAirlineName;

	}
	

	void Reservation::setFlightNo(std::string flightno)
	{
		mFlightNo = flightno;
	}

	std::string Reservation::getFlightNo() const
	{
		return mFlightNo;
	}

	void Reservation::setPassengerId(int Passengerid)
	{
		mPassengerId = Passengerid;
	}
	int Reservation::getPassengerId() const
	{
		return mPassengerId;
	}
	
	void Reservation::setSeatClass(std::string SeatClass)
	{
		mSeatclass = SeatClass;
	}
	std::string Reservation::getSeatClass() const
	{
		return mSeatclass;
	}


	void Reservation::setSeatPosition(string SeatPosition)
	{
		mSeatPosition = SeatPosition;
	}

	string Reservation::getSeatPosition() const
	{
		return mSeatPosition;
	}



	void Reservation::setNoofBags(int noofbags)
	{
		mNoofBags = noofbags;
	}
	int Reservation::getNoofBags() const
	{
		return mNoofBags;
	}

	void Reservation::setDateofDeparture(std::string DateofDeparture)
	{
		mDateofDeparture = DateofDeparture;
	}

	std::string Reservation::getDateofDeparture() const
	{
		return mDateofDeparture;
	}

	void Reservation::setTimeofDeparture(std::string DateofDeparture)
	{
		mTimeofDeparture = DateofDeparture;
	}

	std::string Reservation::getTimeofDeparture() const
	{
		return mTimeofDeparture;
	}
	

	void Reservation::setCityofDeparture(std::string DepartureCity)
	{
		mCityofDeparture = DepartureCity;
	}

	std::string Reservation::getCityofDeparture() const
	{
		return mCityofDeparture;
	}
	
	void Reservation::setDestinationCity(std::string DestinationCity)
	{
		mDestinationCity = DestinationCity;
	}

	std::string Reservation::getDestinationCity() const
	{
		return mDestinationCity;
	}

	

	void Reservation::setReservationNo( const int reservationNo)
	{
		mReservationNo = reservationNo;
	}
	int Reservation::getReservationNo() const
	{
		return mReservationNo;
	}

	void Reservation::DisplayUserReservation() const
	{
		cout << "--------------------------------------------------------------------------------------------" << endl;
		

		
		cout << "Your ReservationInformation :" << endl;
		
		cout << setw(10) << "Reservation No" << setw(10) << "Airline" << setw(0) << "FlightNo" << setw(10) << "PassengerId" << setw(10) << "SeatClass" << "Seat Position"<<endl;

		cout << setw(10)<<getReservationNo() << setw(10)<<getAirlineName() << setw(10) << getFlightNo()<< setw(10)<<getPassengerId() << setw(10) <<getSeatClass()<< setw(10)<<getSeatPosition() << endl;

		cout << "--------------------------------------------------------------------------------------------" << endl;
		
		cout << setw(10) << "No of Bags" << setw(10) << "Departure Date" << setw(10) << "Deaparture Time" << setw(10) << "Departure City" << "Destination City"<< endl;

		cout << setw(10)<<getNoofBags() << setw(10)<<getDateofDeparture() << setw(10)<<getTimeofDeparture() << setw(10)<<getCityofDeparture() << setw(10) <<getDestinationCity()<< endl;

		cout << "--------------------------------------------------------------------------------------------" << endl;

	
	}
	
}

