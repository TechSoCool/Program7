// Sterling Gerard
// April 10, 2022
// For this program we are using objects, class, Inheritance, Polymorphism, and virtual function.  
// Programming Challenge 1 & #3 Page 982 - Chapter 15  E9

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// Created a Employee Class 
class Employee
{
		private:
			string eName;
			int eNum;
			int hireDate;
		public:
			// set Employee Name, Number and Hire Date
			void setEmployName(string eName);
			void setEmployNum(int);
			void setHireDate(int);
			// get Employee Name, Numnber and Hire Date
			string getEmployName() const;
			int getEmployNum() const;
			int gethireDate() const;

			Employee(); // Constructor
};
// set & get 
void Employee::setEmployName(string eName)
{
	eName = eName;
}

void Employee::setEmployNum(int a)
{
	eNum = a;
}

void Employee::setHireDate(int d)
{
	hireDate = d;
}

string Employee::getEmployName() const
{
	return eName;
}

int Employee::getEmployNum() const
{
	return eNum;
}

int Employee::gethireDate() const
{
	return hireDate;
}

Employee::Employee()
{
	cout << "Please enter the information about the employee, ";

}

// creating ProductionWorker  that is derived from the Employee class
class ProductionWorker:public Employee
{
	private:
		int shift;
		double hourlyPay;
	public:
		// set & get
		void setShift(int);
		void setHrPay(double);
		int getShiftDayOrNight() const;
		double getHrPay() const;
		ProductionWorker(); // Constructor
};

void ProductionWorker::setShift(int s) 
{
	shift = s;
}

void ProductionWorker::setHrPay(double p)
{
	hourlyPay = p;
}

int ProductionWorker::getShiftDayOrNight() const
{
	return shift;
}

double ProductionWorker::getHrPay()const
{
	return  hourlyPay;
}

ProductionWorker::ProductionWorker()
{
	cout << "The responses will display after the information is received ";
}

int main()
{
	ProductionWorker information;
	string name;
	int num;
	int date;
	int shift;
	double pay;

	// user enter the employee information
	cout << "Enter the employee name: ";
	cin >> name;
	cout << "Enter the employee number: ";
	cin >> num;
	cout << "Enter the employee hire date use this format" << endl;
	cout << "2 digit month, 2 digit day, 4 digit year as one number: " << endl;
	cout << "(Example September 1, 2021 = 09012021)";
	cin >> date;
	// Enter the shift of the employee shift
	cout << "Which shift does the employee work on? " << endl;
	cout << "Enter 1, 2 or 3: \n";
	cin >> shift;
	// Enter the pay for the employee 
	cout << "How much does the employee make per hour? ";
	cin >> pay;

	information.setEmployName(name);
	information.setEmployNum(num);
	information.setHireDate(date);
	information.setShift(shift);
	information.setHrPay(pay);

	//this is the employee information as follows
	cout << "\n\nThis is data you entered for this employee as follows: \n\n" ;
	cout << "Employee Name: " << information.getEmployName() << endl;
	cout << "Employee Number: " << information.getEmployNum() << endl;
	cout << "Employee Hire Date: " << information.gethireDate() << endl;
	cout << "Employee Shift: " << information.getShiftDayOrNight() << endl;
	cout << setprecision(2) << fixed;
	cout << "Employee Pay Rate: $" << information.getHrPay() << endl;

	system("pause");
	return 0;
}