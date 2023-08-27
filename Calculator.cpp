#include <iostream>
#include <math.h>
using namespace std;

void add(int turn){
    int total=0, numbers;
    cout<<"Enter the Numbers:"<<endl;
    for(int i=turn; i>0; i--){
        cin>>numbers;
        total=total+numbers;
    }
    cout<<"\nTotal Sum of the numbers= "<<total<<"\n\n-----------------------------\n\n";
}
void sub(){
    int num1, num2;
    cout<<"Enter the First number: ";cin>>num1;
    cout<<"Enter the Second number: ";cin>>num2;
    cout<<"\nSubtraction of "<<num1<<" and "<<num2<<" is "<<num1-num2<<"\n\n-----------------------------\n\n";
}

void mult(int turn){
    long int multi_total;
    int numbers;
    cout<<"Enter the Numbers:\n";cin>>multi_total;
    for(int i=turn-1; i>0; i--){
        cin>>numbers;
        multi_total=multi_total*numbers;
    }
    cout<<"\nMultiplication of all the numbers is = "<<multi_total<<"\n\n-----------------------------\n\n";
}

void  div(){
    float num1, num2;
    cout<<"\nEnter the First number: ";cin>>num1;
    cout<<"Enter the Second number: ";cin>>num2;
    while (num2==0){
        cout << "\n Divisor canot be zero\n"<<"Enter the Second number: ";cin>>num2;  
    }
    cout<<num1<<"/"<<num2<<" is "<<num1/num2<<"\n\n-----------------------------\n\n";
}

void square(int num){
    cout<<"\nSquare of "<<num<<" is "<<num*num<<"\n\n-----------------------------\n\n";;
}



int main(){
    int choice;
    do{
        cout << "Select any operation from the C++ Calculator"  
        "\n1 = Addition"  
        "\n2 = Subtraction"  
        "\n3 = Multiplication"  
        "\n4 = Division"  
        "\n5 = Square"  
        "\n6 = Square Root"  
        "\n7 = Exit"  
        "\n\nMake a choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            int add_count;
            cout<<"\nEnter the numbers of terms to add: ";cin>>add_count;
            add(add_count);
            break;
        case 2:
            sub();
            break;
        case 3:
            int mult_count;
            cout<<"\nEnter the numbers of terms to Multiply: ";cin>>mult_count;
            mult(mult_count);
            break;
        case 4:
            div();
            break;
        case 5:
            int sq_num;
            cout<<"\nEnter the numbers of to find the Square: ";cin>>sq_num;
            square(sq_num);
            break;
        case 6:
            int sq_root;
            cout<<"\nEnter the numbers of to find the Square Root: ";cin>>sq_root;
            cout <<" \n Square Root of " << sq_root<< " is : "<<sqrt(sq_root)<<"\n\n-----------------------------\n\n";  
            break;
        case 7:
            exit(0);
            break;
        
        default:
            cout<<"---------------------------------\n"
                  "|   Please make a valid Choice  |\n"
                  "---------------------------------\n\n";
        }

    }while(choice!=7);
    return 0;
}