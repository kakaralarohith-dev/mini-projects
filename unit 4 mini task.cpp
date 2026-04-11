#include<iostream>
#include<cmath>
using namespace std;

class Point {
public:
    float x,y;

    Point(float a=0,float b=0){  
        x=a;
        y=b;
    }

    Point operator+(Point p){
        return Point(x+p.x,y+p.y);
    }
    Point operator-(Point p){
        return Point(x-p.x,y-p.y);
    }

    void display(){
        cout<<"("<<x<<","<<y<<")";
    }

    float distance(Point p){
        return sqrt(pow(x-p.x,2)+pow(y-p.y,2));
    }
};

class Line{
public:
    Point p1,p2;

    Line(Point a,Point b){
        p1=a;
        p2=b;
    }

    float length(){
        return p1.distance(p2);
    }
    
    Point midpoint(){
        return Point((p1.x+p2.x)/2,(p1.y+p2.y)/2);
    }

    float slope(){
        return (p2.y-p1.y)/(p2.x-p1.x);
    }

    void display(){
        cout<<"Line from ";
        p1.display();
        cout<<" to ";
        p2.display();
        cout<<endl;
    }
};

float triangleArea(Point a,Point b,Point c){
    return abs(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))/2;
}

int main(){

    Point p1(5,3);
    Point p2(6,7);
    Point p3(7,5);

    cout<<"Point 1 = "; p1.display();
    cout<<"\nPoint 2 = "; p2.display();

    Point p4=p1+p2;
    cout<<"\n \nAddition of points = ";
    p4.display();

    Point p5=p2-p1;
    cout<<"\n \nSubtraction of points = ";
    p5.display();

    cout<<"\n \nDistance between p1 and p2 = "<<p1.distance(p2)<<endl;

    Line L(p1,p2);
    L.display();

    cout<<"\n \nLength of line = "<<L.length()<<endl;

    Point mid=L.midpoint();
    cout<<"Midpoint = ";
    mid.display();

    cout<<"\n \nSlope = "<<L.slope()<<endl;

    cout<<"\n \nArea of triangle = "<<triangleArea(p1,p2,p3)<<endl;

    return 0;
}
