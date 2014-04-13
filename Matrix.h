#ifndef _MATRIX_H_
#define _MATRIX_H_
#include "LineSeg.h"
#include "Vector3.h"
#include <iostream>

class Matrix
{
public:
	int m, n;

	Matrix(const float matrix[], int m, int n);


private:


};


// multiply M(mxp) with M(pxn)
// 	   --- p  ---
// .   . . . . . .
// m   . . . . . .
// .   . . . . . .
//     . . . . . .

//c[m][n] must be zero matrix
inline void mulMatrix444(float a[][4], float b[][4], float c[][4])
{
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			c[i][j] = 0;
	
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			
			for(int k = 0; k < 4; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}

inline void mulMatrix441(float a[][4], float b[][1], float c[][1])
{
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 1; j++)
			c[i][j] = 0;

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 1; j++){
			
			for(int k = 0; k < 4; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}

inline bool inside(float x)
{
	if (x < 1 && x > 0) return true;
	else return false;
}

inline void printVector3(Vector3 v)
{
	std::cout << "x = " << v.x << " y = " << v.y << " z = " << v.z << std::endl;
}

inline void printLineSeg(LineSeg line)
{
	std::cout << "start = (" << line.start[0] << "," << line.start[1] << "), end = (" << line.end[0] << "," << line.end[1] << ")" << std::endl;
}


// inline void mulMatrix(float    a[], float    b[], float    c[],
// 			   		    int   mVal,   int   pVal,   int   nVal)
// {
// 	for(int i = 0; i < mVal; i++){
// 		for(int j = 0; j < nVal; j++){
			
// 			for(int k = 0; k < pVal; k++)
// 				c[i * nVal + j] += a[i * pVal + k] * b[k * nVal + j];
// 		}
// 	}
// }

#endif

