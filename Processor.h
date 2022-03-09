/*
Name:Margiben Alkeshkumar Soni
email: masoni1@myseneca.ca
Student Id: 146748207
Section: NFF
Date: 27-02-2022
*/

/*I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.*/

#ifndef SDDS_PROCESSOR_H
#define SDDS_PROCESSOR_H
#include <string>
#include <functional>
#include "Job.h"
#include "CentralUnit.h"
namespace sdds {
    class Processor {
        CentralUnit<Processor>* m_host;
        std::string m_brand;
        std::string m_code;
        int m_power;
        Job* m_current = nullptr;
        void (sdds::CentralUnit<sdds::Processor>::* callback)(CentralUnit<Processor>&, Processor*) = nullptr;
        std::function<void(Processor*)> error = nullptr;
        public:
        Processor(CentralUnit<Processor>* host, std::string brand, std::string code, int power);
        void run();
        explicit operator bool() const;
        Processor& operator+=(Job*& job);
        Job* get_current_job() const;
        ~Processor();
        void on_complete(void (sdds::CentralUnit<sdds::Processor>::* callback)(CentralUnit<Processor>&, Processor*));
        void on_error(std::function<void(Processor*)> error);
        void operator()();
        Job* free();
        friend std::ostream& operator<<(std::ostream&, const Processor&);
        void complete_job();
    };
    std::ostream& operator<<(std::ostream&, const Processor&);
};

#endif