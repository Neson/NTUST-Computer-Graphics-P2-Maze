// multiply M(mxp) with M(pxn)
// 	   --- p  ---
// .   . . . . . .
// m   . . . . . .
// .   . . . . . .
//     . . . . . .

//c[m][n] must be zero matrix
inline void mulMatrix444(float a[][4], float b[][4], float c[][4],
			   		    int   mVal,   int   pVal,   int   nVal)
{
	for(int i = 0; i < mVal; i++){
		for(int j = 0; j < nVal; j++){
			
			for(int k = 0; k < pVal; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}

inline void mulMatrix441(float a[][4], float b[][1], float c[][1],
			   		    int   mVal,   int   pVal,   int   nVal)
{
	for(int i = 0; i < mVal; i++){
		for(int j = 0; j < nVal; j++){
			
			for(int k = 0; k < pVal; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
}

inline void mulMatrix221(float a[][2], float b[][1], float c[][1],
			   		    int   mVal,   int   pVal,   int   nVal)
{
	for(int i = 0; i < mVal; i++){
		for(int j = 0; j < nVal; j++){
			
			for(int k = 0; k < pVal; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
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