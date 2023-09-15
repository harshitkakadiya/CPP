// maths function
/*
    ceil => round up value
    floor => round down value 
    round => rounded value
    sqrt => square root of value
    pow(x,y) => x to power y
    abs => absolute value
    rand() => generate random value
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
        cout<<"Value is Ceil: "<<ceil(5.2)<<endl;
        cout<<"Value is Ceil: "<<ceil(-5.8)<<endl;

        cout<<"---------------------"<<endl;

        cout<<"Value is Floor: "<<floor(5.2)<<endl;
        cout<<"Value is Floor: "<<floor(-5.8)<<endl;

        cout<<"---------------------"<<endl;

        cout<<"Value is Round: "<<round(5.2)<<endl;
        cout<<"Value is Round: "<<round(5.8)<<endl;

        cout<<"---------------------"<<endl;

        cout<<"Value is Sqrt: "<<sqrt(64)<<endl;
        cout<<"Value is Sqrt: "<<sqrt(5)<<endl;

        cout<<"---------------------"<<endl;

        cout<<"Value is Power: "<<pow(2,5)<<endl;
        cout<<"Value is Power: "<<pow(3,3)<<endl;

        cout<<"---------------------"<<endl;

        cout<<"Value is Absolute: "<<abs(2)<<endl;
        cout<<"Value is Absolute: "<<abs(-3)<<endl;

        cout<<"---------------------"<<endl;

        cout<<"Value is Random: "<<rand()%100<<endl;
        cout<<"Value is Random: "<<rand()%50<<endl;
        cout<<"Value is Random: "<<rand()%30+1<<endl;
}