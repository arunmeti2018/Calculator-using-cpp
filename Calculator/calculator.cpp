#include<iostream>
using namespace std;

class calculator{
public :
int a;
int b;
int ans;
char op;
calculator(){

}
void getVal1(void);
void getVal2();
void getOp();
void addition();
void substraction();
void multiplicaton();
void division();
}calci;


int main(){
 
    calci.getVal1();
    while(1){
           calci.getOp();

        if(calci.op=='='){
        cout<<"Final Answer ::"<< calci.a<<endl;
        exit (0);
        }
      
         calci.getVal2();
         if(calci.op=='+'){
     
         calci.addition();
        }

        else  if(calci.op=='-'){
     
         calci.substraction();
        }
       else   if(calci.op=='*'){
     
         calci.multiplicaton();
        }
    else      if(calci.op=='/'){
     
         calci.division();
        }
        else
        break;

     
    }

    
   




    return 0;
}


void calculator :: getVal1(){
    cout<<"Enter Value :: "<<endl;
    cin>>a;

}
void calculator:: getOp(){
    cout<<"Enter operator :: "<<endl;
    cin>>op;
    
}
void calculator:: getVal2(){
    cout<<"Enter Value :: "<<endl;
    cin>>b;
} 
void calculator :: addition(){

 ans=a+b;
 cout<<a<<" + "<<b<<" = "<<ans<<endl;
 a=ans;
 b=0;

}
void calculator :: substraction(){

 ans=a-b;
 cout<<a<<" - "<<b<<" = "<<ans<<endl;
 a=ans;
 b=0;

}
void calculator :: multiplicaton(){

 ans=a*b;
 cout<<a<<" * "<<b<<" = "<<ans<<endl;
 a=ans;
 b=0;

}
void calculator :: division(){

 ans=a/b;
 cout<<a<<" / "<<b<<" = "<<ans<<endl;
 a=ans;
 b=0;

}
