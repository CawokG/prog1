namespace Prog1
{
	// non-zero elements form an array
	struct Cell
	{
		unsigned row;		// position in matrix
		unsigned column;	// position in matrix
		double value;		// it's value
		struct Cell *next;
	};

	struct Matrix
	{
		unsigned n_rows;	// number of rows
		unsigned n_columns;	// number of columns
		Cell *elements;	// pointer to array of it's non-zero elements
	};

	template <typename T>
	int getNum(T &num)
	{
		std::cin >> num;
		if (!std::cin.good())
			return -1;	// input error
		return 1;
	}

	inline bool isgreater(double a, double b)
	{
		return a > b;
	}
	
	inline bool isless(double a, double b)
	{
		return a < b;
	}

	int getMatrix();

}
