    #include <iostream>
    #include<string.h>
    using namespace std;
     
    int main() {
    	string str;
    	cin>>str;
    	if(str=="monday"||str=="tuesday"||str=="wednesday"||str=="thursday"||str=="friday"||str=="saturday")
    	cout<<"\n Workingday("<<str<<") ->true";
    	else
    	cout<<"\n Workingday("<<str<<") ->false";
    	return 0;
    }
