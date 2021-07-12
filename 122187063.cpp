#include <iostream>
 
using namespace std;
 
int main()
{
   int n;
   cin>>n;
	    int arr[3]={0};
	    int sure = 0;
	    while(n--){
	        int temp = 0;
	        for(int i=0; i<3; i++){
	            cin>>arr[i];
	            if(arr[i]==1){
	                temp++;
	            }
	        }
	        if(temp>=2){
	            sure++;
	        }
	    }
	    cout<<sure;
   return 0;
}
