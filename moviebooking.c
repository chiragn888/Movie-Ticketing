#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int n,age[4],sno,cno,tno,mno,tim,k,q=0,e=0,r=0,f=3,g=70;
float tot,dis,amt;
int hours,min;
int hw,mw;
char ch;
time_t now;
int dat;
int a=1,n=0,st=0,ct=0,mv=0,ttr=0;
time_t t;
int date,tat;
char state[10],city[20],teator[20],moviee[20];
char name[20];
int states();
int theator();
int movie();
int datef();
int timming();
void input(){
printf(" select state \n");
printf(" ---------------- \n");
    states(state[10],city[10],sno,cno);
    theator();
    movie();
    datef();
    timming();
loop:do{
printf("\n enter the no of tickets     ");
   scanf("%d",&n);
    if(n>4){
        printf("\n you can book only 4 at once !!");
        goto loop;}
    }while(n>4);
for(int i=0;i<n;i++){
printf("\n enter your name        ");
    scanf("%s",&name[20]);
printf("\n enter age      ");
    scanf("%d",&age[i]);
}
}
float cost(){
   for(k=0;k<n;k++)
     {
      if(age[k]>g)
      {
        q=q+1;
      }
      else if(age[k]<f)
      {
        r=r+1;
      }
      else
      {
        e=e+1;
      }
     }
     if(n==4)
     {
       dis=0.1;
     }
     else
     {
      dis=0;
     }
     q=q*80;
     r=r*70;
     e=e*100;
     tot=q+r+e;
     amt=tot-(tot*dis);

return amt;
}
void printing(){

     printf("\n\n*************************\n");
     printf(" Ticket confirmation\n");
     printf("----------------------- \n");
     printf(" %s",name);
     printf("\n No of seats - %d \n",n);
     printf(" Booked at - %d:%d on %d-01-2021\n",hours,min,date);
     printf(" Show starts at - %d:%d on %d-01-2021\n",hw,mw,dat);
     printf(" Tickets Booked for movie : ");
     if(mv==1){printf("KGF 2(3D)-");}
     else if(mv==2){printf("Venom 2-");}
     else if(mv==3){printf("Fast and Furious 9-");}
     else if(mv==4){printf("Black Widow-");}
     else if(mv==5){printf("King's Man-");}
     if(ttr==1){printf("(PVR cinemas) ");}
     else if(ttr==2){printf("(INOX) ");}
     else if(ttr==3){printf("(DOLBY atoms) ");}
     else if(ttr==4){printf("(GR8 Pictures) ");}
     else if(ttr==5){printf("(IMAX) ");}
     if(st==1){
                   if(ct==1){printf("Vasanth gunj ,Delhi");}
                   else if(ct==2){printf("Dwarka ,Delhi");}
                   else if(ct==3){printf("Central Delhi ,Delhi");}
                   else if(ct==4){printf("mayur ganj ,Delhi");}
                   else if(ct==5){printf(" Hauz khas ,Delhi");}

                  }
     else  if(st==2){
                   if(ct==1){printf("Majna ,Punjab");}
                   else if(ct==2){printf("Daaba ,Punjab");}
                   else if(ct==3){printf("Malwa ,Punjab");}
                   else if(ct==4){printf("Amritsar ,Punjab");}

      }
     else  if(st==3){
                   if(ct==1){printf("Mumbai ,Maharastra");}
                   else if(ct==2){printf("Nagpur ,Maharastra");}
                   else if(ct==3){printf("Pune ,Maharastra");}
                   else if(ct==4){printf("Khandala ,Maharastra");}
                   else if(ct==5){printf("Bhandra ,Maharastra");}
                   else if(ct==6){printf("Juhu ,Maharastra");}

      }
     else  if(st==4){
                   if(ct==1){printf("Bangalore ,Karnataka");}
                   else if(ct==2){printf("Mangalore ,Karnataka");}
                   else if(ct==3){printf("Udupi ,Karnataka");}
                   else if(ct==4){printf("Karwar ,Karnataka");}
                   else if(ct==5){printf("Mysore ,Karnataka");}
                   else if(ct==6){printf("Belgaum ,Karnataka");}

      }
     else  if(st==5){
                   if(ct==1){printf("Chennai ,Tamil Nadu");}
                   else if(ct==2){printf("Thanjavur ,Tamil Nadu");}
                   else if(ct==3){printf("Kumbakonam ,Tamil Nadu");}
                   else if(ct==4){printf("Salem ,Tamil Nadu");}
                   else if(ct==5){printf("Kanyakumari ,Tamil Nadu");}
      }
     else  if(st==6){
                   if(ct==1){printf("Kochi ,Kerala");}
                   else if(ct==2){printf("Thiruvanathpuram ,Kerala");}
                   else if(ct==3){printf("Trivandrum ,Kerala");}
                   else if(ct==4){printf("Kollam ,Kerala");}
                   else if(ct==5){printf("Kottayam ,Kerala");}
                   else if(ct==6){printf("Kasrgudu ,Kerala");}

      }
     else  if(st==7){
                   if(ct==1){printf("Vishakapatnam ,Andra Pradesh");}
                   else if(ct==2){printf("Hyderabad ,Andra Pradesh");}
                   else if(ct==3){printf("Vijaywada ,Andra Pradesh");}
                   else if(ct==4){printf("Kurnool ,Andra Pradesh");}
                   else if(ct==5){printf("Hazrathnizammudhin ,Andra Pradesh");}

      }
     else  if(st==8){
                   if(ct==1){printf("Bhubaneshwar ,Orrisa");}
                   else if(ct==2){printf("Central mall ,Orrisa");}

      }
     else  if(st==9){
                  if(ct==1){printf("Kolkata ,West bengal");}
                   else if(ct==2){printf("Sector fiftyeight ,West bengal");}
                   else if(ct==3){printf("Sunderbhan ,West bengal");}

      }
     else  if(ct==10){
                   if(ct==1){printf("Jamshedpur ,Jharkhand ");}
                   else if(ct==2){printf("Hazaribagh ,Jharkhand ");}
                   else if(ct==3){printf("Ranchi ,Jharkhand ");}

      }
     printf(" \n The total amount is- %f \n",amt);
     printf("\n****************************\n");
     exit(0);

}

int states(){
    int o=0;
 printf(" 1.Delhi\n 2.Punjab\n 3.Maharastra\n 4.Karnataka\n 5.Tamil Nadu\n 6.Kerala\n 7.Andra Pradesh\n 8.Orrisa\n 9.West bengal\n 10.Jharkhand            ");
 scanf("%d",&sno);
 if(sno==0){  printf("   Invalid choice !!");   printf("\n ***************************\n");
   states();}
    while(sno<=10){
    switch(sno){
         case 1:
               printf(" \n\n Select city\n");
                printf(" ---------------- \n");

               printf(" 1.Vasanth gunj\n 2.Dwarka\n 3.Central Delhi\n 4.mayur ganj\n 5.Hauz khas          ");
               scanf("%d",&cno);
               st=1;
               while(cno<=5){
                switch(cno){
                 case 1:
                     o++;

                         ct=1;return 0;
                 case 2:
                           ct=2;return 0;
                 case 3:
                           ct=3;return 0;
                 case 4:
                          ct=4;return 0;
                 case 5:
                          ct=5;return 0;
                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
               return 0;
         case 2:
                printf(" \n\n Select city\n");
                 printf(" ---------------- \n");

               printf(" 1.Majna\n 2.Daaba\n 3.Malwa\n 4.Amritsar       ");
               scanf("%d",&cno);
                st=2;
                while(cno<=4){
                switch(cno){
                 case 1: o++;

                          ct=1;return 0;
                 case 2:
                           ct=2;return 0;
                 case 3:
                         ct=3;return 0;
                 case 4:
                         ct=4;return 0;
                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
               break;
         case 3:
           printf(" \n\n Select city\n");
            printf(" ---------------- \n");

               printf(" 1.Mumbai\n 2.Nagpur\n 3.Pune\n 4.Khandala\n 5.Bhandra\n 6.Juhu        ");
               scanf("%d",&cno);
               st=3;
                while(cno<=6){
                switch(cno){
                 case 1: o++;

                         ct=1;return 0;
                 case 2:
                           ct=2;return 0;
                 case 3:
                           ct=3;return 0;
                 case 4:
                           ct=4; return 0;

                 case 5:
                           ct=5;return 0;
                 case 6:
                          ct=6;return 0;
                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
               break;
         case 4:
              printf(" \n\n Select city\n");
               printf(" ---------------- \n");

               printf(" 1.Bangalore\n 2.Mangalore\n 3.Udupi\n 4.Karwar\n 5.Mysore\n 6.Belgaum      ");
               scanf("%d",&cno);
               st=4;
                 while(cno<=6){
                switch(cno){
                 case 1:o++;

                          ct=1;return 0;
                 case 2:
                           ct=2;return 0;
                 case 3:
                           ct=3;return 0;
                 case 4:
                          ct=4;return 0;
                 case 5:
                          ct=5;return 0;
                 case 6:
                          ct=6;return 0;
               }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);

               break;
         case 5:
              printf(" \n\n Select city\n");
               printf(" ---------------- \n");

               printf(" 1.Chennai\n 2.Thanjavur\n 3.Kumbakonam\n 4.Salem\n 5.Kanyakumari        ");
               scanf("%d",&cno);
               st=5;
                 while(cno<=5){
                switch(cno){
                 case 1:o++;

                          ct=1;return 0;
                 case 2:
                           ct=2;return 0;
                 case 3:
                          ct=3;return 0;
                 case 4:
                          ct=4;return 0;
                 case 5:
                           ct=5;return 0;

                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);

               break;
         case 6:
                printf(" \n\n Select city\n");
                 printf(" ---------------- \n");

               printf(" 1.Kochi\n 2.Thiruvanathpuram\n 3.Trivandrum 4.Kollam\n 5.Kottayam\n 6.Kasrgudu        ");
               scanf("%d",&cno);
               st=6;
                while(cno<=6){
                switch(cno){
                 case 1:o++;

                        ct=1;return 0;
                 case 2:
                          ct=2;return 0;
                 case 3:
                          ct=3;return 0;
                 case 4:
                         ct=4;return 0;
                 case 5:
                           ct=5;return 0;
                 case 6:
                          ct=6;return 0;
                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
               break;
         case 7:
               printf(" \n\n Select city\n");
                printf(" ---------------- \n");

               printf(" 1.Vishakapatnam\n 2.Hyderabad\n 3.Vijaywada\n 4.Kurnool\n 5.Hazrathnizammudhin       ");
               scanf("%d",&cno);
               st=7;
                 while(cno<=5){
                switch(cno){
                 case 1:o++;

                          ct=1;return 0;
                 case 2:
                          ct=2;return 0;
                 case 3:
                          ct=3;return 0;
                 case 4:
                          ct=4;return 0;
                 case 5:
                           ct=5;return 0;

                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
               break;

         case 8:
             printf(" \n\n Select city\n");
              printf(" ---------------- \n");

               printf(" 1.Bhubaneshwar\n 2.Central mall      ");
               scanf("%d",&cno);
               st=8;
                while(cno<=2){
                switch(cno){
                 case 1:o++;

                        ct=1;return 0;
                 case 2:
                          ct=2;return 0;

                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
               break;
         case 9:
                printf(" \n\n Select city\n");
                 printf(" ---------------- \n");

                printf(" 1.Kolkata\n 2.Sector fiftyeight\n 3.Sunderbhan       ");
                scanf("%d",&cno);
                st=9;
                 while(cno<=5){
                switch(cno){
                 case 1:o++;

                        ct=1;return 0;
                 case 2:
                          ct=2;return 0;
                 case 3:
                          ct=3;return 0;

                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
                break;

         case 10:
                 printf(" \n\n Select city\n");
                  printf(" ---------------- \n");

                printf(" 1.Jamshedpur\n 2.Hazaribagh\n 3.Ranchi      ");
                scanf("%d",&cno);
                st=10;
                  while(cno<=5){
                switch(cno){
                 case 1:o++;

                          ct=1;return 0;
                 case 2:
                          ct=2;return 0;
                 case 3:
                          ct=3;return 0;

                }
               }printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);
                break;

    }
return 0;

    }
printf("\n *************************** \n");
  printf("   Invalid choice !!");   printf("\n ***************************\n");
   exit(0);



}
int theator(){
    int u=0;
    printf("\n\n select theator \n");
    printf(" ---------------- \n");
printf(" 1.PVR cinemas\n 2.INOX \n 3.DOLBY atoms\n 4.GR8 Pictures\n 5.IMAX                 ");
scanf("%d",&tno);
while(tno<=5){
    switch(tno){
      case 1:u++;

                 ttr=1;return 0;
      case 2:
                ttr=2;return 0;
      case 3:
                 ttr=3;return 0;
      case 4:
                ttr=4;return 0;
      case 5:
                  ttr=5;return 0;

    }
}printf("\n *************************** \n");
  printf("   Invalid choice !!");  printf("\n ***************************\n");
   theator();
}
int movie(){
 int y=0;
 printf("\n\n select movie \n");
  printf(" ---------------- \n");
 printf(" 1.KGF 2(3D)\n 2.Venom 2\n 3.Fast and Furious 9\n 4.Black Widow\n 5.King's Man             ");
   scanf("%d",&mno);
   while(mno<=5){
    switch(mno){
      case 1:y++;

                 mv=1;return 0;
      case 2:
                  mv=2;return 0;
      case 3:
                mv=3;return 0;
      case 4:
                 mv=4;return 0;
      case 5:
                 mv=5;return 0;

    }
   }printf("\n *************************** \n");
   printf("   Invalid choice !!");  printf("\n ***************************\n");
    movie();
}
int timming(){
    struct tm *tm_now;
    now=time(NULL);
    tm_now=localtime(&now);
    hours=tm_now->tm_hour;
    min=tm_now->tm_min;
    loop1:do
    {
     printf("\n\n choose the show time:\n  ---------------- \n 1 : 10:00 AM . \n 2 : 12:00 PM. \n 3 : 20:00 (08:00) PM. \n 4 : 22:00 (10:00) PM.\n press 1-1 to exit booking                       ");
     scanf("%d%c%d",&hw,&ch,&mw);
     if(hw==1 && ch=='-' && mw==1)
     {
         exit(0);
     }
     else if(hours<hw || min+30<(mw))
     {
         return 0;
     }
     else if(date<dat){
        return 0;
     }
     else{ printf("\n\n ***** The ticket booking is closed for the selected show *****\n *********** you can choose a different show time ***********\n\n");
            timming();}
   }while(hours>hw);
}
int datef(){

    t = time(NULL);
    struct tm tm = *localtime(&t);
    date=tm.tm_mday;
      printf("\n\n Select the date for the show\n\n");
      for(int i=date+n;i<=31;i++){
         printf(" %d",date+n);
           n=n+1;
    }
     printf("\n For Next Month dates enter 101 \n\n");
   scanf(" %d",&dat);
   if(date>dat){
        printf("\n Invalid date !! \n\n");
        n=0;
            datef();}
   else if(dat==101){
       printf("\n Displaying available dates for the next month \n\n");
       for(int j=0;j<date;j++){

            printf(" %d",a+j);
           }
           printf("\n");
           dat=date+1;
           scanf(" %d",&tat);
           if(dat>date ){
             return dat;
           }

       }
return 0;
}
void main(){

input();
cost(age);
printing();
}
