    #include <iostream>
    using namespace std;
     
    int main() 
    {
     
        int number, originalNumber, remainder, result = 0;
    	cin>>number;
    	originalNumber = number;
    	while (originalNumber != 0)
        {
            remainder = originalNumber%10;
            result += remainder*remainder*remainder;
            originalNumber /= 10;
        }
    	if(result == number)
            cout<<"ARMSTRONG NUMBER"<<number;
        else
            cout<<"NOT AN ARMSTRONG NUMBER"<<number;
    	return 0;
    }
