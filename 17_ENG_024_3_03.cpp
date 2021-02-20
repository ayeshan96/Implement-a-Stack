//Header files
#include<iostream>

//Declare namespace
using namespace std;

//Implement class stack
class STACK
{
public:
//Class variables
	int data;
	STACK *next;
	
	STACK *top = NULL;

	//Function list
	void push(int val);
	void pop();
	int empty();
	void showdata();
	void reverse();
	void deleted();
	void count();
};

//Check whether the stack is empty
int STACK::empty()
{
	if (top == NULL)
	{
		return 1;
	}
}

//Main class
int main()
{
	//Input data to the list
	cout << "Input number of nodes : ";

	//declare variables
	int a;

	//getting user input
	cin >> a;

	//declare dma
	int *array = new int[a];

	//getting space lines
	cout << endl << endl;
	for (int i = 0; i < a; i++)
	{
		//output to the console window
		cout << "Input data for node " << i + 1 << " : ";

		//getting user input
		cin >> array[i];
		cout << endl;
	}

	//Create stack object
	STACK ob1;

	//Create the stack
	for (int i = 0; i < a; i++)
	{
		//calling push function
		ob1.push(array[i]);
	}

x:
	//Clear the screen
	system("cls");

	//Output to thhe console window
	cout << "\n\n\n\t1 - PUSH\n\t2 - POP\n\t3 - Print\n\t4 - Reverse\n\t5 - Count\n\t6 - Delete\n\t7 - EXIT\n\n\n";
	
	//Get the user's input
	cout << "Enter your choice : ";

	//declare variable
	int b;
	//getting user input
	cin >> b;
	
	//Clear the screen
	system("cls");

	//Push operation
	if (b == 1)
	{
		//output to the console window
		cout << "Input your value which you wish to enter : ";

		//declare variables
		int c;

		//getting user input
		cin >> c;

		//cleare console window
		system("cls");
		
		//output to the console window
		cout << "\tPrevious STACK\n\n\n";

		//calling showdata
		ob1.showdata();
		
		//output to the console window
		cout << "\tPush value : " << c<<endl<<endl<<endl;

		//calling push function
		ob1.push(c);

		//output to the console window
		cout << "\tPresent STACK\n\n\n";

		//calling show data function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl << endl;

		system("pause");

		//goto x
		goto x;
	}

	//Pop operation
	else if (b == 2)
	{
		//clear console window
		system("cls");

		//output to the console window
		cout << "\tPrevious STACK\n\n\n";

		//calling showdata function
		ob1.showdata();


		//calling pop function
		ob1.pop();

		//output to the console window
		cout << "\tPresent STACK\n\n\n";

		//calling showdata function
		ob1.showdata();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear the console window
		system("cls");

		//goto x
		goto x;
	}

	//Print the stack
	else if (b == 3)
	{
		//clear the console window
		system("cls");

		//calling showdata function
		ob1.showdata();

		//getting space lines
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear the console window
		system("cls");

		//goto x
		goto x;
	}
	
	//Reverse the elements of the stack
	else if (b == 4)
	{
	//clear the console window
		system("cls");

		//output to the console window
		cout << "\tPrevious STACK\n\n\n";

		//calling showdata function
		ob1.showdata();

		//output to the console window
		cout << "\n\n\n\tReverse STACK\n\n\n";

		//calling reverse function
		ob1.reverse();

		//getting spaces
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;

	}

	//Count the elements of the stack
	else if (b == 5)
	{
	//clear console window
		system("cls");

		//output to the console window
		cout << "\tPrevious STACK\n\n\n";

		//calling showdta function
		ob1.showdata();

		//getting space lines
		cout << endl << endl << endl << endl;

		//calling count function
		ob1.count();

		//getting space lines
		cout << endl << endl << endl;

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;
	}

	//Delete the stack
	else if (b == 6)
	{
	//clear console window
		system("cls");

		//output to the console window
		cout << "\tPrevious STACK\n\n\n";

		//calling showdata function
		ob1.showdata();

		//output to the console window
		cout << "\n\n\n\tPresent STACK\n\n\n";

		//calling deleted function
		ob1.deleted();

		//calling showdata function
		ob1.showdata();

		//getting space lines
		cout << endl << endl << endl;

		//pause the output
		system("pause");


		//clear console window
		system("cls");

		//goto x
		goto x;
	}
	
	//Exit from the programme
	else if (b == 7)
	{
		exit(0);
	}

	//Validate the user input
	else
	{
	//output to the console window
		cout << "Wrong Input. Enter again.....!!!\n\n\n";

		//pause the output
		system("pause");

		//clear console window
		system("cls");

		//goto x
		goto x;

	}

	//Waiting for the user's input
	system("pause");
	return 0;
}

//Push operation implementation
void STACK::push(int val)
{
	STACK *pnt = new STACK();

	pnt->data = val;
	pnt->next = top;
	top = pnt;

}

//Pop operation implementation
void STACK::pop()
{
	//condition checking
	if (empty()==1)
	{
		//output to the console window
		cout << "STACK is empty\n\n\n";
	}

	//condition checking
	else
	{
		STACK *pnt = top;

		//output to the console window
		cout << "\tTop most element : " << top->data<<endl<<endl<<endl;
		top = top->next;
		delete(pnt);
	}
}

//Reverse the stack
void STACK::reverse()
{
	STACK *temp = top;
	STACK ob2;

	//condition checking
	if (top == NULL)
	{
		//output to the console window
		cout << "STACK is empty\n\n\n";
	}
	
	//condition checking
	else
	{
		while (temp != NULL)
		{
			ob2.push(temp->data);
			temp = temp->next;
		}
		//calling showdata function
		ob2.showdata();
	}
	delete temp;
}

//Delete the stack
void STACK::deleted()
{
	top = NULL;
}

//Count the elements in the stack
void STACK::count()
{
	STACK *temp = top;

	//declare variable
	int cou = 0;

	//condition checking
	if (temp == NULL)
	{

		//output to the console window
		cout << "STACK is Empty\n\n\n";
	}

	//condition checking
	else
	{
		while (temp != NULL)
		{
			cou = cou + 1;
			temp = temp->next;
		}

		//output to the console window
		cout << "\tNumber of elements in the current stack = "<<cou;

	}
}

//Dispaly the elements in the stack
void STACK::showdata()
{
	STACK *temp = top;

	//condition checking
	if (temp == NULL)
	{

		//output to the console window
		cout << "STACK is Empty\n\n\n";
	}
	//condition checking
	else
	{
		while (temp != NULL)
		{
			//output to the console window
			cout << temp->data << "\t\t" << temp->next << endl;
			temp = temp->next;
		}
	}

}

