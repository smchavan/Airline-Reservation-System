#include<string>
using namespace std;
#include"Passenger.h"
#include <iostream>
#include<iomanip>

namespace AirlineApp 
  {

	
	Passenger::Passenger(const std::string& firstName, const std::string& lastName,

		const std::string& emailId, const std::string& phoneNo, const std::string& passportNo):mFirstName(firstName),mLastName(lastName),
		mEmailId(emailId),mPhoneNo(phoneNo),mPassportNo(passportNo) {}
		
		const::string& Passenger::getFirstName() const
	{

		return mFirstName;

	}

	void Passenger::setFirstName(const string& firstName)
	{

		mFirstName = firstName;

	}



	const::string& Passenger::getLastName() const

	{

		return mLastName;

	}

	void Passenger::setLastName(const string& lastName)

	{

		mLastName = lastName;

	}


	const::string& Passenger::getEmailAddress() const

	{

		return mEmailId;

	}

	void Passenger::setEmailAddress(const string& emailAddress)

	{

		mEmailId = emailAddress;

	}


	void Passenger::setPhoneNo(const string& phoneNumber)

	{

		mPhoneNo = phoneNumber;

	}



	const::string& Passenger::getPhoneNo() const

	{

		return mPhoneNo;

	}

	void Passenger::setPassportNo(const std::string& passportNo)
	{
		mPassportNo = passportNo;
	}



	const std::string& Passenger::getPassportNo() const
	{
		return mPassportNo;
	}



	void Passenger::setBookingNo(int bookingID)

	{

		mBookingNo = bookingID;

	}

	int Passenger::getBookingNo() const

	{

		return mBookingNo;

	}



	

	void Passenger::displayPassengerDetails() const

	{

		cout << "Passenger info:" << endl;

		cout << "---------------------------------------------------------------------------------------------------------" << endl;

		cout << setw(10) << "Passenger ID" << setw(20) << "First name" << setw(20) << "Last name" << setw(20) << "Phone number" << setw(20) << "Email address" << endl;

		cout << "----------------------------------------------------------------------------------------------------------" << endl;

		cout << setw(10) << getBookingNo() << setw(20) << getFirstName() << setw(20) << getLastName() << setw(20) << getPhoneNo() << setw(25) << getEmailAddress() << endl;

		cout << endl;


	}
}
