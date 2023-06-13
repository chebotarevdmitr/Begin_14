#include <iostream>

using namespace std;

int main(int argc, char** argv) {
   printf("     Do-while ()   \n");	
   
   int user_pin = 12345,pin,error_counter = 0; 
   do {
   	    cout<<" Enter pin : ";
   	    cin>> pin ;
   	    if(pin != user_pin) error_counter ++ ;
             
      } while(error_counter<3 && user_pin !=pin);
      if(error_counter<3)
        cout<<" loading...";
        else 
        cout<<" Blocked...";
	
	system("pause>0");
}