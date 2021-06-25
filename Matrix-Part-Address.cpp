#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void Zero_Fill_Matrix(char**, int);
void Print_Matrix(char**, int);

void Top_Triangle(char**, int);
void Bottom_Triangle(char**, int);
void Bottom_And_Top_Triangles(char**, int);
void Left_Triangle(char**, int);
void Right_Triangle(char**, int);
void Left_And_Right_Triangles(char**, int);

void Left_Top_Square(char**, int);
void Right_Bottom_Square(char**, int);
void Left_Top_And_Right_Bottom_Squares(char**, int);

void Left_Top_Triangle(char**, int);
void Right_Bottom_Triangle(char**, int);

void Chess(char**, int);
void Chess_Reverse(char**, int);

void Sharp(char**, int);
void Sharp_Reverse(char**, int);

void Lines_Vertical(char**, int);
void Lines_Horizontal(char**, int);

int main()
{
	// Create
	int size;
	cout << "Enter size of matrix: ";
	cin >> size;

	char** matrix = new char*[size];
	for (int i = 0; i < size; i++)
	{
		matrix[i] = new char[size];
	}

	/* Original */
	Zero_Fill_Matrix(matrix, size);
	cout << "Original matrix:" << endl;
	Print_Matrix(matrix, size);


	/* Top triangle */
	Zero_Fill_Matrix(matrix, size);
	Top_Triangle(matrix, size);
	cout << "Top triangle:" << endl;
	Print_Matrix(matrix, size);
	

	/* Bottom triangle */
	Zero_Fill_Matrix(matrix, size);
	Bottom_Triangle(matrix, size);
	cout << "Bottom triangle:" << endl;
	Print_Matrix(matrix, size);
	

	/* Bottom and top triangles */
	Zero_Fill_Matrix(matrix, size);
	Bottom_And_Top_Triangles(matrix, size);
	cout << "Bottom and top triangles:" << endl;
	Print_Matrix(matrix, size);
	

	/* Left triangle */
	Zero_Fill_Matrix(matrix, size);
	Left_Triangle(matrix, size);
	cout << "Left triangle:" << endl;
	Print_Matrix(matrix, size);
	

	/* Right triangle */
	Zero_Fill_Matrix(matrix, size);
	Right_Triangle(matrix, size);
	cout << "Right triangle:" << endl;
	Print_Matrix(matrix, size);
	

	/* Left and right triangles */
	Zero_Fill_Matrix(matrix, size);
	Left_And_Right_Triangles(matrix, size);
	cout << "Left and right triangles:" << endl;
	Print_Matrix(matrix, size);
	

	/* Left top square */
	Zero_Fill_Matrix(matrix, size);
	Left_Top_Square(matrix, size);
	cout << "Left Top square:" << endl;
	Print_Matrix(matrix, size);
	

	/* Right bottom square */
	Zero_Fill_Matrix(matrix, size);
	Right_Bottom_Square(matrix, size);
	cout << "right bottom square:" << endl;
	Print_Matrix(matrix, size);
	

	/* Left top and right bottom squares */
	Zero_Fill_Matrix(matrix, size);
	Left_Top_And_Right_Bottom_Squares(matrix, size);
	cout << "Left top and right bottom squares:" << endl;
	Print_Matrix(matrix, size);
	

	/* Left top triangle */
	Zero_Fill_Matrix(matrix, size);
	Left_Top_Triangle(matrix, size);
	cout << "Left top triangle:" << endl;
	Print_Matrix(matrix, size);
	

	/* Right bottom triangle */
	Zero_Fill_Matrix(matrix, size);
	Right_Bottom_Triangle(matrix, size);
	cout << "Left top triangle:" << endl;
	Print_Matrix(matrix, size);


	/* Chess */
	Zero_Fill_Matrix(matrix, size);
	Chess(matrix, size);
	cout << "Chess:" << endl;
	Print_Matrix(matrix, size);


	/* Chess reverse */
	Zero_Fill_Matrix(matrix, size);
	Chess_Reverse(matrix, size);
	cout << "Chess reverse:" << endl;
	Print_Matrix(matrix, size);


	/* Sharp */
	Zero_Fill_Matrix(matrix, size);
	Sharp(matrix, size);
	cout << "Sharp:" << endl;
	Print_Matrix(matrix, size);


	/* Sharp reverse*/
	Zero_Fill_Matrix(matrix, size);
	Sharp_Reverse(matrix, size);
	cout << "Sharp reverse:" << endl;
	Print_Matrix(matrix, size);


	/* Lines vertical */
	Zero_Fill_Matrix(matrix, size);
	cout << "Lines vertical:" << endl;
	Lines_Vertical(matrix, size);
	Print_Matrix(matrix, size);


	/* Lines horisontal */
	Zero_Fill_Matrix(matrix, size);
	cout << "Lines horisontal:" << endl;
	Lines_Horizontal(matrix, size);
	Print_Matrix(matrix, size);


	// Clear
	for (int i = 0; i < size; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	matrix = nullptr;

	return 0;
}

void Zero_Fill_Matrix(char** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void Print_Matrix(char** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] == 1) cout << " # ";
			else if (matrix[i][j] == 0) cout << " . ";
			else cout << " x ";
		}
		cout << endl;
	}
	cout << endl;
}

void Top_Triangle(char** matrix, int size)
{
	for (int i = 0; i < size/2; i++)
	{
		for (int j = i+1; j < size-i-1; j++)
		{
			matrix[i][j]++;
		}
	}
}

void Bottom_Triangle(char** matrix, int size)
{
	for (int i = size-1; i > size/2; i--)
	{
		for (int j = i-1; j > size-i-1; j--)
		{
			matrix[i][j]++;
		}
	}
}

void Bottom_And_Top_Triangles(char** matrix, int size)
{
	for (int i = 0; i < size/2; i++)
	{
		for (int j = i+1; j < size-i-1; j++)
		{
			matrix[i][j]++;
			matrix[size-i-1][j]++;
		}
	}
}

void Left_Triangle(char** matrix, int size)
{
	for (int j = 0; j < size/2; j++)
	{
		for (int i = j+1; i < size-j-1; i++)
		{
			matrix[i][j]++;
		}
	}
}

void Right_Triangle(char** matrix, int size)
{
	for (int j = size-1; j > size/2; j--)
	{
		for (int i = j-1; i > size-j-1; i--)
		{
			matrix[i][j]++;
		}
	}
}

void Left_And_Right_Triangles(char** matrix, int size)
{
	for (int j = 0; j < size/2; j++)
	{
		for (int i = j+1; i < size-j-1; i++)
		{
			matrix[i][j]++;
			matrix[i][size-j-1]++;
		}
	}
}

void Left_Top_Square(char** matrix, int size)
{
	for (int i = 0; i < size/2; i++)
	{
		for (int j = 0; j < size/2; j++)
		{
			matrix[i][j]++;
		}
	}
}

void Right_Bottom_Square(char** matrix, int size)
{
	for (int i = size-size / 2; i < size; i++)
	{
		for (int j = size-size / 2; j < size; j++)
		{
			matrix[i][j]++;
		}
	}
}

void Left_Top_And_Right_Bottom_Squares(char** matrix, int size)
{
	for (int i = 0; i < size/2; i++)
	{
		for (int j = 0; j < size/2; j++)
		{
			matrix[i][j]++;
			matrix[size-i-1][size-j-1]++;
		}
	}
}

void Left_Top_Triangle(char** matrix, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			matrix[i][j]++;
		}
	}
}

void Right_Bottom_Triangle(char** matrix, int size)
{
	for (int i = 1; i < size; i++)
	{
		for (int j = size-i; j < size; j++)
		{
			matrix[i][j]++;
		}
	}
}

void Chess(char** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i % 2; j < size; j += 2)
		{
			matrix[i][j]++;
		}
	}
}

void Chess_Reverse(char** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = (i+1) % 2; j < size; j += 2)
		{
			matrix[i][j]++;
		}
	}
}

void Sharp(char** matrix, int size)
{
	for (int i = 0; i < size; i += 2)
	{
		for (int j = 0; j < size; j += 2)
		{
			matrix[i][j]++;
		}
	}
}

void Sharp_Reverse(char** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 1-i%2; j < size; j += 2-i%2)
		{
			matrix[i][j]++;
		}
	}
}

void Lines_Vertical(char** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j += 2)
		{
			matrix[i][j]++;
		}
	}
}

void Lines_Horizontal(char** matrix, int size)
{
	for (int i = 0; i < size; i += 2)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j]++;
		}
	}
}