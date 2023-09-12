#include <iostream>
using namespace std;
class Test{
    int age;
    public:
    Test(int x){
        age=x;
    }
    Test(Test &n){
        age=n.age;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Test rrr(10);
        cout<<"Age is: "<<rrr.getAge()<<endl;

        Test abc (rrr);
        cout<<"New Age is: "<<abc.getAge()<<endl;
}