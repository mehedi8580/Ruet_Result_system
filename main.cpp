#include<bits/stdc++.h>
#include"student inf.h"
using namespace std;

int main()
{
int n;
academic obin;
n=obin.getv();
class student *ob,*ob2;
information obi[n],*ptr;
ob=new student[n];                                             ///Dynamic Memory Allocation
ob2=new student;
 char a[20],b[20];
 int rol,m1,m2,m3,op,r,r1;
 float g;
 ifstream in;
 in.open("mehedi.txt");
 for(int i=0;i<n;i++){
    in>>a>>b>>rol;
      obi[i].setdata(a,b,rol);
 }
 in.close();
 in.open("cse1200.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setcse1(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();
in.open("cse1201.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setcse2(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();
in.open("cse1202.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setcse3(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();
in.open("cse1203.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setcse4(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();

in.open("cse1204.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setcse5(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();
in.open("math1213.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setmath6(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();
in.open("hum1213.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].sethum7(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();
in.open("phy1213.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setphy8(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();
in.open("phy1214.txt");
 for(int i=0;i<n;i++){
    in>>rol>>m1>>m2>>m3;
      ob[i].setphy9(rol,m1,m2,m3,m1+m2+m3,ob[i].gradpoint(m1+m2+m3));
 }
in.close();

for(int i=0;i<n;i++)
    ob[i].gradpoint();


while(1)
{
cout<<"Manue "<<endl<<"------"<<endl<<"1. Departmental Result"<<endl<<"2. Individual Reault"<<endl<<"3. Student Information"<<endl<<"4. Exit"<<endl;
 cout<<"Enter Your Option : ";
 cin>>op;
 cout<<endl<<endl;
 if(op==4)
    return 0;
else
 switch(op)
 {
 case 1 : ob2->disresult();
 for(int i=0;i<n;i++)
    ob[i].dresult();
    cout<<endl<<endl;
     break;

 case 2 :
     cout<<"Enter Your Roll : " ;
     cin>>r;
     for(int i=0;i<n;i++)
        if(r==ob[i].cheak())
        {
            r1=i;break;
        }
     ob2->disIresult();
     ptr=&obi[r1];        ///Virtual Function pointer
     ptr->iresult();
     ptr=&ob[r1];
     ptr->iresult();

 break;
 case 3 :
    break;
 default : cout<<"Invalid Insertion!"<<endl<<endl;break;

 }

}
delete[] ob;
delete ob2;
}


