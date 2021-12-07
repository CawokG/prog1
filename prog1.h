namespace Prog1
{
	// Non-zero elements form an array.
	// Each cell has a smaller sum of row and column
	// than the one that follows it.
	struct Cell
	{
		unsigned row;		// location in matrix
		unsigned column;	// location in matrix
		double value;		// element's value
		struct Cell *next;	// pointer to the next non-zero element
	};

	struct Matrix
	{
		unsigned rows;		// number of rows
		unsigned columns;	// number of columns
		Cell *elements;		// pointer to array of it's non-zero elements
	};

	template <typename T>
	int getNum(T &num)
	{
		std::cin >> num;
		if (!std::cin.good())
			return 1;	// input error
		return 0;
	}

	inline bool isgreater(double a, double b)
	{
		return a > b;
	}
	
	inline bool isless(double a, double b)
	{
		return a < b;
	}
	
	// 
	int getMatrix();

	inline void getNumLooped(T &num, const char *msg)
	{
		std::cout << msg;
		while (getNum(&num))
			std::cout << std::endl << "Input error! Try again -> ";
		std::cout << std::endl;
	}

	// prints matrix
	int output(Matrix);
	
	// looks for an element in certain position
	// returns nullptr if there is not such element
	// in other cases it throws exceptions
	Cell *findCell(Cell *, unsigned row, unsigned column);
}
