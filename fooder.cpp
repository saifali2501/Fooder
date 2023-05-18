#include<iostream>
using namespace std;
class food{
	public:
			string a;
	int s ,y=1,n=0;
	void pizza(){
		int add,total=0,b,c;
			cout<<"\nYou Have Selected Pizza.";
	    cout<<"\n\n1 Veg Pizza Rs.100";
		cout<<"\n2 Veg Cheese Pizza Rs.150";
		cout<<"\n3 Veg Maharaja Pizza Rs.450";	
	cout<<"\n\n1Enter Which Pizza You Would like to have?:";
	cin>>b;
	if(b==1){
		cout<<"You Have Selected Veg Pizza";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=100*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	}
    else if(b==2){
     		cout<<"You Have Selected Veg Cheese Pizza";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=150*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	 else {
	 		cout<<"You Have Selected Maharaja Pizza";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=450*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	}
	void burger(){
			int add,total=0,b,c;
			cout<<"\nYou Have Selected Burger.";
	    cout<<"\n\n1 Veg Burger Rs.100";
		cout<<"\n2 Veg Crispy Cheese Burger Rs.180";
		cout<<"\n3 Veg Maharaja Burger Rs.220";	
	cout<<"\n\n1Enter Which Burger You Would like to have?:";
	cin>>b;
	if(b==1){
		cout<<"You Have Selected Veg Burger";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=100*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	}
    else if(b==2){
     		cout<<"You Have Selected Veg Crispy Cheese Burger";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=180*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	 else {
	 		cout<<"You Have Selected Maharaja Burger";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=220*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	}
	void sandwich(){
			int add,total=0,b,c;
			cout<<"\nYou Have Selected Sandwich.";
	    cout<<"\n\n1 Club Sandwich Rs.240";
		cout<<"\n2 Veg Crispy Sandwich Rs.160";
		cout<<"\n3 Extream Veg Sandwich Rs.100";	
	cout<<"\n\n1Enter Which Sandwich You Would like to have?:";
	cin>>b;
	if(b==1){
		cout<<"You Have Selected Club Sandwich";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=240*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	}
    else if(b==2){
     		cout<<"You Have Selected Veg. Crispy Sandwich";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=160*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	 else {
	 		cout<<"You Have Extream Veg SAndwich";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=100*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	}
     void Rolls(){
     		int add,total=0,b,c;
			cout<<"\nYou Have Selected Rolls.";
	    cout<<"\n\n1 Veg Noodles Roll Rs.60";
		cout<<"\n2 Veg Cheese Roll Rs.110";
		cout<<"\n3 Chinese Roll Rs.90";	
	cout<<"\n\n1Enter Which Roll You Would like to have?:";
	cin>>b;
	if(b==1){
		cout<<"You Have Selected Veg Noodle Roll";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=60*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	}
    else if(b==2){
     		cout<<"You Have Selected Veg Cheese Roll";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=110*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	 else {
	 		cout<<"You Have Selected Chinese Roll";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=90*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	}
	 void Biryani(){
	 		int add,total=0,b,c;
			cout<<"\nYou Have Selected Biryani.";
	    cout<<"\n\n1 Veg Biryani Rs.100";
		cout<<"\n2 Veg Hydrabadi Biryani Rs.200";
		cout<<"\n3 Special Kabab Biryani Rs.280";	
	cout<<"\n\n1Enter Which Biryani You Would like to have?:";
	cin>>b;
	if(b==1){
		cout<<"You Have Selected Veg Biryani";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=100*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	}
    else if(b==2){
     		cout<<"You Have Selected Veg Hydrabadi biryani";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=200*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	 else {
	 		cout<<"You Have Selected Special Kabab Biryani";
		cout<<"\nEnter the Quantity :";
		cin>>c;
		add=280*c;
		total=add+total;
		cout<<"Amount :"<<add;
		cout<<"\n\nTotal Amount is:"<<total;
	 }
	}
		void name(){
		cout<<"\t-----------Tops Tech. Fast Food------------"<<endl;
		cout<<"\n\nPlease Enter Your Name:"<<endl;
		cin>>a;
		cout<<"\n\nWhat You Would Like To Order?";
		cout<<"\n\n\t\t\t\t------Menu-------";
		cout<<"\n\n1)  Pizzas";
		cout<<"\n2)  Burgers";
		cout<<"\n3)  Sandwich";
		cout<<"\n4)  Rolls";
		cout<<"\n5)  Biryani";
		cout<<"\n\n\nPlease Enter Your choice:";
		cin>>s;
switch(s){
	case 1:
		pizza();
		break;
		case 2:
			burger();
			break;
			case 3:
				sandwich();
				break;
				case 4:
					Rolls();
					break;
					case 5:
					Biryani();
					break;
					default :
						cout<<"Sorry! Dish is Not Available";
						break;
	}
	while(y>0||y<1){
		cout<<"\n\nDo You Want to Order One More Item?(y/n):-";
		cin>>y;
		if(y==0){
			cout<<"\nThank You For Shopping.";
			break;
		}
			cout<<"\nWhat You Would Like To Order?";
		cout<<"\n\n\t\t\t\t------Menu-------";
		cout<<"\n\n1)  Pizzas";
		cout<<"\n2)  Burgers";
		cout<<"\n3)  Sandwich";
		cout<<"\n4)  Rolls";
		cout<<"\n5)  Biryani";
		cout<<"==================================="<<endl;
		cout<<"Enter Your Choice..."<<endl;
		cin>>s;
		switch(s){
	case 1:
		pizza();
		break;
		case 2:
			burger();
			break;
			case 3:
				sandwich();
				break;
				case 4:
					Rolls();
					break;
					case 5:
					Biryani();
					break;
					default :
						cout<<"Sorry! Dish is Not Available";
						break;
	}
	}
	cout<<"\n\nYour Order Will be delivered in 40 Minutes.";
}
};
int main(){
	food obj;
	obj.name();
	return 0;
}
