#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {

    private:
    std::string firstName;
    std::string lastName;
    std::string seatNumber;
    std::string flightNumber;
    std::string classOfService;

    public:
    Passenger(std::string firstName, std::string lastName, std::string seatNumber, std::string flightNumber, std::string classOfService);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getSeatNumber() const;
    std::string getFlightNumber() const;
    std::string getClassOfService() const;

    void setFirstName(const std::string &firstName);
    void setLastName(const std::string &lastName);
    void setSeatNumber(const std::string &seatNumber);
    void setFlightNumber(const std::string &flightNumber);
    void setClassOfService(const std::string &classOfSrvice);

};

#endif