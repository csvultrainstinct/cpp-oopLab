#pragma once

namespace Lab10
{
	class Employee
	{
		string _empid;
		string _name;
		double _basic;
		double _hra;
		double _allowancePercentage;
		int _role;

		/// <summary>
		/// Properties of the class
		/// </summary>

	public:
		//Implement the constructor and Getters and Setters

		/// <summary>
		/// Method to get the salary of an employee
		/// </summary>
		/// <returns></returns>
		double GetSalary();

		/// <summary>
		/// Method to get the allowance of an employee
		/// </summary>
		/// <returns></returns>
		double GetAllowance();
	};
}
