//Elena Gichevska INKI951
//Podeluvanje na shpil od karti na 4 dela
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52    //definiranje broj na karti
#define FACES 13    //definiranje na brojot na lica na karti

struct card {
   const char *face; 
   const char *suit; 
}; 

typedef struct card Card; 

void fillDeck( Card * const wDeck, const char * wFace[], const char * wSuit[] );        //funkcija za sostavuvanje na shpil karti, soedinuvanje na boja i forma so brojot na kartite
void shuffle( Card * const wDeck );                                                     //funkcija za meshanje na shpilot karti
void deal( const Card * const wDeck );                                                  //funckija za dodeluvanje na kartite, delejki gi na 4 redici

int main( void )
{
   Card deck[ CARDS ]; 

   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",          //definiranje vrednosti na konstantna niza pokazhuvachi so 13 elementi, broevite (licata) na kartite
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

 
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};     //definiranje vrednosti na konstantna niza pokazhuvachi so 4 elementi, formata i bojata na kartite

   srand( time( NULL ) );               //funcija za dobivanje na razlichno meshanje na vrednostite pri sekoe kompajliranje na kodot

   fillDeck( deck, face, suit );    //funkcija za sostavuvanje na shpilot, brojot so formata i bojata
   shuffle( deck );                 //funkcija za meshanje na shpilot
   deal( deck );                    //funkcija za podeluvanje na shpilot
} 

void fillDeck( Card * const wDeck, const char * wFace[], const char * wSuit[] )     
{
   size_t i; 

   for ( i = 0; i < CARDS; ++i ) {
      wDeck[ i ].face = wFace[ i % FACES ];
      wDeck[ i ].suit = wSuit[ i / FACES ];
   } 
} 

void shuffle( Card * const wDeck )
{                   //size_t se koristi za pretstavuvanje na objektot vo bajti (promenlivite od ovoj tip sekogash ke bidat celosni i nenegativni broevi)
   size_t i;        //deklaracija na promenliva i, kako nenegativen celosen broj, za povtoruvanje na jamkata for se dodeka ne se pominat site 52 karti
   size_t j;        //deklaracija na promenliva j, kako nenegativen celosen broj, preku koja so rand() i se dodeluvaat vrednosta na koj bilo broj pomegju 0 i 51
   Card temp; 

   for ( i = 0; i < CARDS; ++i ) {
      j = rand() % CARDS;  
      temp = wDeck[ i ];
      wDeck[ i ] = wDeck[ j ];
      wDeck[ j ] = temp;
   } 
} 

void deal( const Card * const wDeck )
{
   size_t i; 

   for ( i = 0; i < CARDS; ++i ) {
      printf( "%5s of %-8s%s", wDeck[ i ].face, wDeck[ i ].suit,
         ( i + 1 ) % 4 ? "  " : "\n" );
   }
} 