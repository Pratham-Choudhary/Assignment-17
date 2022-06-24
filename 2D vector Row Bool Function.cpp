#include <bits/stdc++.h>
using namespace std;

bool isTragetPresentInRow(vector<vector<int> >A, int target, int r){
    //returns true if target is present in row r of A then returns true else return false;
    for(int i=0 ; i<A.size() ; i++)
    {
    	if(A[r][i]==target)
    	{ 
    		return true;
    	}
    }
    return false;
}

int main() 
{
	int r=3,c=3;
	vector<int> A(r);
	vector<vector<int>> A1(c,A); //2D vector
	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			cin>>A1[i][j];
		}
	}
	int target=4; //find target value
	isTragetPresentInRow(A1,target,r);
}
