#include<iostream>
using namespace std;

class shape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
    virtual void input() = 0;
    
};

class rectangle : public shape {
public:
    float length, breadth;

    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area() override {
        cout << "Area of rectangle: " << length * breadth << endl;
    }

    void perimeter() override {
        cout << "Perimeter of rectangle: " << 2 * (length + breadth) << endl;
    }
};

class circle : public shape {
public:
    float radius;

    void input() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void area() override {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }

    void perimeter() override {
        cout << "Perimeter of circle: " << 2 * 3.14 * radius << endl;
    }
};
class Triangle : public shape {
public:
	float base,height,a,b,c;
	
	  void input() {
	  	   cout << "Enter BASE:\n"<<endl;
	  	   cin >> base;
	  	   cout << "Enter HEIGHT:\n"<<endl;
	  	   cin >>height;
	  	   cout << "Enter one side a:\n"<<endl;
	  	   cin >> a;
	  	   cout << "Enter one side b:\n"<<endl;
	  	   cin >> b;
	  	   cout << "Enter one side c:\n"<<endl;
	  	   cin >> c;
	  }
	  void area() override {
	  	 cout << "AREA OF Triangle:" << 0.5 * base * height << endl;
	  }
	  void perimeter() override {
	      cout << "Perimeter of Triangle:" << a + b + c <<endl;
	  }
};

int main() {
    shape* s;
    int choice;

    cout << "Choose shape:\n";
	cout <<  "1.Rectangle.\n";
	cout <<  "2.Circle.\n";
	cout <<  "3.Triangle.\n";
	cout <<  "Enter choice: ";
    cin >> choice;

    if(choice == 1) {
        rectangle r;
        r.input();
        s = &r;
        s->area();
        s->perimeter();
    }
    else if(choice == 2) {
        circle c;
        c.input();
        s = &c;
        s->area();
        s->perimeter();
    }
    else if(choice == 3) {
    	Triangle t;
    	t.input();
    	s = &t;
    	s->area();
    	s->perimeter();
	}
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
