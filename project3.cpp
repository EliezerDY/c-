#include<iostream>
//#include<stdlib.h>
#include<math.h>
using namespace std;
//function returns random number between 1 and range
int randNumber(int range)
{
return(rand()%range+1);
}
//function to check unique value within range 0 to index
int isUniqueValue(int a[6],int value,int index)
{
for(int i=0;i<=index;i++)
{
if(a[i]==value)
return(1);
}
return(0);
}
//function to set random wining numbers
void setWinningNumbers(int winningNumbers[],int SIZE)
{
for(int i=0;i<SIZE-1;i++)
{
int flag=1;
while(flag)
{
int n=randNumber(75);
if(i==0)
{
flag=0;
winningNumbers[0]=n;
}
else
{
flag=isUniqueValue(winningNumbers,n,i-1);
if(!flag)
{
flag=0;
winningNumbers[i]=n;
}
}
}
}
winningNumbers[SIZE-1]=randNumber(15);
}
//function to set player numbers
void setPlayerNumbers(int playerNumbers[],int SIZE)
{
int n,flag;
for(int i=0;i<SIZE-1;i++)
{
flag=1;
while(flag)
{
cout<<"Enter the "<<i+1<<" Number (1 to 75): ";
cin>>n;
if(n>=1 && n<=75)
{
if(i==0)
{
flag=0;
playerNumbers[0]=n;
}
else
{
flag=isUniqueValue(playerNumbers,n,i-1);
if(!flag)
{
flag=0;
playerNumbers[i]=n;

}

else

cout<<"Invalid number must be unique..."<<endl;

}

}

else

{

cout<<"Invalid number."<<endl;

}

}

}

flag=1;

int mega;

while(flag)

{

cout<<"Enter mega ball(1 to 15)";

cin>>mega;

if(mega>=1 && mega<=15)

{

flag=0;

playerNumbers[SIZE-1]=mega;

}

else

cout<<"Invalid number."<<endl;

}

}

//function to check how many winning

int checkNumbers(int winningNumbers[],int playerNumbers[],int SIZE)

{

int count=0;

for(int i=0;i<SIZE-1;i++)

{

for(int j=0;j<SIZE-1;j++)

{

if(winningNumbers[i]==playerNumbers[j])

count++;

}

}

return(count);

}

//functiom to display result

void displayResult(int winningNumbers[],int playerNumbers[],int SIZE)

{

int count=checkNumbers(winningNumbers,playerNumbers,SIZE);

int mega_ball,value=0;

if(winningNumbers[SIZE-1]==playerNumbers[SIZE-1])

mega_ball=1;

else

mega_ball=0;

if(count==0 && mega_ball==1)

{

value=1;

}

if(count==1 && mega_ball==0)

{

value=2;

}

if(count==1 && mega_ball==1)

{

value=2;

}

if(count==2 && mega_ball==0)

{

value=4;

}

if(count==2 && mega_ball==1)

{

value=5;

}

if(count==3 && mega_ball==0)

{

value=5;

}

if(count==3 && mega_ball==1)

{

value=50;

}

if(count==4 && mega_ball==0)

{

value=500;

}

if(count==4 && mega_ball==1)

{

value=5000;

}

if(count==5 && mega_ball==0)

{

value=1000000;

}

if(count==5 && mega_ball==1)

{

value=10000000;

}

int i;

cout<<endl<<"Wining numbers: ";

for(i=0;i<SIZE-1;i++)

{

cout<<winningNumbers[i]<<" ";

}

cout<<" Mega Ball: "<<winningNumbers[SIZE-1];

cout<<endl<<"Yours numbers: ";

for(i=0;i<SIZE-1;i++)

{

cout<<playerNumbers[i]<<" ";

}

cout<<" Mega Ball: "<<playerNumbers[SIZE-1];

cout<<endl<<count<<" wining number";

if(mega_ball==1)

cout<<" plus mege ball:";

if(value==10000000)

cout<<" You win $ JACKPOT";

else

cout<<" You win $"<<value;

}

//main driver function

int main()

{

//srand(time(NULL));

const int SIZE=6;

int winningNumbers[SIZE];

int playerNumbers[SIZE];

setWinningNumbers(winningNumbers,SIZE);

setPlayerNumbers(playerNumbers,SIZE);

checkNumbers(winningNumbers,playerNumbers,SIZE);

displayResult(winningNumbers,playerNumbers,SIZE);

return 0;

}
