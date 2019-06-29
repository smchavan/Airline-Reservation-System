#pragma once

#include <string>


namespace AirlineApp
{
	class Passenger
	{
	public:

		Passenger() = default;

		Passenger(const std::string& firstName, const std::string& lastName,

			      const std::string& emailId, const std::string& phoneNo,const std::string& passportNo);
				
			const std::string& getFirstName() const;

			void setFirstName(const std::string& firstName);

			const std::string& getLastName() const;

			void setLastName(const std::string& lastName);

			const std::string& getEmailAddress() const;

			void setEmailAddress(const std::string& emailAddress);

			const std::string& getPhoneNo() const;

			void setPhoneNo(const std::string& phoneNumber);
			
			void setPassportNo(const std::string& passportNo);

			const std::string& getPassportNo() const;

		
			int getBookingNo() const; 

			void setBookingNo(int bookingNo);  

			void displayPassengerDetails() const;
					   
			
	private:
		
		std::string mFirstName;
		std::string mLastName;
		int mBookingNo = -1;
		std::string mPhoneNo;
		std::string mEmailId;
		std::string mPassportNo;
	

	};
}
