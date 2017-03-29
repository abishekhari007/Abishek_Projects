    #include <iostream>
    using namespace std;
    int main() 
    {
    	char ch;
    	cin>>ch;
    	if(isalpha(ch))
    	cout<<"Alphabet";
    	else if(isdigit(ch))
    	cout<<"Number";
    	else
    	cout<<"Special Characters";
    	return 0;
    }
