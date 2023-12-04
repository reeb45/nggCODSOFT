# include<iostream>
# include <cstdlib>

using namespace std;
int main()
{
string player_name;
char input;



cout<<"enter your name"<<endl;
getline(cin,player_name);
int num_player= 0;
srand(0);
int random=rand()%100+1;
cout<<"enter a number between 1 and 100 please"<<endl;
cin>>num_player;
if(random==num_player)
{cout<<"congratulations!!,  you guessed it correct ";}

   else if( random>num_player)
    {
        cout<<"guess higher";
    }
    else
    {
        cout<<"guess lower";
    }
    


} # include<iostream>
# include <cstdlib>

using namespace std;
int main()
{
string player_name;
char input;



cout<<"enter your name"<<endl;
getline(cin,player_name);
int num_player= 0;
srand(0);
int random=rand()%100+1;
cout<<"enter a number between 1 and 100 please"<<endl;
cin>>num_player;
if(random==num_player)
{cout<<"congratulations!!,  you guessed it correct ";}

   else if( random>num_player)
    {
        cout<<"guess higher";
    }
    else
    {
        cout<<"guess lower";
    }
    


} 