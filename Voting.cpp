#include <iostream> 
using namespace std; 
int main()
{
    int age;
    cout<<"Enter your AGE: ";
    cin>>age;
    cout<<"Age entered is: "<<age;

    if(age>=18)
    {
        cout<<"\n You are eligible for voting, vote wisely";
        cout<<"\n Thanks for your valuable voting";
    }

    else
    {
        cout<<"\n You aren't eligible for voting";
        cout<<"\n Voting is allowed only for 18+ citizens:";
    }
    


}
  
