# SkyLink Airways – Airline Reservation & Flight Management System

## Project Information

**Project:** SkyLink Airways – Airline Reservation & Flight Management System
**Student:** Syeda Maryam Gilani
**Roll Number:** 2025-SC-01
**Department:** Software Engineering
**University:** University of Azad Jammu and Kashmir
**Instructor:** Engineer Zishan

---

## 1. Project Overview

SkyLink Airways is a C++ Object-Oriented Programming project designed to manage airline flights, passengers, and ticket bookings.

The system provides basic airline management operations such as:

* Adding and managing flights
* Registering passengers
* Booking tickets
* Cancelling tickets
* Searching for flights
* Managing passenger records
* Displaying passenger booking details
* Generating occupancy reports
* Generating revenue reports
* Saving and restoring system data

The project demonstrates important Object-Oriented Programming concepts, STL containers, templates, exception handling, operator overloading, file handling, and dynamic memory management.

---

## 2. Problem Scenario

A regional airline, SkyLink Airways, manages its flight and booking information through spreadsheets. As the airline grows, this approach can become error-prone and difficult to maintain.

Common problems include:

* Overbooking flights
* Losing passenger records
* Incorrect ticket information
* Difficult cancellation management
* Incorrect revenue calculations
* Difficulty searching and organizing records

This project provides a simple C++ based management system to organize these operations.

---

## 3. Main Features

### Flight Management

* Add Domestic flights
* Add International flights
* Add Charter flights
* List all flights
* Search for a flight
* Remove a flight
* Track total and available seats
* Track flight revenue
* Calculate flight occupancy

### Passenger Management

* Register passengers
* Support three passenger classes:

  * Economy
  * Business
  * First Class
* List passengers
* Sort passengers by name
* Remove passengers
* Track baggage allowance
* Track loyalty multiplier
* Calculate cancellation refund percentage

### Ticket Management

* Book tickets
* Cancel tickets
* Store passenger and flight information
* Store seat number
* Store fare
* Store booking status
* Display passenger booking details

### Reports

* Flight occupancy report
* Revenue report
* Passenger booking details

### Data Persistence

The system supports saving and loading data using text files:

* `state.txt`
* `sample_data.txt`

Sample data is provided for demonstration.

---

## 4. Object-Oriented Programming Concepts

### Abstraction

`Flight` is an abstract base class containing pure virtual functions.

```cpp
virtual string type() const = 0;
virtual double baseFare() const = 0;
virtual void show() const = 0;
```

### Inheritance

The following classes inherit from `Flight`:

* `DomesticFlight`
* `InternationalFlight`
* `CharterFlight`

The following classes inherit from `Passenger`:

* `EconomyPassenger`
* `BusinessPassenger`
* `FirstClassPassenger`

### Polymorphism

Virtual functions allow different flight and passenger types to provide their own behavior.

For example, different flight types have different fare calculations.

### Encapsulation

Class data members are protected or private, while public member functions provide controlled access to the data.

### Operator Overloading

The project uses operator overloading for displaying objects and comparing tickets.

Examples:

```cpp
operator<<
operator==
```

### Function Templates

The project contains a generic search utility in `SearchUtils.h`:

```cpp
template <class T, class Predicate>
T* findFirst(vector<T*>& collection, Predicate condition)
```

It can be used to search different types of objects.

### Exception Handling

The project defines custom exceptions including:

* `FlightFullException`
* `InvalidCancellationException`

These exceptions are thrown and caught when appropriate.

---

## 5. STL Features Used

The project uses several Standard Template Library features.

### `vector`

Used to store:

* Flights
* Passengers
* Tickets

### `unordered_map`

Used for fast passenger ID lookup.

```cpp
unordered_map<string, Passenger*> passengerMap;
```

### `sort`

Passengers can be sorted alphabetically by name.

```cpp
sort(passengers.begin(), passengers.end(), ...);
```

---

## 6. Project Structure

```text
SkyLink-Airways/
│
├── main.cpp
│
├── Airline.h
├── Airline.cpp
│
├── Flight.h
├── Flight.cpp
│
├── Passenger.h
├── Passenger.cpp
│
├── Ticket.h
├── Ticket.cpp
│
├── Exception.h
├── Exception.cpp
│
├── SearchUtils.h
│
├── sample_data.txt
├── Makefile
└── README.md
```

### File Description

| File              | Purpose                           |
| ----------------- | --------------------------------- |
| `main.cpp`        | Program entry point and main menu |
| `Airline.h`       | Airline class declaration         |
| `Airline.cpp`     | Airline management operations     |
| `Flight.h`        | Flight hierarchy declarations     |
| `Flight.cpp`      | Flight implementations            |
| `Passenger.h`     | Passenger hierarchy declarations  |
| `Passenger.cpp`   | Passenger implementations         |
| `Ticket.h`        | Ticket class declaration          |
| `Ticket.cpp`      | Ticket implementation             |
| `Exception.h`     | Custom exception declarations     |
| `Exception.cpp`   | Custom exception implementations  |
| `SearchUtils.h`   | Generic search function template  |
| `sample_data.txt` | Demonstration data                |
| `Makefile`        | Build instructions                |
| `README.md`       | Project documentation             |

---

## 7. Requirements

To build the project, you need:

* A C++ compiler supporting C++17
* GNU g++ compiler
* Make utility for using the Makefile

The project is intended to compile using:

```bash
g++ -std=c++17 -Wall -Wextra
```

---

## 8. Building the Project

### Using g++

From the project directory, run:

```bash
g++ -std=c++17 -Wall -Wextra main.cpp Airline.cpp Flight.cpp Passenger.cpp Ticket.cpp Exception.cpp -o airline
```

This compiles all implementation files and creates an executable named:

```text
airline
```

---

## 9. Running the Program

After successful compilation, run:

### Windows

```bash
airline.exe
```

### Linux/macOS

```bash
./airline
```

The program displays the main menu:

```text
========== AIRLINE MANAGEMENT SYSTEM ==========
  1.  Add Flight
  2.  List Flights
  3.  Search Flight
  4.  Remove Flight
  5.  Register Passenger
  6.  List Passengers
  7.  Remove Passenger
  8.  Book Ticket
  9.  Cancel Ticket
  10. Passenger Booking Details
  11. Occupancy Report
  12. Revenue Report
  13. Save System State
  0.  Exit
================================================
```

---

## 10. Building with the Makefile

The project includes a `Makefile`.

To build the program using the Makefile:

```bash
make
```

The Makefile uses:

```text
-std=c++17
-Wall
-Wextra
```

To remove generated object files and the executable:

```bash
make clean
```

---

## 11. Sample Data

The project includes `sample_data.txt` containing demonstration data.

The sample dataset contains:

* 10 flights
* 8 passengers
* 12 tickets

The flights include:

* Domestic flights
* International flights
* Charter flights

The passengers include:

* Economy passengers
* Business passengers
* First Class passengers

The program can load the sample data when no saved `state.txt` file is available.

---

## 12. Data Files

### `sample_data.txt`

Contains predefined demonstration data for flights, passengers, and tickets.

### `state.txt`

Stores the current system state when the user selects:

```text
13. Save System State
```

The system also saves its state automatically when exiting through option `0`.

---

## 13. Memory Management

The project uses dynamic memory allocation for flight, passenger, and ticket objects.

The `Airline` class provides a destructor that releases the dynamically allocated objects when the system object is destroyed.

This helps prevent memory leaks.

---

## 14. Academic Purpose

This project was developed as an Object-Oriented Programming project for the Department of Software Engineering at the University of Azad Jammu and Kashmir.

It demonstrates practical implementation of:

* Classes and objects
* Inheritance
* Abstraction
* Polymorphism
* Encapsulation
* Operator overloading
* Templates
* Exception handling
* STL containers and algorithms
* File handling
* Dynamic memory management

---

## 15. Author

**Syeda Maryam Gilani**
**Roll Number:** 2025-SC-01
**Department of Software Engineering**
**University of Azad Jammu and Kashmir**

**Instructor:** Engineer Zeeshan
