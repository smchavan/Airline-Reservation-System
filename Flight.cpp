


#include<string>
#include"Flight.h"
using namespace std;
#include<iomanip>



namespace AirlineApp{

	Flight::Flight(const string& airlineName, const string& flightno, const string& departureDate, const string& departureTime, const string& DepartureCity, const string& destination):
		mAirlineName(airlineName),mFlightNo(flightno),mDateofDeparture(departureDate),mTimeofDeparture(departureTime),mDepartureCity(DepartureCity),mDestination(destination)
	{}



void Flight::setSeatNo(int seatNumber)

{

	mSeatNumber = seatNumber;

}

int Flight::getSeatNo() const

{

	return mSeatNumber;

}



void Flight::setAirlineName(const string& airline)

{

	mAirlineName = airline;

}

const::string& Flight::getAirlineName() const

{

	return mAirlineName;

}
void Flight::setFlightNo(const string& flightNumber)

{

	mFlightNo = flightNumber;

}

const::string& Flight::getFlightNo() const

{

	return mFlightNo;

}


void Flight::setDateofDeparture(const string& departureDate)

{

	mDateofDeparture = departureDate;

}

const::string& Flight::getDateofDeparture() const

{

	return mDateofDeparture;

}

void Flight::setTimeofDeparture(const string& departureTime)

{

	mTimeofDeparture = departureTime;

}

const::string& Flight::getTimeofDeparture() const 

{

	return mTimeofDeparture;

}

void Flight::setTimeofArrival(const string& arrivalTime)
{
	mTimeofArrival = arrivalTime;
}

const string& Flight::getTimeofArrival() const
{
	return mTimeofArrival;
}

const string& Flight::getDepartureCity() const
{
	return mDepartureCity;
}

const void Flight::setDepartureCity(const string& DepartureCity)
{
	mDepartureCity = DepartureCity;
}

void Flight::setDestinationofFlight(const string& destination)
{
	mDestination = destination;

}


const string& Flight::getDestinationofFlight() const
{
	return mDestination;
}




void Flight::setSeatClass(const string& seatClass)
{
	mSeatClass = seatClass;
}

const string& Flight::getSeatClass() const
{
	return mSeatClass;
}

void Flight::setSeatPosition(const string& seatPosition)
{
	mSeatPosition = seatPosition;

}

const string& Flight::getSeatPosition() const
{
	return mSeatPosition;
}





void Flight::displayFlightInfo() const

{

	//cout << "Your Flight Booking Information" << endl;

	

	//cout << setw(10) << "Airline Name" << setw(10) << "Flight Number" << setw(10)<<"Dateo f Departure" <<setw(10)<<"Time of Departure"<<setw(10)<< "Departure City"<< setw(10) << "DestinationCity" << setw(10) << endl;
	
	

	cout << setw(15) << getAirlineName() << setw(15) << getFlightNo() << setw(15) << getDateofDeparture() << setw(15) << getTimeofDeparture() << setw(15) << getDepartureCity() << setw(15) << getDestinationofFlight() << endl;


	
	
	cout << endl;



}



}

