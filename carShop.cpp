#include <iostream>
using namespace std;

class Car
{

public:
string brand, model, cond;
  
int price, yor;
  
void insert (string b, string m, int y, string c, int p)
  {
    
brand = b;
    
model = m;
    
yor = y;
    
cond = c;
    
price = p;
  
} 
void display ()
  {
    
cout << brand << " " << model << " " << yor << " " << cond << " " <<
      price << endl;

} 
};


int
main () 
{
  
Car c1;
  
Car c2;
  
Car c3;
  
Car c4;
  
Car c5;
  
c1.insert ("Honda", "ABC1", 2018, "good", 1500000);
  
c2.insert ("renault", "HWE2", 1983, "bad", 150000);
  
c3.insert ("Maruthi", "FRWC8", 2003, "average", 600000);
  
c4.insert ("toyota", "12F4", 1964, "bad", 100000);
  
c5.insert ("Nissan", "12DRC", 2019, "good", 1000000);
  
for (int i = 0; i < 10; i++)
    {
      
cout << "Enter 1 to Check for cars of a Particular Brand" << endl;
      
cout << "Enter 2 to Check for cars released in a Particular Year" <<
	endl;
      
cout << "Enter 3 to Check for Old Cars" << endl;
      
cout << "Enter 4 to Check for Condition of Cars" << endl;
      
int ch;
      
cin >> ch;
      
switch (ch)
	
	{
	
case 1:
	  
	  {
	    
cout << "Enter Brand of Car to check: ";
	    
string check;
	    
cin >> check;
	    
if (check == c1.brand)
	      {
		
c1.display ();
	      
}
	    
	    else if (check == c2.brand)
	      {
		
c2.display ();
	      
 
}
	    
	    else if (check == c3.brand)
	      {
		
c3.display ();
	      
}
	    
	    else if (check == c4.brand)
	      {
		
c4.display ();
	      
 
}
	    
	    else if (check == c5.brand)
	      {
		
c5.display ();
	      
}
	    
break;
	  
 
}
	
case 2:
	  {
	    
int yer;
	    
cout << "Enter Year to check: ";
	    
cin >> yer;
	    
if (yer == c1.yor)
	      {
		
c1.display ();
	      
}
	    
if (yer == c2.yor)
	      
	      {
		
c2.display ();
	      
}
	    
if (yer == c3.yor)
	      
	      {
		
c3.display ();
	      
}
	    
if (yer == c4.yor)
	      {
		
c4.display ();
	      
}
	    
if (yer == c5.yor)
	      {
		
c5.display ();
	      
}
	    
break;
	  
}
	
case 3:
	  {
	    
int old;
	    
cout << "Enter year to check for old cars: ";
	    
cin >> old;
	    
if (old > c1.yor)
	      {
		
c1.display ();
	      
}
	    
if (old > c2.yor)
	      {
		
c2.display ();
	      
}
	    
if (old > c3.yor)
	      {
		
c3.display ();
	      
}
	    
if (old > c4.yor)
	      {
		
c4.display ();
	      
}
	    
if (old > c5.yor)
	      {
		
c5.display ();
	      
}
	    
break;
	  
}
	
case 4:
	  {
	    
string check_cond;
	    
cout << "Condition of Car you are looking for: ";
	    
cin >> check_cond;
	    
if (check_cond == c1.cond)
	      {
		
c1.display ();
	      
}
	    
if (check_cond == c2.cond)
	      {
		
c2.display ();
	      
}
	    
if (check_cond == c3.cond)
	      {
		
c3.display ();
	      
}
	    
if (check_cond == c4.cond)
	      {
		
c4.display ();
	      
}
	    
if (check_cond == c5.cond)
	      {
		
c5.display ();
	      
}
	  
}
	
}
    
}
  
return 0;

}
