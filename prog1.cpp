#include <iostream>
#include "prog1.h"

namespace Prog1
{
	int getMatrix
	{
		struct Matrix matrix;
		Cell *cell;

		std::cout << "Enter number of rows -> ";
		while (getNum(&matrix.rows))
			std::cout << std::endl << "Input error! Try again -> ";
		
		std::cout << std::endl << "Enter number of columns -> ";
		while (getNum(&matrix.columns))
			std::cout << std::endl << "Input error! Try again -> ";

		std::cout << std::endl << "Enter elements one by one:";
		for (unsigned c_row; c_row < matrix.rows; ++c_row)
		{
			for (unsigned c_column; c_column < matrix.columns; ++c_column)
			{
				matrix.elements = new Cell;
				std::cout << std::endl << "[" << c_row + 1 << "][" << c_column + 1 << "] -> ";
				while (getNum(&))
					std::cout << std::endl << "Input error! Try again -> ";
				
	}
	
	int output(Matrix matrix)
	{			
		Cell *fnd_element = matrix.elements;	// pointer to the first not displayed element
		Cell *c_element;

		for (unsigned c_row; c_row < matrix.rows; ++c_row)
		{
			for (unsigned c_column; c_column < matrix.columns; ++c_column)
			{
				c_element = findCell(fnd_element, c_row, c_column);
				if (c_element) {
					std::cout << c_element << "\t";
					fnd_element = fnd_element->next;
				else
					std::cout << 0f << "\t";
			}
		std::cout << std::endl;
		}
	}

	Cell *findCell(Cell *cell, unsigned row, unsigned column)
	{
		while (cell && cell->row != row && cell->column != column) 
			cell = cell->next;
		return cell;
	}
}
