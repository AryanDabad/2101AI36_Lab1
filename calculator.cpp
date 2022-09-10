
#include <iostream>
using namespace std;
// Function to return sum
// of two number
int addTwoNumber(int A, int B)
{
    // Return sum of A and B
    return A + B;
}
 
// Driver Code
int main()
{
    // Given two number
cout<<"Enter operator";
char op;
cin>>op;
cout<<"Enter Two Numbers : ";
    float A,B;
    cin>>A>>B;
 
 switch (op) {
          
        // If user enter + 
        case '+':
            cout <<A+B;
            break;
         case '-':
		cout<<A-B;
		break;
	case '*':
		cout<<A*B;
		break;

        // If the operator is other than +, -, * or /, 
        // error message will display
        default:
            cout << "Error! operator is not correct";
            break;
    } // switch statement ends
    return 0;
}