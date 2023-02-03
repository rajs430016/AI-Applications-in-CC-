#include<iostream>

using namespace std;

int main()
{
    int total;
    int maxCapacity;
    int distance;
    int lose, start, i;

    cout<<"Enter no. of bananas at starting : ";
    cin>>total;
    cout<<"Enter distance you want camel to cover : ";
    cin>>distance;
    cout<<"Enter max load capacity of your camel : ";
    cin>>maxCapacity;

    lose=0;
    start=total;

    for(i=0;i<distance;i++){
        while(start>0){
            start=start-maxCapacity;

            if(start==1){//condition to check that if there is only one banana left then the camel does not moves backward.
                lose=lose-1; //condition to make sure that if camel travels to get remaining one banana then it will consume one extra banana to return
            }

            lose=lose+2; //increasing lose as to travel load to one point by one mile two bananas will be consumed by camel to travel forward and backward

        }
        lose=lose-1; //lose decreased as in last trip where bananas are <1000, the camel won't go back. Hence one extra banana won't be consumed

        start=total-lose;
        if(start==0){//Condition to check whether it is possible to take a single banana or not.
            break;
        }
    }

    cout<<"\nTotal banana delivered after "<<distance<< "kms : "<<start<<endl;
}