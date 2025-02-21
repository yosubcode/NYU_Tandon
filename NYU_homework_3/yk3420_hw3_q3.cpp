#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    double x1, x2;
    double sqrtResult;

    cout<<"Please enter value of a: ";
    cin>>a;
    cout<<"Please enter value of b: ";
    cin>>b;
    cout<<"Please enter value of c: ";
    cin>>c;

    // Calculate x1 and x2 value by using the quadratic equation.
    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    // cout<<x1<<endl;
    // cout<<x2<<endl;
 
    // Set decimal point.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    // Classify the solutions.
    if (a==0 && b==0 && c==0)
        cout<<"This equation has Infinite number of solutions";
    else if (a==0 && b==0 && c!=0)
        cout<<"This equation has No solution";
    else if (a!=0 && b==0 && c!=0)
        cout<<"This equation has No real solution";
    else if (a!=0 && b!=0 && c!=0){
        // If a,b,c are not 0, check if x1 and x2 are same.
        if (x1 == x2)
            cout<<"This equation has a single real solution x="<<x1;
        else
            cout<<"This equation has Two real solutions x1="<<x1<<", x2="<<x2;
    }

    return 0;
}




// Question	3:
// Write	a	program	that	does	the	following:
// • Ask	user	to	input	three	Real numbers	a,	b	and	c.	They	represent	the	parameters	of	a	
// quadratic	equation	ax^2 + bx + c = 0
// • Classify	to	one	of	the	following:	
// - ’Infinite	number	of	solutions’	(for	example,	0x^2 + 0x + 0 = 0 has infinite number	of	solutions)
// - ’No	solution’	(for example,	0x^2 + 0x + 4 = 0 has no	solution)
// - ’No	real	solution’	(for example,	x! + 4 = 0 has	no	real	solutions)
// - ’One	real	solution’
// - ’Two	real	solutions’
// • In	cases	there	are	1	or	2	real	solutions,	also	print	the	solutions.
// Notes:
// 1. If	� ≠ 0 and	there	are	real	solutions	to	the	equation,	you	can	get	these	solutions	using	
// the	following	formula:
// �",! = −� ± √�! − 4��
// 2�
// The	number	of	solutions	depends	on	whether	(b2 -4ac) is	positive,	zero,	or	negative.
// 2. In	order	to	calculate	the	square	root	of	a	number	(of	type	double),	you	should	call	the	
// sqrt function,	located	in	the	cmath library.	
// Follow	the	syntax as demonstrated	in	the	code	below:
// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//  double x = 2.0;
//  double sqrtResult;

//  sqrtResult = sqrt(x);
//  cout<<sqrtResult<<endl;
//  return 0;
// }
// Note	that	you	first	need	to	include	the	cmath library,	and	then	you	can call	the	sqrt
// function, passing	the	argument	that	you	want	to	calculate	the	square	root	of,	enclosed	in	
// parentheses.
// Your	program	should	interact	with	the	user	exactly as	it	shows	in	the	following	example:
// Please	enter	value	of	a: 1
// Please	enter	value	of	b: 4
// Please	enter	value	of	c: 4
// This	equation	has	a	single	real	solution	x=-2.0