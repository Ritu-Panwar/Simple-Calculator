#include <iostream>
using namespace std;

void Calculator()
{
    cout<<" \t\t\t\t\t\t1. Addition -> (+)\n\t\t\t\t\t\t2. Substraction -> (-)";
    cout<<"\n\t\t\t\t\t\t3. Multiplication -> (*)\n\t\t\t\t\t\t4. Division -> (/)\n\t\t\t\t\t\t5. Exit -> (0)"<<endl;
    
	while(1)
	{
		char operation;
		double num1, num2;
		
		cout << "\nEnter a number: ";
		cin>>num1;
		cout << "Enter another number: ";
		cin>>num2;
        	
		cout << "\nEnter an operation in which you want to perform (+,-,*,/,0): ";  
		cin >> operation;
		
		switch(operation) 
		{
			case '+':
                cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2<<endl;
                break;
            
            case '-':
                cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2<<endl;
                break;
            
            case '*':
                cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2<<endl;
                break;
                
            case '/':
                if(num2 != 0)
                    cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2<<endl;
                else
                    cout << "Error! Division by zero.";
                break;
                
            case '0':
				exit(0);
				break;
				
            default:
                cout << "Invalid operation!"<<endl;
        }
    }
}

int main()
{   
	Calculator();
	return 0;
}
