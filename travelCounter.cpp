# include<iostream>
using namespace std;
int Break(int p);
int Break(int p)
{
    int q;
    if(p==1)
    {q=15;}
    else if (p==2)
    {q=30;}
    else if (p==3)
    {q=45;}
    else cout<<" You Can't Take That Much Of Break!"<<endl;
    return q;
}
int main()
{int A;
    cout<<" Do You Want To Travel By A Plane(1) Or A Car(2)?"<<endl;
    cin>>A;
    if(A==1)
    {  int a,b ,M;
    cout<<" Please Choose One Of The Following Cities You Want To Travel To:\n Riyadh (1) \t Dammam (2) \t Mecca (3) \t Jeddah (4) "<<endl;
    cin>>a;
    if (a==1)
    {b=628;}
    else if (a==2)
    {b=1026;}
    else if(a==3)
    {b=688;}
    else if(a==4)
    {b=768;}
        else
        {cout<<"Please Choose One Of The Options!!"<<endl;}
        M=b/500;
        cout<<"Your Trip Will Take About "<<M<<" Hours\n\n"<<endl;}
    else if (A==2)
    {int c,d,K,p;
         cout<<" Please Choose One Of The Following Cities You Want To Travel To:\n Riyadh (1) \t Dammam (2) \t Mecca (3) \t Jeddah (4) "<<endl;
           cin>>c;
           if (c==1)
           {d=628;}
           else if (c==2)
           {d=1026;}
           else if(c==3)
           {d=688;}
           else if(c==4)
           {d=768;}
               else
               {cout<<"Please Choose One Of The Options!!"<<endl;}
               K=d/120;
        cout<<"How Many Break You Will Take?\n 1 - 2 - 3  "<<endl;
        cin>>p;
        Break(p);
        cout<<"Your Trip Will Take About "<<K<<":"<< Break(p)<<" Hours\n\n" << endl; }
        
    
        system ("pause");
    return 0 ;
}
