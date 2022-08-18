#pragma once

namespace Lab11
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
		// Implement the Getters and setters

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

		/// <summary>
		/// Method to get the role description for a given role id
		/// </summary>
		/// <returns></returns>
		string GetRoleDescription();
	};
}
