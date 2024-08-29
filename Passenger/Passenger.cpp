#include <iostream>
#include <string>
#include "Passenger.h"

Passenger::Passenger(std::string firstName, std::string lastName, std::string seatNumber, std::string flightNumber, std::string classOfService) 
: firstName(firstName), lastName(lastName), seatNumber(seatNumber), flightNumber(flightNumber), classOfService(classOfService) {

}

std::string Passenger::getFirstName() const{

    return firstName;
}

std::string Passenger::getLastName() const{

    return lastName;
}

std::string Passenger::getSeatNumber() const{

    return seatNumber;
}

std::string Passenger::getFlightNumber() const{

    return flightNumber;
}

std::string Passenger::getClassOfService() const{

    return classOfService;
}

void Passenger::setFirstName(const std::string &firstName){

    // firstName = firstName;
}

void Passenger::setLastName(const std::string &lastName){

    // lastName = lastName;
}

void Passenger::setSeatNumber(const std::string &seatNumber){

    // seatNumber = seatNumber;
}

void Passenger::setFlightNumber(const std::string &flightNumber){

    // flightNumber = flightNumber;
}

void Passenger::setClassOfService(const std::string &classOfSrvice){

    // classOfService = classOfService;
}

