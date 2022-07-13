#include <iostream>

using namespace std;
int main() {
	int n, m; cin>>n>>m;
	
	
    if(m%n != 0) 
    {
        cout<<-1<<endl;
    }
    else
    {
        int move = 0;
    	m /= n;
    	
    	while(m%2 == 0)
    	{
    	    m /=2;
    
    	    move++;
    	}
    	 while(m%3 == 0)
    	{
    	    m /=3;
    
    	    move++;
    	}
        if(m!=1)
			cout<<"-1\n";
		else
			cout<<move<<"\n";
    }
    return 0;
}
