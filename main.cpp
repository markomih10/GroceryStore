//Author: Marko Mihajlovic
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string> list; //array of 5 strings
        char input;
        string item;
        int counter=0;
        int deleteTracker;
        do 
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                if (list.size() > 0);
                {
                    cout<<"\n (D)elete last item";
                }
                for(int i = 0; i < list.size(); i++)
                { deleteTracker = list.size();

                }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                
                if(input == 'a' || input == 'A')
                {
                        cout<<"What is the item?\n";
                        cin>>item;
                        list.push_back (item);


                }
                if(input == 'D' || input == 'd')
                {
                        if( list.size() >0)
                        {
                                cout<<list.at(deleteTracker-1)<<" was deleted from the list."<<endl;
                                list.pop_back();
                        }
                 }
      }
        while(input != 'Q' && input != 'q');
        if(list.size() == 0){
                cout<<"No items to buy!"<<endl; }
        else 
        {
                cout<<"==ITEMS TO BUY=="<<endl;
                for(int i=0; i < list.size(); i++) {
                        cout<<counter+1<<" "<<list.at(i)<<endl;
                        counter++;
                }
        }
         
        return 0;
}   
