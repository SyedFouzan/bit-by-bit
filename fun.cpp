#include<iostream>
using namespace std;
int main()
{
  int a=10;
  float b=75.8676;
  a=b;
  //b=a;
  cout<<a<<endl<<b<<endl<<sizeof(long double);
  return 0;
}
/*struct student
{
  int rn,ag,m;
} r;
void display( )
{
  cout << "Roll no  "<<r.rn;
  cout<< "age is "<< r.ag;
  cout<<"marks is "<< r.m;
}
int main()
{
  cout<< "Enter your rollno,age,marks\n";
  cin >>r.rn >>r.ag >> r.m;
  display();
  return 0;
}
*/

// parameters are of 3 kinds
//pass by value
//pass by address
//pass by reference
//linked list
// 1st node 2nd value

/*

void swap(int &x,int &y)
{
  int temp=0;
  temp=x;
  x=y;
  y=temp;
  cout<<x<<"\t"<<y;


}
int main()
{
  int a=10,b=20;
  swap(a,b);
  cout<<endl<<a  <<"\t" <<  b;
 return 0;
}
*/

/*int para1(int x,int y)
{
  int sum=x+y;
  return sum;

}
int main()
{
  //int a,b;
  //cin>>a>>b;
  int result =para1(2,4);
  cout<<"The result "<<result;

  return 0;
}
*/
//struct rectangle
/*
struct rectangle
{
  int l,b;//attribute of rectangle;

}  ;


int main()
{
  struct rectangle r1;
  cout<<"Enter the lenght and breadth\n";
  cin>> r1.l >> r1.b;
  int p = 2*(r1.l + r1.b);
  int area = r1.l*r1.b;
  cout<<"Perimeter and area of rectangle is"<<  area <<endl << p ;
}
*/

  /*
  int lenght,breadth,area;
  cout<<"Enter leght and breadth of rectangle";
  cin>>lenght>>breadth;
  area=lenght*breadth;
  cout<<"area = "<<area;
  return 0;
  */



/*
function4()
{
  int a,b,sum;
  cin>>a>>b;
  sum=a+b;
  cout<< "The result is" <<sum;
}
int main()
{
  int A[5];
  int result = function4();
  cout<<endl<<result;
  return 0;
}
*/

/*
int function3(  )-->extra line of execution when parameters are there
{
  int a,b;
  cout<<"Enter a and b\n";
  cin>>a>>b;
  cout<< " a = "<< a <<" b = "<< b;
  //sum=a+b;
  return a+b;
}

int main()
{
 int result=function3();
   cout<< endl <<"result = "<< result;

  return 0;
}
*/
// for ;
//types of functions
//function 1 with arguments and return value
//function 2 with arguments and no return value
//function 3 without arguments with return value
//function 4 without arguments without return value
/*void funtion2(int x,int y)
{
  int sum;
  sum=x+y;
  cout<<"sum of a & b is    "<<sum;
}
int main()
{
  int x,y;
  cout<<"Enter the values x & y"<<endl;
  cin>>x>>y;
  funtion2(x,y);
  return 0;
}
*/
/* int function1(int x,int y)
 {
   int sum;
   sum=x+y;
   return sum;
 }
int main()
{
  int x,y;
  cout<<"enter x & y\n";
  cin>>x>>y;
  int result = function1(x,y);
  cout<<"Sum of "<<"  a=  "<<x<<"  b=  "<<y<<"  is :"<<result;
  return 0;
}
*/
/*
int main()
{
  cout<<"Looping\n";
  //int A[5];
  for(int i=0; i<5; i++)
  {
    cout<<"hello\n";
  }

  return 0;
}
*/
/*
int main()
{
int temp=40;
//== equality //= assignment for that variable
// <,> --> less than & greater operator||-->>or operator && ->and operator
if(temp<0)
{
  cout<<"frezing";
}

else if(temp>0 && temp<30)
{
  cout<<"sunny weather";
}
  else
  cout<<"not freezing";

  return 0;
}
*/
