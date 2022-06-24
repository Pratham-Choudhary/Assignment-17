#include<bits/stdc++.h>
using namespace std;

bool isTargetPresentIn2DVector(vector<vector<int>> A, int target){
    //returns true if target is present in A
    for(int i=0 ; i<A.size() ; i++)
    {
    	for(int j=0 ; j<A[0].size() ; j++)
    	{
    		if(A[i][j]==target)
    		{
    			return true;
    		}
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
	int t=4; //find target value
	isTargetPresentIn2DVector(A1,t);
}
