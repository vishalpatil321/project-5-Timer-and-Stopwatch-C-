#include<iostream>
using namespace std;
 
class showtime
{

  public :
  int d;
  int count = 0;

  void time(){
   
    cout<<"1> timer "<<endl;
    cout<<"2> stopwatch"<<endl;
    cout<<"choice :";
    cin>>d;
    cout<<endl;
    if(d == 1){   
      int t;
      int c;
      int a;
      int h;
      int m = 59;
      int s = 59;
      int ms = 59;

      cout<<"Timer"<<endl;
      cout<<"1> hour "<<endl;
      cout<<"2> minutes "<<endl;
      cout<<"3> second "<<endl;
      cin>>c;
      c;
      if(c == 1){
        cout<<"enter hour :";
        cin>>t;
        h = t;
        a = t * 205379;
      }
      else if(c == 2){
        cout<<"enter minute : ";
        cin>>t;
        m = t;
        h = 0;
        a = t * 3481;
        
      }
      else if(c == 3){
         cout<<"enter second : ";
         cin>>t;
         s = t;
         h = 0;
         m = 1;
        

        a = t * 59;
      }
      
       for(int i = a; i >= 0; i--){
        ms--;
        if(ms == 0){
            ms = 59;
            s--;
        }
        else if(s == 0){
            s = 59;
            m--;
        }
         else if(m == 0){
            m = 59;
            h--;
            
        }
        
       
        system("cls");
         cout<<"Timer"<<endl;
         
            cout<<h<<":"<<m<<":"<<s<<endl;
         
    
     }
     count++;
 }

 else if(d == 2){
      

    int m = 0;
    int s = 0;
    int ms = 0;
    int h = 0;
    int a;
    int t;
    int c;
    
    cout<<"Stop watch"<<endl;
    cout<<"1> hour "<<endl;
    cout<<"2> minutes "<<endl;
    cout<<"3> second "<<endl;
    cin>>c;
    c;

  
      if(c == 1){
        cout<<"enter hour :";
        cin>>t;
        
        a = t * 205379;
      }
      else if(c == 2){
        cout<<"enter minute : ";
        cin>>t;
        
        a = t * 3481;
        
      }
      else if(c == 3){
         cout<<"enter second : ";
         cin>>t;
        

        a = t * 59;
      }
    
    for(int i = 0; i <= a; i++){
        ms++;
        if(ms == 59){
            ms = 0;
            s++;
        }
        else if(s == 59){
            s = 0;
            m++;
        }
         else if(m == 59){
            m = 0;
            h++;
            
        }
        system("cls");
        cout<<"--------------------------"<<endl;
            cout<<h<<":"<<m<<":"<<s<<endl;
        cout<<"--------------------------"<<endl;
            
            
    }
     count++;
 }
 else {
  cout<<"Enter write number."<<endl;
 }
  if(count > 0){
      cout<<"do you want it again ?"<<endl;
    }
    
  }

    
 };

 int main(){
  int b = 0;
  while(b == 0){
    showtime obj;
    obj.time();
  }

  return 0;
 }
 


    

 
     
  





    
   
      

    
    


