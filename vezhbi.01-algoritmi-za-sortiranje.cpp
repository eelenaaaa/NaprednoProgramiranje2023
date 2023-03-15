/*Selection sort е алгоритам за сортирање кој ги сортира елементите на некоја низа барајќи го најмалиот број во низата. Кога ќе го пронајде тој број, го сместува во имагинарна преграда каде се наоѓаат 
сортираните броеви, всушност го поставуваме прв. Потоа кодот преку циклус повторно бара најмал број, притоа само од несортираниот дел од низата. Со тоа секој нареден број се сместува десно до првиот. 
Истата постапка се повторува со останатите броеви*/

#include<iostream>  
using namespace std;  
int findSmallest (int[],int);  
int main ()  
{  
    int myarray[21]={(int)'E',(int)'l',(int)'e',(int)'n',(int)'a',(int)'G',(int)'i',(int)'c',(int)'h',(int)'e',(int)'v',(int)'s',(int)'k',(int)'a',(int)'I',(int)'N',(int)'K',(int)'I',(int)'9',(int)'5',(int)'1'}; 
    int lengthArr=sizeof(myarray)/sizeof(myarray[0]);
    
    cout<<"Печатење на елементи на низа\n";
    for(int i=0; i<lengthArr; i++)
        cout<<(char)myarray[i]<<"\t";     //печатење на низата во карактери
    
    int pos, temp, pass=0;
    cout<<"\nЕлементи на низа во ASCII код\n";  
    for(int i=0;i<21;i++)  
        {  
            cout<<myarray[i]<<"\t";       //печатење на низата во ASCII код
        } 
    for(int i=0;i<21;i++)  
        {  
            pos = findSmallest (myarray,i);  
            temp = myarray[i];  
            myarray[i] = myarray[pos];      
            myarray[pos] = temp;            //вметнување на сортирање
            pass++;                         //број на циклуси за да се сортира низата
        }  
   
    cout<<"\nСортирана листа на елементите\n";  
    for(int i=0;i<21;i++)  
        {  
            cout<<myarray[i]<<"\t";         //печатење на сортираната листа
        } 
   
    cout<<"\nБрој на поминувања потребни за сортирање на низата: "<<pass;     //печатење на број поминати циклуси за да се сортира низата
    return 0;  
}  

int findSmallest(int myarray[],int i)  //функција за пронаоѓање на најмал број
{  
    int ele_small,position,j;  
    ele_small = myarray[i];  
    position = i;  
    for(j=i+1;j<21;j++)  
    {  
        if(myarray[j]<ele_small)  
        {  
            ele_small = myarray[j];  
            position=j;  
        }  
    }  
    return position;  
}