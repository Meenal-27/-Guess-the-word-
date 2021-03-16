
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include<conio.h>
#include <ctime>
using namespace std;

int STRCMP(char B[],char C[],int n)
{
  int I;
  for ( I=0;B[I]==C[I] &&
               I<n;I++);
  return B[I]-C[I];
}

    
int main()
{
   srand((unsigned) time(0));
  char A[500][5]={
      "ache","army","acid","able","aged","acne","amid","apex","alum","aide","awry","axle","axis","aunt","arid","acre","amen","arch","axes","avow",
      "balm","bang","band","bale","bark","bite","bank","base","bare","bear","bend","best","bolt","bold","bias","beat","bath","brat","busy","bury",
      "cage","cake","curd","cale","claw","cult","crow","cash","cave","crap","crab","coil","coin","cram","cyst","cone","curb","coax","crew","cape",
      "damp","deny","dock","dear","dice","drug","dumb","duke","duet","drag","dose","dirt","disk","dish","draw","defy","dawn","dart","dark","debt",
      "earl","easy","echo","envy","emit","epic","evil","exam","exit","etch","east","earn","each","edit","edgy","eave","exon","dumb","duty","dusk",
      "fact","fail","fake","fate","four","five","flap","flog","flow","frog","file","film","fuel","fret","fawn","fear","fair","fare","fast","fang",
      "gasp","gaze","gear","grow","grey","goal","gulp","gulf","glow","glue","glad","golf","gawk","gape","girl","grew","gram","grin","grip","gust",
      "hail","hard","hair","hare","hate","hawk","hunt","heat","hint","hike","howl","husk","hymn","home","holy","herb","horn","hour","hire","heap",
      "inch","idol","idle","idea","iron","inch","item","icon","harm","flat","foam","fate","fame","foil","fold","foci","fray","face","fist","fish",
      "jail","jaws","jerk","jinx","june","july","jolt","jury","just","join","jump","joke","jade","junk","jute","judo","kale","kept","kind","kite",
      "lace","lack","lamp","lair","lake","lame","lazy","life","lift","lice","leap","liar","lieu","lime","lion","limp","luck","leak","leap","lead",
      "loan","lone","loci","lock","lust","lush","lose","lost","link","lump","lurk","sore","sour","sway","soup","stay","stew","stun","slum","swim",
      "main","mane","mark","mask","monk","mist","moth","mine","mold","mere","mint","mock","move","meat","meal","mend","mind","many","male","mate",
      "name","nail","near","neat","nerd","navy","neck","nest","norm","note","nose","mute","must","musk","quit","quiz","quip","quad","puke","prom",
      "oath","odor","omen","oily","omit","once","only","opal","oral","oust","oval","oven","over","ovum","oxen","poem","poet","pond","pour","prey",
      "pace","pack","page","pain","pale","pair","palm","park","pave","path","peal","peak","perk","pest","pier","pint","plea","ploy","pink","pity",
      "rage","rape","rain","rant","rice","rich","ride","ripe","risk","road","roam","ruin","ruby","rude","rule","rush","riot","rely","rift","ring",
      "sack","safe","sage","said","same","salt","sane","sand","self","scar","seal","silk","scan","slow","slew","site","slam","snow","soak","soap",
      "talk","tale","tank","tear","task","teal","tone","true","torn","tune","type","town","tube","trim","trek","tram","tend","thin","tape","tile",
      "ugly","urea","user","writ","wrap","wind","wink","weak","wise","wide","wipe","wolf","yard","yawn","zero","zone","yawn","yarn","your","fist",
      "vain","vale","veal","veil","vast","verb","vile","vibe","vase","vice","veto","vote","void","vent","vein","vage","view","visa","vary","vest",
      "wait","wake","walk","ward","warn","warm","wary","wasp","wash","wave","wear","weld","whim","whip","wing","wick","wire","wish","wish","worm",
      "rush","rail","take","tame","rate","rank","pole","pose","plug","plum","pore","ryme","port","rock","robe","real","obey","math","love","loaf",
      "only","rust","soil","soak","ship","sign","tide","toad","tone","term","trap","twin","twig","turf","tidy","teak","team","bike","cane","clue",
      "bate","cost","date","bite","chef","damn","darn","dime","drop","hive","duel","crux","crop","cure","crib","feud","fire","pipe","pine","tour",
};
  
 int a;
 a=rand()%500;
 
 char D[5];
 strcpy(D,A[a]);
cout<<"GUESS THE WORD"<<endl;
 cout<<"HEY GUYS!!LETS PLAY A GAME"<<endl;
 cout<<"RULES OF THE GAME ARE AS FOLLOWS:"<<endl;
 cout<<"1.You will be given a four letter word to guess.You will be asked to guess the word.Write in lower case."<<endl;
 cout<<"2.THE LETTERS IN THE WORD CANNOT BE REPEATED."<<endl;
 cout<<"3.If a particular letter in the given word is present in the actual word and is in the correct position,it will be indicated by a '$' sign directly below it."<<endl;
 cout<<"4.If a particular letter in the given word is present in the actual word but not present in the correct position,it will be indicated by a '#' sign directly below it."<<endl;
 cout<<"5.If a particular letter in the given word is not present in the actual word ,it will be indicated by a '!' sign directly below it."<<endl;
 cout<<"6.You will be given a maximum of 10 chances to guess the word."<<endl;
 cout<<"7.If the word is guessed score will be provided at the end of the game.The maximum score in the game is 1000."<<endl;
 cout<<"8.If the word is not guessed,you lose and the game ends."<<endl;
 cout<<"9.You can chose to play again or exit the game."<<endl;

 char E[5],F[4];
 char G[4]={'$','$','$','$'};
 
 char m;
 int num=0,p=0,found=0,K=0;
 char ANSWER;
 
 
     do
     {
         cout<<"Please give the desired word."<<endl;
         cin>>E;
         if( strlen(E)!=4)
         {
             cout<<"!! Please enter a four letter word only."<<endl;
             cin>>E;
         };
         do
         {
             for(int i=0;i<3;i++)E[i]= tolower(E[i]);
             p=0;
             for(int i=3;i>0 && p==0;i--)
             {
                 for(int j=i-1 && p==0;j>=0;j--)
                 {
                     if(E[j]==E[i])
                     {
                         p++;
                     }
                 }
             }
             if(p!=0)
             {
                 cout<<"Given word not valid.THE LETTERS IN THE WORD ARE REPEATING."<<endl;
                cin>>E;
             }
         }while(p!=0);
         
         
         for(int i=0;i<4;i++)
         {
             int j=0;
             while( j<4 && found==0)
             {
                 if(E[i]==D[j])
                 {
                     found++;
                 }
                 else
                 {
                     j++;
                 }
             };
             if(found==0)
             {
                 m='!';
             }
             else if(found==1)
             {
                 if(j==i)
                 {
                     m='$';
                 }
                 else
                 {
                     m='#';
                 }
             }
             cout<<m;
             F[i]=m;
             found=0;
         
         };
         if(STRCMP(F,G,4)==0)
         K++;
         num++;
         cout<<endl;
     }
     while(K==0 && num<=9);
     
     if(K==0)
     {
         cout<<"You lose:(("<<endl;
         cout<<"POINTS SCORED:0"<<endl;
         cout<<"The actual word was "<<D<<".";
         
         
     }
     
     else if(K==1)
     {
         cout<<"You WIN:))"<<endl;
         cout<<"POINTS SCORED:"<<1000-(num-1)*100<<endl;
         
         
     };
     
     

getch();
}

    

