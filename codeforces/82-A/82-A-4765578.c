#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
/*
typedef struct  {
int score;
char name[34];
int round;
int maxscore;

} player;*/
int main(){
    /*
    player players[1000],temp;
    int n,playern=0,count,countp,biggest=-2000,biggesti,round=1001;
        FILE *fptr;
    fptr=fopen("E:\\lab\\12.txt","r");
    fscanf(fptr,"%d",&n);
    for(count=1;count<=n;count++)
    {
        fscanf(fptr,"%s%d",&temp.name,&temp.score);
        for(countp=0;countp<playern;countp++)
        {
            if(strcmp(temp.name,players[countp].name)==0)
                break;
        }

        if(countp<playern)
        {
            players[countp].score+=temp.score;
            if(players[countp].score>players[countp].maxscore)
            {
                players[countp].round=count;
            players[countp].maxscore=players[countp].score;

            }
        }
        else
        {

            players[countp].score=temp.score;
            strcpy(players[countp].name,temp.name);
            players[countp].round=count;
            players[countp].maxscore=temp.score;
            playern++;
        }
        
    
    //printf("%s ,%d\n",players[0].name,players[0].score);      
    }
    //for(count=0;count<playern;count++)
    //printf("%s ,%d\n",players[count].name,players[count].score);
    for(count=0;count<playern;count++)
    {
        if(players[count].score>biggest)
            biggest=players[count].score;
        
    }
        for(count=0;count<playern;count++)
    {
        if(players[count].score==biggest){
            if(players[count].round<round)
            {

                biggesti=count;
                round=players[count].round;
            }

        }
    }

        printf("%s\n",players[biggesti].name);*/
/*
    char c,firstc='\0',secoundc='\0',thirdc='\0';
    int x,z,m;
printf("write the character\nprint the EOF to end (ctrl+z)\n:");
while ( ( c = getchar() ) != EOF) {
if(firstc=='\0')
    firstc=c;
else if(secoundc=='\0')
    secoundc=c;
else if(thirdc=='\0')
    thirdc=c;
else
{
    firstc=secoundc;
    secoundc=thirdc;
    thirdc=c;
}   
if(firstc=='c'&&secoundc=='a'&&thirdc=='t'){
    printf("cat found tany :D\n");
    system("Pause");
    return 0;
}
}
printf("tryagain");
*/

    int count ,trail,num;
    scanf("%d",&num);
    for(count=0,trail=0;trail<num;trail+=5*pow(2,count),count++)
        ;
    count--;
    trail-=5*pow(2,count);
    count=pow(2,count);
    num--;
    //count=pow(2,count--);
    //trail-=5*pow(2,count);


    
    if((num-trail)/count==0)
        printf( "Sheldon");
    else if ((num-trail)/count==1)
        printf( "Leonard");
    else if ((num-trail)/count==2)
            printf( "Penny");
    else if ((num-trail)/count==3)
            printf( "Rajesh");
    else if((num-trail)/count==4)
            printf(  "Howard");

//printf( "(%d-%d)/%d==%d",num,trail,count,(num-trail)/count);





//system("Pause");
    return 0;
}