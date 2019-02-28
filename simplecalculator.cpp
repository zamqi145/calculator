#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int number1,number2,process,result;
using namespace std;

int main() { 

    cout<<"\n\t\t\t\t\tCALCULATOR";

    cout<<"\n\t\t\tSelect Number for Operation."<<"\n"<<"\n\t Addition\t=\t 1 \n\t Subtraction\t=\t 2 \n\t Multiplication\t=\t 3 \n\t Divide\t\t=\t 4 \n";

    cin>>process;   

    cout<<"Please enter the first number = ";

    cin>>number1;

    cout<<"please enter the second number = ";

    cin>>number2;

    if (process == 1){
      result = (number1 + number2);
    }
    else if (process == 2){
      result = (number1 - number2);
    }
    else if (process == 3){
      result = (number1 * number2);
    }
    else if (process == 4){
      result = (number1 / number2);
    }   
    else {
      cout<<"you can only select these 4 (1,2,3,4) numbers.";
    }

    cout<<"\n Result = "<< result <<"\n";

    cout<<"\n Press any key to exit.";

    getch();

    return 0;

}
