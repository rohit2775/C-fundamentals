
 // to add two complex numbers (need to enhance the code for better resulting ...)

 #include<iostream>
 using namespace std ;

 class complexno {
    private:
    int a;
    int b;
    public:
    void setdata(int x , int y ){
    a=x;
    b=y;
    }
    void showdata(){
        cout<<"a="<<a<<"b="<<b<<endl;

    }

    complexno add (complexno c ){
       complexno temp ;
        temp.a=a+c.a;
        temp.b=b+c.b;

        return temp;


    }

 };

 int main (){

     complexno c1,c2,c3;
     c1.setdata(3,5);
     c2.setdata(6,7);
     c3=c1.add(c2);


    return 0;
 }