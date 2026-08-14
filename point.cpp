
#include <iostream>
using namespace std;
class point
{
    private:
         int x,y;
    public:
        point() :x(0),y(0) {
            cout<<"Default Constructor"<<endl;}
        point(int p,int q):x(p),y(q) {
            cout<<"Parameterised Constructor"<<endl;
        }
        void show ()
        {
            cout<<x<<","<<y<<endl;
        }   
        point add(point q){
             return point (x+q.x,y+q.y);

        }  

};
int main(){
    point p(5,10),q(20,50);
    p.show();
    q.show();
    point r=p.add(q);
    r.show();

}