#//include <string>

#include <vector>
#include <string>
using namespace std;


#pragma once

namespace AirlineApp
{ 
	
	
		class Reservation
		{


		public:
			
			Reservation() = default;

			Reservation(const std::string& AirlineName, const std::string& FlightNo, const int& PassengerId, const std::string & SeatClass, const std::string & SeatPosition,
				const int& NoofBags, const std::string & DateofDeparture, const std::string & TimeofDeparture, const std::string & DepartureCity, 
				const std::string & DestinationCity);

			

			
			void setAirlineName(const std::string airline);

			const std::string getAirlineName() const;

			void setFlightNo(std::string flightno);
			std::string getFlightNo() const;

			void setPassengerId(int Passengerid);
			int getPassengerId()const;

			void setSeatClass(std::string SeatClass);
			std::string getSeatClass() const;

			void setSeatPosition(std::string SeatPosition);
			std::string getSeatPosition() const;

			void setNoofBags(int noofbags);
			int getNoofBags() const;
					   
			void setDateofDeparture(std::string DateofDeparture);
			std::string getDateofDeparture() const;

			void setTimeofDeparture(std::string TimeofDeparture);
			string getTimeofDeparture() const;

			void setCityofDeparture(std::string CityofDeparture);
			std::string getCityofDeparture() const;

			void setDestinationCity(string DestinationCity);
			string getDestinationCity() const;


			void setReservationNo(const int reservationNo);

			int getReservationNo() const ;

			void DisplayUserReservation() const ;

			private:

			std::string mAirlineName;
			
			std::string mFlightNo;
				
			int mPassengerId;

			std::string mSeatclass;

			std::string mSeatPosition;

			int mNoofBags;
			
			std::string mDateofDeparture;

			std::string mTimeofDeparture;

			std::string mCityofDeparture;

			std::string mDestinationCity;

			int mReservationNo = -1;

		};

	}



