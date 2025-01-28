#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
    
    int t[]={a,b,c,d};
    
    for(int i=0;i<4;i++){
        
        int r = rand()%4;
        int temp = t[i];
        t[i] = t[r];
        t[r] = temp;
    }
    
    a=t[0];
    b=t[1];
    c=t[2];
    d=t[3];

}
