#include<vector>
using namespace std;

class Solution {
    public:
        vector<vector<int>> generateMatrix(int n) {
            vector<vector<int>> matRet;
            if (1 == n%2)// 奇数最内层
                matRet[n/2][n/2] = n*n;
            
            int nRow=0;
            int nData=0;
            for (int nLayer = 0; nLayer < n/2; nLayer++)
            {
                // 列->右，列->下，列->左，列->上。为一圈
                for (int nCol = nLayer; nCol < n-(nLayer+1); nCol++)
                    matRet[nRow][nCol]=++nData;
                for ( ; nRow < n-nLayer; nRow++)
                
            }
            
        }
    };