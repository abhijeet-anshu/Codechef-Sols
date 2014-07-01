#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
bool RemoveString(string *arr,int *val,int n,string remove){
    int i,j;
    bool flag=false;
    for(i=0;i<n;i++){
        if(arr[i]==remove){
            j=i;
            flag=true;
            break;
        }
    }
    if(flag==false)
        return flag;
    for(j++;j<n;j++){
        arr[j-1]=arr[j];
        val[j-1]=val[j];
    }
    arr[n-1]="\0";
    return flag;
}
int main(void){
    //string arr[100];
    //int value[100];
    int n,i;/*
    cout<<"length: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<i+1<< " string :value\n";
        cin>> arr[i]>>value[i];
        }
    cout<<"to remove: ";
    string rem;
    cin >> rem;*/
    string str[]={"Word","testing","remove","computer","science"};
    int value[]={3,5,8,2,4};
    RemoveString(str,value,5,"remove");
    for(i=0;i<4;i++){
        cout<< str[i]<<value[i]<<endl;
        }
}
