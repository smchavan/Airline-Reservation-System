#pragma once
#include<iostream>

#include<string>

using namespace std;





namespace AirlineApp

{
	class Flight

	{

	public:



		Flight() = default;
		Flight(const string& airlineName, const string& flightno, const string& departureDate, const string& departureTime, const string& DepartureCity, const string& destinationCity);

		/*Flight(const string& airlineName,const string& flightNumber,

			const string& departureDate, const string& departureTime,

			const string& destination, const string& arrivalTime, const string& seatClass, const string& seatPosition);*/

		int getSeatNo() const;

		void setSeatNo(int seatNumber);  

		const string& getAirlineName() const;

		void setAirlineName(const string& airline);

		const string& getFlightNo() const;

		void setFlightNo(const string& flightNumber);



		const string& getDateofDeparture() const;

		void setDateofDeparture(const string& departureDate);



		const string& getTimeofDeparture() const;

		void setTimeofDeparture(const string& departureTime);



		const string& getTimeofArrival() const;

		void setTimeofArrival(const string& arrivalTime);



		const string& getDestinationofFlight() const;

		void setDestinationofFlight(const string& destination);



		const string& getSeatClass() const;

		void setSeatClass(const string& seatClass);



		const string& getSeatPosition() const;

		void setSeatPosition(const string& seatPosition);

		const string& getDepartureCity() const;
		
		const void setDepartureCity(const string& DepartureCity);

		void displayFlightInfo() const;

		

		
					   		 	  
	private:
			   
		string mSeatClass;

		string mDepartureCity;

		string mSeatPosition;

		string mAirlineName;

		string mFlightNo = "100";

		string mDateofDeparture;

		string mTimeofDeparture;

		string mTimeofArrival;

		string mDestination;

		int mSeatNumber=-1;

		

	};

}