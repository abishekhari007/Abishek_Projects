    #include <iostream>
    using namespace std;
     
    int main() {
    	long long n;
        int count = 0;
        cin>>n;
        while(n != 0)
        {
            n /= 10;
            ++count;
        }
    	cout<<count;
    	return 0;
    }
