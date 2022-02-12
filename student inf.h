class information{
  protected :
      char nm1[20],nm2[20];
       int roll;
  public :

      virtual void iresult();     ///Virtual Function  & Function Overriding
      void setdata(char x[],char y[],int z);

};


class student:public information{     ///Inheritance
    protected :
  int rolll;
  float cse11,cse12,cse13,cse1,cr1=0.75,cse21,cse22,cse23,cse2,cr2=3,cse31,cse32,cse33,cse3,cr3=1.50,
        cse41,cse42,cse43,cse4,cr4=3,cse51,cse52,cse53,cse5,cr5=1.50,
        math61,math62,math63,math6,cr6=3,
        hum71,hum72,hum73,hum7,cr7=3,
        phy81,phy82,phy83,phy8,cr8=3,
        phy91,phy92,phy93,phy9,cr9=1.5,
        cgp1,cgp2,cgp3,cgp4,cgp5,cgp6,cgp7,cgp8,cgp9,cgp,l=20.5;
 public :
     void setdata(char x[],char y[],int z);
     void setcse1(int x, float p, float q, float r, float s, float t);
     void setcse2(int x, float p, float q, float r, float s, float t);
     void setcse3(int x, float p, float q, float r, float s, float t);
     void setcse4(int x, float p, float q, float r, float s, float t);
     void setcse5(int x, float p, float q, float r, float s, float t);
     void setmath6(int x, float p, float q, float r, float s, float t);
     void sethum7(int x, float p, float q, float r, float s, float t);
     void setphy8(int x, float p, float q, float r, float s, float t);
     void setphy9(int x, float p, float q, float r, float s, float t);
     float gradpoint(float x);
     void gradpoint();  ///Function Overloading
     void disresult();
     void dresult();
     void iresult();
     void frank();
     int cheak();
     void disIresult();


};

class academic{
       int *n1;
  public :
    // information(){}
      academic();     ///Constructor

      int getv()
      {
          return *n1;
      }
       ~academic(){  ///Destructor
      delete  n1;}

};


