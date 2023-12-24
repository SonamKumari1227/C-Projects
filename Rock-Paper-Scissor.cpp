
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    //rock paper scissor
    int count=1;
    int next=0;string name;
    cout<<"***********"<<endl<<"Welcome to Rock Paper Scissor *********"<<endl;
    
    cout<<endl<<"enetr s for scissor , r for rock and p for paper"<<endl;
    
    cout<<endl<<"Please enter you name :"<<endl;
    cin>>name;
    char arr[3]={'r','p','s'};
    do{
         int n;char user_choice;
         cout<<"Round " <<count<<":"<<endl;
         cout<<name<<":";
         cin>>user_choice;
       
        
         //computer's choice
         int index=(rand()%10)/4 ;
         char computer_choice=arr[index];
         
         if(user_choice==computer_choice){
             cout<<"computer: "<<computer_choice<<endl;
             cout<<" No one won ,it's draw"<<endl;
         }
         else if(user_choice=='r' && (computer_choice=='p'||computer_choice=='s')){
              cout<<"computer: "<<computer_choice<<endl;
             cout<<name<<" won!!"<<endl;
         }
          else if(user_choice=='p' && (computer_choice=='r'||computer_choice=='s')){
               cout<<"computer: "<<computer_choice<<endl;
             cout<<"computer won!!"<<endl;
         }
           else if(user_choice=='s'){
          
               if(computer_choice=='p'){
                         cout<<"computer: "<<computer_choice<<endl;
                         cout<<name<<" won!!"<<endl;
               }
             
             else if(computer_choice=='r'){
                 cout<<"computer: "<<computer_choice<<endl;
                   cout<<"computer won !!"<<endl;
                 
             }
            
              
         }
         else{
             cout<<name<<" ,Your input in not valid"<<endl;
         }
         
         
         cout<<"press 1 for continue the game :"<<endl;
         cin>>n;
         next=n;
         count++;
         
    }while(next);
   
   
    return 0;
}