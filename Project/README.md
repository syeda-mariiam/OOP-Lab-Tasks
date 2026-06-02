# ✈️ Airline Reservation & Flight Management System

**Course:** Object-Oriented Programming (C++) <br>
**Assignment Type:** Problem-Based Learning (PBL) — Individual Project <br>
**Student Name:** Mariam <br>
**Roll NO:** 2025-SE-01 <br>

---

# 📖 Project Overview

The Airline Reservation & Flight Management System is a console-based application developed in C++ using Object-Oriented Programming principles. The system provides a simple and efficient way to manage airline operations, including flight management, passenger registration, ticket booking, ticket cancellation, occupancy reporting, and data persistence.

The project was designed to simulate a real-world airline reservation environment while demonstrating the practical application of core OOP concepts such as abstraction, encapsulation, inheritance, and polymorphism.

---

# 🎯 Key Features

### Flight Management

* Add new flights
* View all available flights
* Track seat availability
* Support multiple flight categories

### Passenger Management

* Register passengers
* View passenger details
* Support different passenger classes

### Ticket Management

* Book flight tickets
* Assign seat numbers
* Cancel reservations
* View all booked tickets

### Reporting

* Flight occupancy report
* Available seat tracking
* Flight utilization monitoring

### Data Persistence

* Save flights, passengers, and ticket records
* Preserve system data between program executions

---

# 📂 Project Structure

```text
Airline-Reservation-System/
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
├── flights.txt
├── passengers.txt
├── tickets.txt
│
├── UML_Diagram.png
│
└── README.md
```

---

# ⚙️ Class Architecture

## Flight Hierarchy

```text
Flight (Abstract)
│
├── DomesticFlight
└── InternationalFlight
```

### Flight Responsibilities

* Store flight information
* Manage seat availability
* Calculate base fare
* Display flight details

---

## Passenger Hierarchy

```text
Passenger (Abstract)
│
├── EconomyPassenger
├── BusinessPassenger
└── FirstClassPassenger
```

### Passenger Responsibilities

* Store passenger information
* Calculate discounts
* Calculate refund percentages
* Display passenger details

---

## Ticket Class

The Ticket class acts as a bridge between passengers and flights.

Each ticket stores:

* Passenger information
* Flight information
* Seat number
* Fare amount
* Booking status

---

## Airline Class

The Airline class serves as the central management system.

It is responsible for:

* Managing flights
* Managing passengers
* Managing tickets
* Generating reports
* Saving system data

---

# 🚀 How to Build and Run

## Using Dev-C++

1. Open Dev-C++
2. Open the project folder
3. Add all `.cpp` and `.h` files
4. Compile and Run

---

## Using g++

Compile the project:

```bash
g++ -std=c++17 -Wall -Wextra main.cpp Airline.cpp Flight.cpp Passenger.cpp Ticket.cpp -o airline
```

Run the executable:

```bash
./airline
```

### Windows (MinGW)

```bash
g++ -std=c++17 -Wall -Wextra main.cpp Airline.cpp Flight.cpp Passenger.cpp Ticket.cpp -o airline.exe
```

```bash
airline.exe
```

---

# 📋 Sample Menu

```text
=================================
 AIRLINE RESERVATION SYSTEM
=================================

1. Add Flight
2. Add Passenger
3. Show Flights
4. Show Passengers
5. Book Ticket
6. Show Tickets
7. Cancel Ticket
8. Occupancy Report
9. Save Data
0. Exit
```

---

# ✈️ Supported Flight Types

| Flight Type          | Description                                   |
| -------------------- | --------------------------------------------- |
| Domestic Flight      | Flights operating within the country          |
| International Flight | Flights operating between different countries |

---

# 👤 Supported Passenger Types

| Passenger Type        | Discount         | Refund Policy   |
| --------------------- | ---------------- | --------------- |
| Economy Passenger     | Basic Discount   | Standard Refund |
| Business Passenger    | Higher Discount  | Improved Refund |
| First Class Passenger | Maximum Discount | Highest Refund  |

---

# 🧠 OOP Concepts Demonstrated

| Concept                   | Implementation                                     |
| ------------------------- | -------------------------------------------------- |
| Encapsulation             | Private and protected data members                 |
| Abstraction               | Abstract classes `Flight` and `Passenger`          |
| Inheritance               | Flight and Passenger hierarchies                   |
| Polymorphism              | Virtual functions and runtime binding              |
| Dynamic Memory Allocation | Object storage using pointers                      |
| STL Containers            | `vector` used for flights, passengers, and tickets |
| File Handling             | Data persistence through text files                |

---

# 🧪 Testing Summary

The following operations were successfully tested:

✅ Add Flight

✅ Add Passenger

✅ View Flights

✅ View Passengers

✅ Book Ticket

✅ View Tickets

✅ Cancel Ticket

✅ Generate Occupancy Report

✅ Save Data

---

# 📌 Known Limitations

* Uses raw pointers instead of smart pointers.
* Limited search functionality.
* Manual seat allocation.
* Basic file persistence implementation.
* Console-based interface only.
* Advanced revenue reporting not implemented.

---

# 🔮 Future Enhancements

* Smart Pointer Integration (`unique_ptr` / `shared_ptr`)
* Automatic Seat Assignment
* Flight Search by Route and Date
* Revenue Analytics Dashboard
* Enhanced Exception Handling
* Graphical User Interface (GUI)
* Database Integration

---

# 📚 Academic Integrity Statement

This project was developed individually as part of the Object-Oriented Programming (C++) PBL assignment. Any external resources or AI tools were used only for learning, debugging, and understanding concepts. All submitted code has been reviewed, understood, and can be fully explained during the viva examination.

---

**Mariam**

Object-Oriented Programming (C++)
Airline Reservation & Flight Management System
