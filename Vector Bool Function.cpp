#include<bits/stdc++.h>
using namespace std;

bool isTargetPresent(vector<int>A, int target){
    //returns true if target is present in A else
    for(int i=0 ;i<A.size() ; i++)
    {
    	if(A[i]==target)
    	{
    		return true;
    	}
    }
    return false;
}

int main()
{
	vector<int>A; //vector
	for(int i=0 ; i<A.size() ; i++)
	{
		cin>>A[i];
	}
	int target=4; //change the target here
	isTargetPresent(A,target);
}
