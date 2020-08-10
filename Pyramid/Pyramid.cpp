#include <iostream>
#include <string>

using namespace std;

int main() {
    
cout << "Enter Something !!! \n";
string pyr {};
cin>>pyr;
    int Len = pyr.length();
	int line = (Len * 2) - 1;
		
	for(int i {0} ; i < Len ; i++)
	{
			int wordinline = (2 * i) + 1;
			int space = line - wordinline;
			for(int j {0}; j < space/2; j++)
			{
				cout<< " ";
			}
			for(int k {0}; k<=i; k++)
			{
				cout << pyr[k];
			}
			for(int m {i-1}; m>=0; m--)
			{
				cout << pyr[m];
			}
		cout << endl;
	}
    cout << endl;
    return 0;
}


