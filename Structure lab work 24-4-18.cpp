#include<bits/stdc++.h>
using namespace std;

struct Time {
    int hr,minn,sec;
};
struct Employee {
    Time entry,exit,duration;
};

Employee get_input() {
    Employee T;
    cout<<"Start Time : "<<endl;

    cin>>T.entry.hr>>T.entry.minn>>T.entry.sec;

    cout<<"End Time : "<<endl;

    cin>>T.exit.hr>>T.exit.minn>>T.exit.sec;

    return T;
}

Time workhr(Time st,Time ed) {
    //Employee T;
    Time D;
    D.sec=ed.sec-st.sec;

    if(D.sec<0) {

        ed.sec+=60;
        D.sec=ed.sec-st.sec;
        ed.minn-=1;
    }
    // cout<<D.sec<<" "<<T.exit.minn<<endl;

    D.minn=ed.minn-st.minn;
    if(D.minn<0) {
        ed.minn+=60;
        D.minn=ed.minn-st.minn;
        ed.hr-=1;
    }

    D.hr=ed.hr-st.hr;

    return D;
}

void Display(Employee E) {
    Time D;
   cout<<"Start Time"<<' '<<":"<<E.entry.hr<<' '<<":"<<E.entry.minn<<' '<<":"<<E.entry.sec<<endl;
     cout<<"End Time"<<' '<<":"<<E.exit.hr<<' '<<":"<<E.exit.minn<<' '<<":"<<E.exit.sec<<endl;
      cout<<"Duration"<<' '<<":"<<E.duration.hr<<' '<<":"<<E.duration.minn<<' '<<":"<<E.duration.sec<<endl;
}
int main() {
    Employee E;
    Time D;
    E=get_input();
    E.duration=workhr(E.entry,E.exit);
    Display(E);

    return 0;
}

