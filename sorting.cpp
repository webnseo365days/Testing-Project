#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main ()
{
	int temp, nums[4];
 
		
	// filling of array members
	for(int i=0; i<4; i++)
	{
		cout << "Please enter a number \n";
		cin >> nums[i];	
	}
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<3; j++)
			{
				
				if(nums[j] < nums[j+1]){
		 
			 		temp = nums[j];
			 		nums[j] = nums[j+1];
			 		nums[j+1]= temp;
			  		
				}
			}
		 
		}
 
 	for(int k=0; k<4; k++)
 	{
	
	 	cout << nums[k] << endl;	
 	}		

}
