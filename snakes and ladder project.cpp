#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int dice;
 
main()
{
      srand(time(NULL));
             
      printf ("Welcome to Snakes and Ladders.\n");
      printf ("\n64  63  62  61  60  59  58  57         1=Start           27=Ladder to 37\n");
      printf ("49  50  51  52  53  54  55  56         4=Ladder to 35    34=Snake  to 20\n");
      printf ("48  47  46  45  44  43  42  41         7=Ladder to 23    42=Snake  to 11\n");
      printf ("33  34  35  36  37  38  39  40         9=Snake  to 5     46=Ladder to 53\n");
      printf ("32  31  30  29  28  27  26  25        14=Ladder to 43    49=Snake  to 32\n");
      printf ("17  18  19  20  21  22  23  24        17=Snake  to 13    63=Snake  to 2\n");
      printf ("16  15  14  13  12  11  10   9        21=Snake  to 3     64=End\n");
      printf (" 1   2   3   4   5   6   7   8        24=Ladder to 58\n");                      
	  //Prints the board for user's reference/
 
 
 
 
      printf("\nType and press enter to roll\n");
      scanf("%d", &dice);
      dice=((rand()%6)+1);
       
      printf("You have rolled a %d\n", dice);
       
      int x=0;
      int y; 
 
 
      x+=dice;
      printf("You are on space %d\n", x);
    
      if (x!=y)
      printf("You are now on space %d", x);
       

return 0;
}
 
 
checkPosition()
{
      int x;
      int y;
      if (x=4){
         y=35;}
      else
          if (x=7){
             y=23;}
      else
          if (x=9){
             y=5;}
      else
          if (x=14){
             y=43;}
      else
          if (x=17){
             y=13;}
      else
          if (x=21){
             y=3;}
      else
          if (x=24){
             y=58;}
      else
          if (x=27){
             y=37;}
      else
          if (x=34){
             y=20;}
      else
          if (x=42){
             y=11;}
      else
          if (x=46){
             y=53;}
      else
          if (x=49){
             y=32;}
      else
          if (x=64){
             y=2;}
      else
          x=y;
}

                                                                                                       
