#include<iostream>
using namespace std;
class teacher{
    int t_no;
    string  t_name;
    string t_qualification;
    string t_programe;
  
    public:
    teacher(){
        cout<<"Enter teacher no :"<<endl;
        cin>>t_no;
        cout<<"Enter teacher name :"<<endl; 
        cin>>t_name;
        cout<<"Enter teacher qualification :"<<endl;
        cin>>t_qualification;
        cout<<"Enter teacher programe :"<<endl;
        cin>>t_programe;
    }

    void display_t_info(){
        cout<<"Teacher no : "<<t_no<<endl;
        cout<<"Teacher name : "<<t_name<<endl;
        cout<<"Teacher qualification : "<<t_qualification<<endl;
        cout<<"Teacher programe : "<<t_programe<<endl;
    }

};

int main(){
    
    teacher  t[3];
    for(int i=0; i<3; i++){
        t[i].display_t_info();
    }
    return 0;
}