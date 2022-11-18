/* Chef is a beginner and should ideally try and solve only problems with difficulty rating strictly less than 1000. Given a list of difficulty ratings for problems in the Chef’s to-do list, please help him identify how many of those problems Chef should remove from his to-do list, so that he is only left with problems of difficulty rating less than 1000. 

Input                                                     Output

5                                                            1
3                                                            3
800 1200 900                                                 1
4                                                            5
999 1000 1001 1002                                           0
5
1 2 2 2 5000
5
1000 1000 1000 1000 1000
3
900 700 800

*/

// solution by using arrays;


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
	int size;
	cin>>size;
	int count=0;
	int arr[size];
	for(int i=0; i<size; i++){
	    cin>>arr[i];
	}
	for(int j=0; j<size; j++){
	    if(arr[j]>=1000){
	        count++;
	    }
	}
	cout<<count<<endl;
	}
	
	return 0;
}