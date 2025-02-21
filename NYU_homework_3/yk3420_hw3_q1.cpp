#include <iostream>
using namespace std;

int main(){
    double item1, item2;
    char clubCard;
    double taxRate, basePrice, discountedPrice, totalPrice;

    cout<<"Enter price of first item: ";
    cin>>item1;
    cout<<"Enter price of second item: ";
    cin>>item2;
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>clubCard;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;

    basePrice = item1 + item2;
    discountedPrice = 0.0;
    
    // Calculate the Buy one get one half off promotion on item1 when item 1 is less or equal to item 2.
    if (item1 <= item2) {
        discountedPrice = item2 + item1*0.5;

        // Calculate the membership discount of 10%
        if (clubCard =='Y' || clubCard =='y')
            discountedPrice -= discountedPrice*0.1;
        else
            discountedPrice;
        }

    else {
        discountedPrice = item1 + item2*0.5;

        // Calculate the membership discount of 10%
        if (clubCard =='Y' || clubCard =='y')
            discountedPrice -= discountedPrice*0.1;
        else
            discountedPrice;
        }

    // Calculate the totalPrice by adding tax into discountedPrice.
    totalPrice = discountedPrice + (discountedPrice*taxRate*0.01);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout<<"Base price: "<<basePrice<<endl;
    cout<<"Price after discounts: "<<discountedPrice<<endl;
    
    cout.precision(5);
    cout<<"Total price: "<<totalPrice<<endl;

    return 0;
}



// Question	1:	
// Write	a	program	that	computes	how	much	a	customer	has	to	pay	after	purchasing	two	
// items.	The	price	is	calculated	according	to	the	following	rules:

// • Buy	one	get	one	half	off	promotion:	the	lower	price	item	is	half	price.
// • If	the	customer	is	club	card	member,	additional	10%	off.
// • Tax	is	added.

// Inputs	to	the	program	include:
// • Two	items’	prices
// • Have	club	card	or	not	(User	enters	‘Y’	or	‘y’	for	“yes”;	‘N’	or	‘n’	for	“no”)
// • Tax	rate	(User	enters	the	percentage	as	a	number;	for	example	they	enter	8.25	if	the	tax	rate	is	8.25%)

// Program	displays:
// • Base	price	- the	price	before	the	discounts	and	taxes	
// • Price	after	discounts	- the	price	after	the	buy	one	get	one	half	off	promotion	and	the	member’s	discount,	if	applicable	
// • Total	price	– the	amount	of	money	the	customer	has	to	pay	(after	tax).

// Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:

// Enter	price	of	first	item: 10
// Enter	price	of	second	item: 20
// Does	customer	have	a	club	card?	(Y/N): y
// Enter	tax	rate,	e.g.	5.5	for	5.5%	tax: 8.25
// Base	price: 30.0
// Price	after	discounts: 22.5
// Total	price:	24.35625
