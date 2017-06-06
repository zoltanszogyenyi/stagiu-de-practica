#include <iostream>
#include <stdlib.h>

using namespace std;

  class DataCalendaristica
    {
     private:
       int zi;
       int luna;
       int an;
       int zile;
       static int NrZile[];
       
     public:
       DataCalendaristica();
       DataCalendaristica(long timpZero);
       DataCalendaristica(int zi,int luna,int an);

       static int detNrZileLuna(int luna,int an);
       static int EsteBisect(int an);
       static int detNrZileAn(int an);

       int detNrZileLunaInceput();
       int detNrZileLunaSfarsit();

       DataCalendaristica operator+(int);
       DataCalendaristica operator-(int);
       friend long operator-(DataCalendaristica&,DataCalendaristica&);

       int operator ==(DataCalendaristica&);

       friend  ostream& operator<<(ostream&,DataCalendaristica);
       friend  istream& operator>>(istream&,DataCalendaristica&);
       long dettimpZero();
    };

    DataCalendaristica DataCalendaristica::operator-(int nrZile)
    {
      return DataCalendaristica(dettimpZero()-nrZile);
    }

    int DataCalendaristica::operator ==(DataCalendaristica& a)
    {
        long c=this->dettimpZero()-a.dettimpZero();
        if(c>0)return -1;
        if(c<0)return 1;
        return 0;
    }

    int DataCalendaristica::NrZile[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    DataCalendaristica::DataCalendaristica()
    {
      zi=1;
      luna=1;
      an=1900;
    }

      DataCalendaristica::DataCalendaristica(long timpZero)
      {
      an=1900;
      while(timpZero>detNrZileAn(an))
        {
        timpZero-=detNrZileAn(an);

         an++;
      }
      luna=1;
      while(timpZero>detNrZileLuna(luna,an))
        {
        timpZero-=detNrZileLuna(luna,an);
        luna++;
        }
      zi=timpZero;
  }

    DataCalendaristica::DataCalendaristica(int zi,int luna,int an)
    {
      this->zi=zi;
      this->luna=luna;
      this->an=an;
    }

    int DataCalendaristica::detNrZileLuna(int luna,int an)
    {

    if (EsteBisect(an) && luna==2) return (NrZile[luna])+1;
      else return NrZile[luna];
    }

    int DataCalendaristica::EsteBisect(int an)
    {
      return an%4==0 && an%100 || an%400==0;
    }

    int DataCalendaristica::detNrZileAn(int an)
    {
      if (EsteBisect(an)) return 366;
      else return 365;
    }

    int DataCalendaristica::detNrZileLunaInceput()
    {
      int zile=zi;
      for (int i=1;i<luna;i++) zile+=detNrZileLuna(i,an)
;
      return zile;
    }

    int DataCalendaristica::detNrZileLunaSfarsit()
    {
      int zile=detNrZileLuna(luna,an)-zi;

      for (int i=luna+1;i<=12;i++) zile+=detNrZileLuna(i,an);
      return zile;
    }

    DataCalendaristica DataCalendaristica::operator+(int nrZile)
    {
      return DataCalendaristica(dettimpZero()+nrZile);
    }

   long operator-(DataCalendaristica& d1,DataCalendaristica& d2)
    {
     return abs(d2.dettimpZero()-d1.dettimpZero());
    }

    ostream& operator<<(ostream& stream,DataCalendaristica dc)
    {
      stream<<dc.zi<<"-"<<dc.luna<<"-"<<dc.an;
      return stream;
    };

    istream& operator>>(istream& stream,DataCalendaristica& dc)
    {
      cout<<"Zi = ";
      cin>>dc.zi;
      cout<<"Luna = ";
      stream>>dc.luna;
      cout<<"An = ";
      stream>>dc.an;
      return stream;
    }

    long DataCalendaristica::dettimpZero()
    {
     long nrZile=0;
     int i;
     for(i=1900;i<an;i++){
      nrZile+=detNrZileAn(i);
     }
     for(i=1;i<luna;i++)
     {
      nrZile+=detNrZileLuna(i,an);
     }
     nrZile+=zi;
     return nrZile;
    }

    int main()
    {
      DataCalendaristica a(24,4,2015);

      cout<<a<<"\n\n";
      cout<<(a+1111)<<endl;

      cout<<(a+(-100));
      cout << "minus zile "<< endl<<a-100;

      DataCalendaristica b(1,4,2015);
      DataCalendaristica c(20,4,2014);
      cout<<endl<< (c==b);



//      cout <<endl<< a-b-c;
      cout <<endl<< a-(b-c);
      return 0;
    }







