#include <iostream>
using namespace std;



class Complex
{
private:
    float image;
    float real;

public:
    void setreal(float r);
    void setimage(float i);

    float getreal();
    float getimage();
    Complex add(Complex c);
    Complex sub (Complex c);

    void print();
};
//constractor
void Complex::setreal(float r)
{
    real = r;
}
void Complex:: setimage(float i)
{
    image = i;
}
//function that call in main
float Complex:: getreal()
{
    return real;
}
 float Complex::getimage()
 {
     return image;
 }
 //function add type complex
Complex Complex::add(Complex c)
   {
       Complex temp;
       temp.real = real +c.real;
       temp.image = image +c.image;
       return temp;
   }

 //function sub type complex
Complex Complex::sub(Complex c)
   {
       Complex temp;
       temp.real = real -c.real;
       temp.image = image -c.image;
       return temp;
   }
   //function print
   void Complex:: print()
   {
   cout<<real <<"-"<<abs(image)<<"i"<<endl;

   }

int main()
{
    Complex num1 ,num2 , res ;
    num1.setreal(3);
    num1.setimage(8);
    num2.setreal(7);
    num2.setimage(4);
    cout<<"Adding"<<endl;
    res=num1.add(num2);
    res.print();
    cout<<"Subbing"<<endl;
    res=num1.sub(num2);
    res.print();
    cout<<"Equations"<<endl;
    num1.print();
    num2.print();


    return 0;
}
