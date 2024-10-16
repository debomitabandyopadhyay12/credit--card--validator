#include<iostream>
#include<string>

using namespace std;

bool checkprefix(string number){
    if(number[0]=='5' || number[0]=='4' || number[0]=='6' || (number[0]=='3' && number[1]=='7')){
        return true;
    }
    else return false;
}
bool correctlength(string number){
    int n=number.length();
    if(n>=13 && n<=16) return true;
    else return false;
}
bool lunhcheck(string number){
    int n=number.length();
    bool isSecond=false;
    int sum=0;
    for(int i=n-1;i>=0;i--){
        int d=number[i]-'0';
        if(isSecond==true){
            d=d*2;
        }
        sum=sum+(d/10);
        sum=sum+(d%10);
        isSecond=!isSecond;

    }
    if(sum%10==0) return true;
    else return false;
}
bool isValid(string number){
    if( lunhcheck(number)==true && correctlength(number)==true && checkprefix(number)==true) return true;
    else return false;
}
int main(){
    string number;
    cout<<"Enter Your Credit Crad Number ?\n";
    cin>>number;
    if(isValid(number)==true) cout<<"Credit Card Number is Valid";
    else cout<<"Credit Card Number is not Valid";
}
