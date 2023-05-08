#include <iostream>

using namespace std;

int main() 

{
    int broj, randomBroj;
    int obidi=0;
   
    srand(time(0));
    randomBroj=rand()%101;
    
    cout<<"Zamisliv eden broj. Pogodi koj! (od 0 do 100) \n";   
    cin>>broj;
 
    if(broj==randomBroj)
    {
        cout<<"Tochno! Go imav zamisleno brojot "<<broj;
    }
    else
    {
       do{
           if(broj<randomBroj)
           {
             cout<<"Greshno! Tochniot broj e pogolem od toj broj. Obidi se pak.\n";
             cout<<"Tvojot podogok: ";
             cin>>broj;
            }
            else 
            {
               cout<<"Greshno! Tochniot broj e pomal od toj broj. Obidi se pak.\n";
               cout<<"Tvojot pogodok: ";
               cin>>broj;
            }
           obidi++;
          } 
          while (broj!=randomBroj);
   } 
  
   cout<<"Obidi: "<<obidi;
   
  return 0;
}