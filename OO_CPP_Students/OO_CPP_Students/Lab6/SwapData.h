#pragma once

namespace Lab6
{
	class SwapData
	{
		int _num1;
		int _num2;
		/// <summary>
		/// Properties of the class
		/// </summary>
	public:
		//Implement the getters and setters
		/// <summary>
		/// Method to swap values
		/// </summary>
		void SwapValues();

		/// <summary>
		/// Method to display values before and after swapping
		/// </summary>
		/// <param name="str"></param>
		void DisplayValues(string str);
	};
}
