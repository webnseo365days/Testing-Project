#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;
//Check 
int main ()
{
	int a,temp, nums[4];
 
		cout << "Please enter members of arrays \n";
		cin >> a;
		
	// filling of array members
	for(int i=0; i<a; i++)
	{
		cout << "Please enter a number \n";
		cin >> nums[i];	
	}
		for(int i=0; i<a; i++)
		{
			for(int j=0; j<a-1; j++)
			{
				
				if(nums[j] < nums[j+1]){
		 
			 		temp = nums[j];
			 		nums[j] = nums[j+1];
			 		nums[j+1]= temp;
			  		
				}
			}
		 
		}
 
 	for(int k=0; k<a; k++)
 	{
	
	 	cout << nums[k] << endl;	
 	}		

}
