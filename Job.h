/*
Name:Margiben Alkeshkumar Soni
email: masoni1@myseneca.ca
Student Id: 146748207
Section: NFF
Date: 27-02-2022
*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/


#ifndef SDDS_JOB_H
#define SDDS_JOB_H
#include <string>
#include <iostream>
#include <iomanip>
namespace sdds {
    class Job {
        std::string title;
        unsigned int workUnit;
        unsigned int remainingUnit;
        bool Active;
        public:
        Job();
        Job(std::string);
        bool is_active() const;
        bool is_complete() const;
        std::string name() const;
        void display(std::ostream&) const;
        void operator()(unsigned int);
    };
    std::ostream& operator<<(std::ostream&, Job&);
};

#endif