#include<bits/stdc++.h>
#include"student inf.h"
using namespace std;
int m=1;
academic::academic()
      {
          n1=new int;
          cout<<"Enter the number of student : ";
          cin>>*n1;
          cout<<endl<<"The Result of Even(1st year) Semester has been Published..........."<<endl;
      }



void information ::setdata(char x[],char y[],int z)
{
    strcpy(nm1,x);
        strcpy(nm2,y);
        roll=z;
}

void student ::setcse1(int x, float p, float q, float r, float s,float t)
{
    rolll=x;
    cse11=p;
    cse12=q;
    cse13=r;
    cse1=s;
    cgp1=t;
    if((int)t==0)
        l-=cr1;
}
void student ::setcse2(int x, float p, float q, float r, float s ,float t)
{
    rolll=x;
    cse21=p;
    cse22=q;
    cse23=r;
    cse2=s;
    cgp2=t;
    if((int)t==0)
        l-=cr2;
}
void student ::setcse3(int x, float p, float q, float r, float s, float t)
{
    rolll=x;
    cse31=p;
    cse32=q;
    cse33=r;
    cse3=s;
    cgp3=t;
        if((int)t==0)
        l-=cr3;
}
void student ::setcse4(int x, float p, float q, float r, float s, float t)
{
    rolll=x;
    cse41=p;
    cse42=q;
    cse43=r;
    cse4=s;
    cgp4=t;
        if((int)t==0)
        l-=cr4;
}
void student ::setcse5(int x, float p, float q, float r, float s, float t)
{
    rolll=x;
    cse51=p;
    cse52=q;
    cse53=r;
    cse5=s;
    cgp5=t;
        if((int)t==0)
        l-=cr5;
}
void student ::setmath6(int x, float p, float q, float r, float s, float t)
{
    rolll=x;
    math61=p;
    math62=q;
    math63=r;
    math6=s;
    cgp6=t;
        if((int)t==0)
        l-=cr6;
}
void student ::sethum7(int x, float p, float q, float r, float s, float t)
{
    rolll=x;
    hum71=p;
    hum72=q;
    hum73=r;
    hum7=s;
    cgp7=t;
        if((int)t==0)
        l-=cr7;
}
void student ::setphy8(int x, float p, float q, float r, float s, float t)
{
    rolll=x;
    phy81=p;
    phy82=q;
    phy83=r;
    phy8=s;
   cgp8=t;
       if((int)t==0)
        l-=cr8;
}
void student ::setphy9(int x, float p, float q, float r, float s, float t)
{
    rolll=x;
    phy91=p;
    phy92=q;
    phy93=r;
    phy9=s;
    cgp9=t;
        if((int)t==0)
        l-=cr9;
}
float student ::gradpoint(float x)
{
    if(x>=80)
        return 4;
    else if(x<80 && x>=75)
    return 3.75;
     else if(x<75 && x>=70)
    return 3.5;
     else if(x<70 && x>=65)
    return 3.25;
     else if(x<65 && x>=60)
    return 3;
     else if(x<60 && x>=55)
    return 2.75;
     else if(x<55 && x>=50)
    return 2.5;
     else if(x<50 && x>=45)
    return 2.25;
    else if(x<45 && x>=40)
        return 2;
    else
        return 0.00;

}
void student :: gradpoint()
{

    cgp=((cgp1*0.75)+(cgp2*3)+(cgp3*1.5)+(cgp4*3)+(cgp5*1.5)+(cgp6*3)+(cgp7*3)+(cgp8*3)+(cgp9*1.5))/l;
}
void student :: disresult()
{
cout<<"                            RAJSHAHI UNIVERSITY OF ENGINEERING AND TECHNOLOGY "<<endl;
cout<<"                                  Computer Science and Engineering"<<endl;
cout<<"                                     1st Semester(Even) Result"<<endl;
cout<<"                                          17-series"<<endl;
cout<<"***************************************************************************************************************************"<<endl;
cout<<"         |---------------------------------------------------------------------------------------------------|"<<endl;
cout<<"         |     Roll          |          CGP               |                    Back Log                      |"<<endl;
cout<<"         | ------------------|----------------------------|--------------------------------------------------|"<<endl;

}
void student ::dresult()
{
int l=0;

printf("         |   %d         |          %.2f              |",rolll,cgp);
if(cse1<40)
{
cout<<"CSE1200,";
l+=8;
}
if(cse2<40)
{
cout<<"CSE1201,";
l+=8;
}
if(cse3<40)
{
cout<<"CSE1202,";
l+=8;
}
if(cse4<40)
{
cout<<"CSE1203,";
l+=8;
}
if(cse5<40)
{
cout<<"CSE1204,";
l+=8;
}
if(math6<40)
{
cout<<"Math1213,";
l+=9;
}
if(hum7<40)
{
cout<<"Hum1213,";
l+=8;
}
if(phy8<40)
{
cout<<"Phy1213,";
l+=8;
}
if(phy9<40)
{
cout<<"Phy1214,";
l+=8;
}


for(int i=0;i<50-l;i++)
    cout<<" ";
cout<<"|"<<endl;
 cout<<"         |-------------------|----------------------------|--------------------------------------------------|\n";


}
void student :: frank()
{

}
void student :: disIresult()
{
    cout<<endl;
cout<<"           RAJSHAHI UNIVERSITY OF ENGINEERING AND TECHNOLOGY "<<endl;
cout<<"                 Computer Science and Engineering"<<endl;
cout<<"                    1st Semester(Even) Result"<<endl;
cout<<"***********************************************************************************"<<endl<<endl;
cout<<"                          Individual Markshit"<<endl;
cout<<"                     ==================================="<<endl;
}

void information :: iresult()
{
 cout<<"Nmae      : "<<nm1<<" "<<nm2<<endl;
 cout<<"Roll      : "<<roll<<endl;
}
void student :: iresult()
{
 //cout<<"Nmae      : "<<nm1<<" "<<nm2<<endl;
 //cout<<"Roll      : "<<roll<<endl;
 printf("Result    : %.2f\n\n",cgp);
 cout<<"|------------------------------------------------------------------------------------------------------------|" <<endl;
 cout<<"| Subject    |    Fainal Exam    |    CT    |    Present    |    Total mark    |    G.point    |    Credit   |"<<endl;
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  CSE1200   |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)cse11,(int)cse12,(int)cse13,(int)cse1,cgp1,cr1);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  CSE1201   |       %2d          |    %d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)cse21,(int)cse22,(int)cse23,(int)cse2,cgp2,cr2);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  CSE1202   |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)cse31,(int)cse32,(int)cse33,(int)cse3,cgp3,cr3);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  CSE1203   |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)cse41,(int)cse42,(int)cse43,(int)cse4,cgp4,cr4);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  CSE1204   |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)cse51,(int)cse52,(int)cse53,(int)cse5,cgp5,cr5);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  Math1213  |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)math61,(int)math62,(int)math63,(int)math6,cgp6,cr6);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  Hum1213   |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)hum71,(int)hum72,(int)hum73,(int)hum7,cgp7,cr7);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  Phy1213   |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)phy81,(int)phy82,(int)phy83,(int)phy8,cgp8,cr8);
 cout<<"|------------|-------------------|----------|---------------|------------------|---------------|-------------|"<<endl;
printf("|  Phy1214   |       %2d          |    %2d    |       %d       |       %d         |     %.2f      |   %.2f      | \n",(int)phy91,(int)phy92,(int)phy93,(int)phy9,cgp9,cr9);
 cout<<"|------------------------------------------------------------------------------------------------------------|"<<endl;
printf("|    Total Earn Credit                                                                       =  %.2f        |\n",l);
 cout<<"|------------------------------------------------------------------------------------------------------------|"<<endl;
 printf("|    Total CGP                                                                               =  %.2f         |\n",cgp);
 cout<<"|------------------------------------------------------------------------------------------------------------|"<<endl<<endl<<endl;

}
int student :: cheak()
{
    return rolll;
}

