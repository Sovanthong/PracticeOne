#include<iostream>
using namespace std;
int main(){
    system("cls");
for (int i = 1 ; i<=10 , i++ ;){
cout<<i<<".inside for loop."<<endl;
if (i==5)break;
}
for (int k = 1 ; k<=10; k++){
    if (k==5|| k==8 )continue;
    cout<<k<<".inside while loop."<<endl;
}
cout<<".THIS IS THE LAST LINE."<<endl;
    return 0;
}
