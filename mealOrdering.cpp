#include <iostream>
#include <conio.h>
#include <string>
using namespace std;




void UserFunction();	// For Login Users.
void menuFunction();	//For Both Users.
void Bill();			 // Also For Both Users.	
void saleManFunction();		// For User.
void adminFuncation();	 //admin functions.
void addItems();		//only for admin add item.
void deleteItems();		//only for admin menu item delet.
void changeprice();		//only for admin change price.
void viewMenu();	//only for admin to view menu.




struct stater{
	string name;
	float price;


	void input();
	void output();
};




struct Main {
	string name;
	float price;

	void input();
	void output();
};



struct Naan {
	string name;
	float price;

	void input();
	void output();
};



struct coldDrink {
	string name;
	float price;

	void input();
	void output();
};




struct SelectedItem {

    string name;
    float price;
    int quantity;

    void output();
};


	 // jo item select kia ha unko idr store krna ha	
	SelectedItem itemSelected[15];
	int itemCount=0;

	stater statermenu[7]={{"Mantu/Dumpling" , 1200,},{"Fresh  Salad ::" , 400,},{"Fatuch Salad" , 650,},{"Russian Salad", 550}};
	int staterCount=4;

	Main mainMenu[7]={{"Chicken Karahi",1500},{"Chicken Handi ", 1800 },{"Dumbha Karahi", 4400},{"Mutton Karahi",4800}};
	int mainCount=4;

	Naan naanMenu[7]={{"Afg Double Naan",230},{"Afg Single Naan",110},{"Paraki  Rotiii", 80},{"Khanbiri  Naan",40 }};
	int naanCount=4;

	coldDrink drinkMenu[7]={{"1.5ltr Pepsi",230}, {"500ml Pepsi",110} , {"250 Can Pepsi", 190},{"200ml Pepsi",80  }};
	int drinkCount=4;
	


int main ()
{







	system("cls");
	
	UserFunction();
	

	//deleteItems();
	//changeprice();
	//saleManFunction();
	//viewMenu();




	_getch();
	return 0;
}


void viewMenu()
{

	int choice;

	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::: \" WELCOME TO MEAL View Menu SYSTEM \" ::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<endl;
	cout<<"\tPress 1 For Stater: \n";
	cout<<"\tPress 2 For Main: \n";
	cout<<"\tPress 3 For Naan Roti: \n";
	cout<<"\tPress 4 For Cold Drink: \n\n";
	cout<<"\tEnter Your Choice: ";
	cin>>choice;
	


	switch (choice){

	case 1:
		cout<<endl;
		cout<<"\t\t\tDish Name"<<"\t\t\t Price" <<endl<<endl;
		for (int i=0; i<staterCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			statermenu[i].output();
		}
		


		break;
	case 2:
		cout<<endl;
		cout<<"\t\t\tDish Name"<<"\t\t\t\t Price" <<endl;
		cout<<endl;
		for (int i=0; i<mainCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			mainMenu[i].output();
		}
		break;

	case 3:
		cout<<endl;
		cout<<"\t\t\tDish Name"<<"\t\t\t\t Price" <<endl;
		cout<<endl;
		for (int i=0; i<naanCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			naanMenu[i].output();
		}

		break;

	case 4:
		cout<<endl;
		cout<<"\t\t\tDrink  Names"<<"\t\t Price"<<endl;
		cout<<endl;
		for(int i=0; i<drinkCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			drinkMenu[i].output();
		}
		break;

	default :
			{ 
			cout<<"\tInValid Entry!";
			}

			break;
	}
		cout<<"\n\n\tPress Any Key To Go To Main Menu: \n";
		_getch();
		return adminFuncation();

	}
	




void saleManFunction(){


	menuFunction();


}





void adminFuncation(){

	int choice;
	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::: \" WELCOME TO ADMIN PORTAL SYSTEM \" ::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\n\n\tPress 1 For View Main Menu: \n";
	cout<<"\tPress 2 For Add items: \n";
	cout<<"\tPress 3 For Delete items: \n";
	cout<<"\tPress 4 For Changing Price: \n";
	cout<<"\tPress 5 For Exit: \n\n";
	cout<<"\tEnter Your Choice: ";
	cin>>choice;		
	cout<<endl;

	switch(choice)
	{
	case 1:
		viewMenu();
		break;

	case 2:
		addItems();
		break;

	case 3:
		deleteItems();
		break;

	case 4:
		changeprice();
		break;

	case 5:
		UserFunction();
		break;

	default:
		cout<<"\n\tInvalid Entry ! \n";
		cout<<"\tPress Any Key To Go To User Login Menu: \n";
		_getch();
		UserFunction();
		break;
	}


}















void stater::input()   //scope resoulation operator   // Structure 1
		{
		cin.ignore();
		cin.clear();
		cout<<"\n\t Enter Name of Dish: ";
		getline(cin,name);
		cout<<"\n\tEnter Price Of Dish:";
		cin>>price; 
	}

void stater::output()
		{

			cout<<name<<"\t\t\t Rs. "<<price<<endl;
	}

void Main::input()   //scope resoulation operator   // Structure 2
	{
		cin.ignore();
		cin.clear();
		cout<<"\tEnter Name Of Dish: ";
		getline(cin,name);
		cout<<"\tEnter Price Of Dish:";
		cin>>price; 
	}

void Main::output()
		{
			cout<<name<<"\t\t\t Rs. "<<price<<endl;
		}


void Naan::input()   //scope resoulation operator //Structure 3
		{
		cin.ignore();
		cin.clear();
		cout<<"\tEnter Name Of Dish: ";
		getline(cin,name);
		cout<<"\tEnter Price Of Dish:";
		cin>>price; 
	}

void Naan::output()
		{
			cout<<name<<"\t\t\t Rs. "<<price<<endl;
	}




void coldDrink::input()   //scope resoulation operator //Structure 4
		{
		cin.ignore();
		cin.clear();
		cout<<"\tEnter Name Of Dish: ";
		getline(cin,name);
		cout<<"\tEnter Price Of Dish:";
		cin>>price; 
	}

void coldDrink::output()
		{
			cout<<name<<"\t\t Rs. "<<price<<endl;
	}














void menuFunction()   // For Both Users 
	{
	int choice;
	int choice1;
	int quantity; 
	char doChoice;

	do 
	{

	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::: \" WELCOME TO MEAL ODERING SYSTEM \" ::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	
	cout<<endl;
	cout<<"\tPress 1 For Stater: \n";
	cout<<"\tPress 2 For Main: \n";
	cout<<"\tPress 3 For Naan Roti: \n";
	cout<<"\tPress 4 For Cold Drink: \n\n";
	cout<<"\tEnter Your Choice: ";
	cin>>choice;
	


	switch (choice){
	case 1:
		cout<<endl;
		cout<<"\t\t\tDish Name"<<"\t\t\t Price" <<endl<<endl;
		for (int i=0; i<staterCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			statermenu[i].output();
		}
		


		break;
	case 2:
		cout<<endl;
		cout<<"\t\t\tDish Name"<<"\t\t\t\t Price" <<endl;
		cout<<endl;
		for (int i=0; i<mainCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			mainMenu[i].output();
		}
		break;

	case 3:
		cout<<endl;
		cout<<"\t\t\tDish Name"<<"\t\t\t\t Price" <<endl;
		cout<<endl;
		for (int i=0; i<naanCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			naanMenu[i].output();
		}

		break;

	case 4:
		cout<<endl;
		cout<<"\t\t\tDrink  Names"<<"\t\t Price"<<endl;
		cout<<endl;
		for(int i=0; i<drinkCount; i++){
			cout<<"\tPress "<<i+1<<" For: ";
			drinkMenu[i].output();
		}
		break;

	default :
			{ 
			cout<<"\tInValid Entry!";
			}

			break;
	}

	cout<<endl;

		cout<<"\tEnter Your Choice: ";
		cin>>choice1;

		//
		//if (choice1 <= 0 || choice1 >= 5){
		//	cout<<"\n\t Invalid Entery ";
		//	cout<<"\n\t Press any key to goto user menu ";

		//	_getch();
		//	return saleManFunction();
		//}
		




		cout<<"\tEnter Quantity: ";
		cin>>quantity;

		if (quantity <= 0){
			cout<<"\n\t Invalid Entery ";
			cout<<"\n\t Press any key to goto user menu ";

			_getch();
			return saleManFunction();
		}
		

		 switch (choice) {
        case 1:
            if (choice1 > 0 && choice1 <= staterCount) {

				itemSelected[itemCount].name = statermenu[choice1 - 1].name;
                itemSelected[itemCount].price = statermenu[choice1 - 1].price * quantity;
                itemSelected[itemCount].quantity = quantity;
                itemCount++;
			}
		
            break;

        case 2:
            if (choice1 > 0 && choice1 <= mainCount) {
        	itemSelected[itemCount].name = mainMenu[choice1 - 1].name;
			itemSelected[itemCount].price = mainMenu[choice1 - 1].price * quantity;
                itemSelected[itemCount].quantity = quantity;
                itemCount++;
            }
			
            break;

        case 3:
            if (choice1 > 0 && choice1 <= naanCount) {
            itemSelected[itemCount].name = naanMenu[choice1 - 1].name;
			itemSelected[itemCount].price = naanMenu[choice1 - 1].price * quantity;
                itemSelected[itemCount].quantity = quantity;
                itemCount++;
            }
			
            break;

        case 4:
            if (choice1 > 0 && choice1 <= drinkCount) {
               itemSelected[itemCount].name = drinkMenu[choice1 - 1].name;
			itemSelected[itemCount].price = drinkMenu[choice1 - 1].price * quantity;
                itemSelected[itemCount].quantity = quantity;
                itemCount++;
            }
			
            break;

		default :
			{ 
			cout<<"Invalid Entry!";
			}
			break;

    }
		 cout<<endl;
		 cout<<"\tPress Y To Add More & other Key To Exit:";
		 cin>>doChoice;

	}while(toupper(doChoice) == 'Y');
	Bill();

	}



	
void Bill()		// For Billing Both Users 
{
	system("cls");
    float total = 0;
	float gst1=15.0;
	float gst=0;
	float total1=0;
	float sc1=5.0;
	float sc=0;

	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::: \" ORDER CHOICE \" :::::::::::::::";
	cout<<"\n\t::::::: \" YOUR SELECTED  ITEMS ARE   \" ::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << "\n\n\tItem Name\t\tQuantity\t\tPrice\n\n";
    
	for (int i = 0; i < itemCount; i++) {
		itemSelected[i].output();
		total += itemSelected[i].price;
    }
	gst=(total*gst1)/100;
	sc=(total*sc1)/100;
	total1=(total+gst+sc);



	cout<<endl<<endl;
	cout<<"\tPress Any Key To Conntinue To Final Bill :  ";
	_getch();

	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::: \" BILL SUMMARY \" :::::::::::::::";
	cout<<"\n\t:::::::::: \" YOUR TOTAL BILL IS   \" :::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<endl<<endl;

	cout<<"\tTotal Bill: Rs. "<<total;
	cout<<"\n\tGeneral Sales Tax (Gst) 15% : "<<gst<<endl;
	cout<<"\tService Charge (S.C) 5% : "<<sc<<endl;
	cout<<"\n\tYour Grand Total Bill : "<<total1<<endl;
    



	cout<<endl<<endl;
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::::::: \" THANKS  FOR  ORDERING  \" ::::::::::";
	cout<<"\n\t::::::::::: \" SEE  YOU  AGAIN    \" ::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\t:::::::::::::::::::::::::::::::::::::::::::::::";
}

void  SelectedItem::output() //Item
	{
        cout<<"\t"<<name<<"\t\tQuantity: "<<quantity<<"\t\tRs. "<< price<<endl;

    }












void addItems()           // Only For Admin To Add items
{
	int additems=0;
	int choice=0;
	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::: \" WELCOME TO ADMIN PORTAL SYSTEM \" ::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\t::::::::::: \" --- ADD Items --- \" :::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n\n";

	cout<<"\tPress 1 For Stater: \n";
	cout<<"\tPress 2 For Main: \n";
	cout<<"\tPress 3 For Naan Roti: \n";
	cout<<"\tPress 4 For Cold Drink: \n";
	cout<<"\n\tSelect Catagory : ";
	cin>>choice;
	cout<<"\tHow many Items do you want to Add: ";
	cin>>additems;
	switch(choice)
	{
	case 1:
		for(int i=0; i<additems; i++)
		{
			statermenu[staterCount].input();
			staterCount++;

			
			cout<<"\n\tItem Added successfully.\n";
			cout<<"\tPress Any Key To Goto Main Menu: \n ";
			_getch();
		}
		adminFuncation();
		break;

	case 2:
		
		for(int i=0;i<additems;i++)
		{
			mainMenu[mainCount].input();
			mainCount++;

			
			cout<<"\n\tItem Added successfully.\n";
			cout<<"\tPress Any Key To Goto Main Menu: \n ";
			_getch();

		}
		adminFuncation();
		break;

	case 3:
		for(int i=0;i<additems;i++)
		{
			naanMenu[naanCount].input();
			naanCount++;

				
			cout<<"\n\tItem Added successfully.\n";
			cout<<"\tPress Any Key To Goto Main Menu: \n ";
			_getch();
		}
		adminFuncation();

		break;

	case 4:
		for(int i=0;i<additems;i++)
		{
			drinkMenu[drinkCount].input();
			drinkCount++;

			
			cout<<"\n\tItem Added successfully.\n";
			cout<<"\tPress Any Key To Goto Main Menu: \n ";
			_getch();

		}
		adminFuncation();

		break;

	default:
		cout<<"\n\tInvalid Entry ! \n";
		cout<<"\tPress Any Key To Go To Main Menu: \n";
		_getch();
		adminFuncation();
		break;
	}

}












void deleteItems()    //Only For Admin For DELETE items 
{
	int choice=0;
	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::: \" WELCOME TO ADMIN PORTAL SYSTEM \" ::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\t::::::::::: \"-- Delete Items --\" :::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n\n";

	cout<<"\tPress 1 For Stater: \n";
	cout<<"\tPress 2 For Main: \n";
	cout<<"\tPress 3 For Naan Roti: \n";
	cout<<"\tPress 4 For Cold Drink: \n";
	cout<<"\n\tSelect Catagory: ";
	cin>>choice;

	switch (choice){
		

	case 1:{
	for (int i=0; i<staterCount; i++) {
    cout<<"\tPress "<<i+1<<" For: ";
    statermenu[i].output();
	}

	int delIndex;
	cout<<"\n\tEnter the item number to delete (1 to " <<staterCount<<"): ";
	cin>>delIndex;

	if (delIndex < 1 || delIndex > staterCount) {
    cout << "\tInvalid item number.\n";
	}
	
	else 
	{ 
    for (int i=delIndex-1; i<staterCount-1; i++) {
       statermenu[i]=statermenu[i + 1];
    }
    staterCount--; // kam krna ko
    cout<<"\tItem deleted successfully.\n";
	}

	break;
		   }



	case 2:{
		for (int i=0; i<mainCount; i++) {
    cout<<"\tPress "<<i+1<<" For: ";
    mainMenu[i].output();
	}

	int delIndex;
	cout<<"\n\tEnter the item number to delete (1 to " <<mainCount<<"): ";
	cin>>delIndex;

	if (delIndex < 1 || delIndex > mainCount) {
    cout << "\tInvalid item number.\n";
	}
	
	else 
	{
			
    for (int i=delIndex-1; i<mainCount-1; i++) {
        mainMenu[i]=mainMenu[i + 1];
    }

    mainCount--; 
    cout<<"\tItem deleted successfully.\n";

	}
		break;
		   }



	case 3:{
		for (int i=0; i<naanCount; i++) {
    cout<<"Press "<<i+1<<" For: ";
    naanMenu[i].output();
	}

	int delIndex;
	cout<<"\n\tEnter the item number to delete (1 to " <<naanCount<<"): ";
	cin>>delIndex;

	if (delIndex < 1 || delIndex > naanCount) {
    cout << "\tInvalid item number.\n";
	}
	
	else 
	{
			
    for (int i=delIndex-1; i<naanCount-1; i++) {
        naanMenu[i]=naanMenu[i + 1];
    }

    naanCount--; 
    cout<<"\tItem deleted successfully.\n";

	}
		break;
		   }



	case 4:{
		for (int i=0; i<drinkCount; i++) {
    cout<<"\tPress "<<i+1<<" For: ";
    drinkMenu[i].output();
	}

	int delIndex;
	cout<<"\n\tEnter the item number to delete (1 to " <<drinkCount<<"): ";
	cin>>delIndex;

	if (delIndex < 1 || delIndex > drinkCount) {
    cout << "\tInvalid item number.\n";
	}
	
	else 
	{
			
    for (int i=delIndex-1; i<drinkCount-1; i++) {
       drinkMenu[i]=drinkMenu[i + 1];
    }

    drinkCount--; 
    cout<<"\tItem deleted successfully.\n";

	}
		break;
		   }

	default:
		cout<<"\tInvald Entered ! ";
		break;
	}
	    
		cout<<"\n\tPress Any Key To Go To Main Menu: \n";
		_getch();
		 return adminFuncation();

}

















void changeprice()       // Only For Admin To Change Price 
{
    int choice=0;
    int index=0;
	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::: \" WELCOME TO ADMIN PORTAL SYSTEM \" ::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\t::::::::: \" --- Change Price --- \" ::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n\n";

	cout<<"\tPress 1 For Stater: \n";
	cout<<"\tPress 2 For Main: \n";
	cout<<"\tPress 3 For Naan Roti: \n";
	cout<<"\tPress 4 For Cold Drink: \n";
	cout<<"\n\tSelect Catagery: ";
	cin>>choice;
	cout<<endl;

	switch (choice)
    {
        case 1:
         for(int i=0; i<staterCount; i++)
         {
            cout<<"\tPress "<<i+1<<" For: ";
            statermenu[i].output();

         }
         cout<<"\n\tEnter Item Number To Change Price: ";
         cin>>index;
         index--;
         cout<<"\tEnter New Price: ";
         cin>>statermenu[index].price; 
         cout<<"\n\tPrice Changed uccessfuly!"<<endl;

		 cout<<endl;
		 cout<<"\tOnly For Confromation Display Menu After Change Price: \n\n";
         for (int i = 0; i < staterCount; i++) 
         {                                     
            cout<<"\tPress "<<i+1<<" For: ";
            statermenu[i].output();
         }
		  cout<<"\n\tPress Any Key To Go On Main Menu: ";
		 _getch();
		 adminFuncation();


           break;

		case 2:
         for(int i=0; i<mainCount; i++)
         {
            cout<<"\tPress "<<i+1<<" For: ";
            mainMenu[i].output();
         }
         cout<<"\n\tEnter Item Number To Change Price: ";
         cin>>index;
		 index--;
         cout<<"\n\tEnter New Price: ";
         cin>>mainMenu[index].price;
		 cout<<"\n\tPrice Changed uccessfuly!"<<endl;

		 cout<<endl;
		 cout<<"\tOnly For Confromation Display Menu After Change Price: \n\n";
         for (int i = 0; i < mainCount; i++)
         {                                     
            cout<<i+1<<": ";
            mainMenu[i].output();
         } 
		 cout<<"\n\tPress Any Key To Go On Main Menu: ";
		 _getch();
		 adminFuncation();


           break;

		case 3:
         for(int i=0; i<naanCount; i++)
         {
            cout<<"\tPress "<<i+1<<" For: ";
            naanMenu[i].output();
         }
         cout<<"\n\tEnter Item Number To Change Price: ";
         cin>>index;
		 index--;
         cout<<"\n\t Enter New Price: ";
         cin>>naanMenu[index].price;
         cout<<"\nPrice Changed uccessfuly!"<<endl;

		 cout<<endl;
		 cout<<"Only For Confromation Display Menu After Change Price: \n";
         for (int i = 0; i < naanCount; i++)
         {                                     
            cout<<i+1<<": ";
            naanMenu[i].output();
         }
		  cout<<"\n\tPress Any Key To Go On Main Menu: ";
		 _getch();
		 adminFuncation();


           break;



		case 4:
         for(int i=0; i<drinkCount; i++)
         {
            cout<<"\tPress "<<i+1<<" For: ";
            drinkMenu[i].output();
         }
         cout<<"\n\t Enter Item Number To Change Price: ";
         cin>>index;
		 index--;
         cout<<"\n\tEnter New Price: ";
         cin>>drinkMenu[index].price;
         cout<<"\n\tPrice Changed uccessfuly!"<<endl;

		 cout<<endl;
		 cout<<"\tOnly For Confromation Display Menu After Change Price: \n\n";
         for (int i = 0; i < drinkCount; i++)
         {                                     
            cout<<i+1<<": ";
            drinkMenu[i].output();
         }
		 cout<<"\n\tPress Any Key To Go tn Main Menu: ";
		 _getch();
		 adminFuncation();

           break;

		default:
		cout<<"\n\tInvalid Entry ! \n";
		cout<<"\tPress Any Key To Go To Main Menu : \n";
		_getch();
		adminFuncation();
			break;
    }

}











void UserFunction()
{
	char choice;		 //select users
	char choice2;		 //loop
	string pin;			//input pin from user
	string user;		//input password from user
	string username1="admin";		 // for  admin 
	string username2="user";		// for user
	string pin1="1234";			   // admin password
	string pin2="1122";           // user password

	
	do
	{

	system("cls");
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t::::: \" WELCOME TO MEAL ODERING SYSTEM \" ::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::";
	cout<<"\n\t:::::::::::::::::::::::::::::::::::::::::::::::\n";
	cout<<"\n\tChoose Your Role: \n";
	cout<<"\tPress A For Administartion Panel: \n";
	cout<<"\tPress U for User Panel : \n\n";
	
	

		cout<<"\n\tEnter Choice: ";
		cin>>choice;


	
	switch(toupper(choice))
  {

	case 'A':
		cout<<"\n\tEnter User Name: ";
		cin>>user;
		cout<<"\tEnter Pin: ";
		cin>>pin;

		if (user==username1 && pin==pin1  ){
			cout<<"\n\tAdmin Log in Successfull. \n\tPress Any Key To Continue: ";
			_getch();
			cout<<endl;
			system("cls");
			adminFuncation();
		}

		
		
		else {
               cout<<"\n\tInvalid Entry ! Try Again!";
			  
        }
	    
		break;
	

	case 'U':

		cout<<"\n\tEnter User Name: ";
		cin>>user;
		cout<<"\tEnter Pin: ";
		cin>>pin;

		if ( user== username2 && pin == pin2){
			cout<<"\n\tUser Login Successfull. \n\tPress Any Key To Continue:  ";
			_getch();
			cout<<endl;
			system("cls");
			saleManFunction();
		}

		else {
               cout<<"\n\tInvalid Entry! Try Again!";
			   
        }

		break;

	default:
		{
			cout<<"\tInvalid Entered ! ";
			cout<<"\n \n\tPress Y To Continue And Other Key To Exit: ";
			_getch();
			return UserFunction();
		}
		break;

	}


	cout<<"\n \n\tPress Y To Continue And Other Key To Exit: ";
	cin>>choice2;

	} while (toupper(choice2) == 'Y');


}







