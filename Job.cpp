/*
Name:Margiben Alkeshkumar Soni
email: masoni1@myseneca.ca
Student Id: 146748207
Section: NFF
Date: 27-02-2022
*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#include <iomanip>
#include <exception>
#include "Job.h"
sdds::Job::Job() : title{""}, workUnit{0}, remainingUnit{0}, Active{false} {}

sdds::Job::Job(std::string title) : title{title} 
{
    workUnit= title.length() % 10 + 1;
    remainingUnit = workUnit;
    Active = true;
}

bool sdds::Job::is_active() const 
{
    return Active;
}

bool sdds::Job::is_complete() const 
{
    return remainingUnit == 0;
}

std::string sdds::Job::name() const 
{
    return title;
}

void sdds::Job::display(std::ostream& op) const

 {
    op << "`" << title << "` ";
    op << "[" << std::setfill('0') << std::setw(2) << remainingUnit << "/";
    op << std::setfill('0') << std::setw(2) << workUnit << " remainingUnit]";
}

std::ostream& sdds::operator<<(std::ostream& op, Job& job) 
{
    job.display(op);
    return op;
}

void sdds::Job::operator()(unsigned int workUnit) 
{
    if (workUnit > remainingUnit) 
{
        remainingUnit = 0;
        Active = false;
        throw std::underflow_error("The handled workUnit [" + std::to_string(workUnit) + "], is more than the remaining work [" + std::to_string(remaining) + "].");
    } 
else 
{
        remainingUnit-= workUnit;

        if (remainingUnit== 0) 
{
            Active = false;
        }
    }
}