#include<iostream>
using namespace std;
printO(int N,int M);
int main(){
    printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
	return 0;
}
void printO(int N,int M){
    while(true){
    if(N<=0){cout<<"Invalid input" ; break;}
    if(M<=0){cout<<"Invalid input" ; break;}     
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
          cout<<"O" ; 
        }
       cout<<endl; 
    }
    break;
    }
    
}
