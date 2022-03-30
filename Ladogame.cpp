#include<iostream.h> 
#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<dos.h> 
class LUDO 
{ 
 public: 
 char token[4]; // Types of token: # @ & % 
 int pos[4];    // Position in Ludo 
 int placom;    // Player or Computer 
 int NoT;       // No: of tokens 
}; 
void Display(char Ludo[]) // To Display the Ludo Board 
{ 
gotoxy(0,0); 
cout<<" ____________________________________________________________"<<endl; 
cout<<"|          |          |_"<<Ludo[26]<<"__|_"<<Ludo[27]<<"__|_"<<Ludo[28]<<"__|           |           |"<<endl; 
cout<<"|    "<<Ludo[0]<<"     |    "<<Ludo[1]<<"     |_"<<Ludo[25]<<"__|_"<<Ludo[73]<<"__|_"<<Ludo[29]<<"__|    "<<Ludo[4]<<"      |    "<<Ludo[5]<<"      |"<<endl; 
cout<<"|__________|__________|_"<<Ludo[24]<<"__|_"<<Ludo[74]<<"__|_"<<Ludo[30]<<"__|___________|___________|"<<endl; 
cout<<"|          |          |_"<<Ludo[23]<<"__|_"<<Ludo[75]<<"__|_"<<Ludo[31]<<"__|           |           |"<<endl; 
cout<<"|    "<<Ludo[2]<<"     |    "<<Ludo[3]<<"     |_"<<Ludo[22]<<"__|_"<<Ludo[76]<<"__|_"<<Ludo[32]<<"__|    "<<Ludo[6]<<"      |    "<<Ludo[7]<<"      |"<<endl; 
cout<<"|__________|__________|_"<<Ludo[21]<<"__|_"<<Ludo[77]<<"__|_"<<Ludo[33]<<"__|___________|___________|"<<endl; 
cout<<"|_"<<Ludo[67]<<"_|_"<<Ludo[16]<<"_|"<<Ludo[17]<<"_|"<<Ludo[18]<<"_|"<<Ludo[19]<<"_|_"<<Ludo[20]<<"_|    "<<Ludo[92]<<" "<<Ludo[93]<<" "<<Ludo[94]<<" "<<Ludo[95]<<"     |_"<<Ludo[34]<<"_|_"<<Ludo[35]<<"_|_"<<Ludo[36]<<"_|_"<<Ludo[37]<<"_|"<<Ludo[38]<<"_|_"<<Ludo[39]<<"_|"<<endl; 
cout<<"|   |   |  |  |  |   |                |   |   |   |   |  |   |"<<endl; 
cout<<"| "<<Ludo[66]<<" | "<<Ludo[68]<<" |"<<Ludo[69]<<" |"<<Ludo[70]<<" |"<<Ludo[71]<<" | "<<Ludo[72]<<" |  "<<Ludo[88]<<Ludo[89]<<Ludo[90]<<Ludo[91]<<"    "<<Ludo[99]<<Ludo[98]<<Ludo[97]<<Ludo[96]<<"  | "<<Ludo[82]<<" | "<<Ludo[81]<<" | "<<Ludo[80]<<" | "<<Ludo[79]<<" |"<<Ludo[78]<<" | "<<Ludo[40]<<" |"<<endl; 
cout<<"|___|___|__|__|__|___|    "<<Ludo[100]<<" "<<Ludo[101]<<" "<<Ludo[102]<<" "<<Ludo[103]<<"     |___|___|___|___|__|___|"<<endl; 
cout<<"|_"<<Ludo[65]<<"_|_"<<Ludo[64]<<"_|"<<Ludo[63]<<"_|"<<Ludo[62]<<"_|"<<Ludo[61]<<"_|_"<<Ludo[60]<<"_|________________|_"<<Ludo[46]<<"_|_"<<Ludo[45]<<"_|_"<<Ludo[44]<<"_|_"<<Ludo[43]<<"_|"<<Ludo[42]<<"_|_"<<Ludo[41]<<"_|"<<endl; 
cout<<"|          |          |_"<<Ludo[59]<<"__|_"<<Ludo[87]<<"__|_"<<Ludo[47]<<"__|           |           |"<<endl; 
cout<<"|    "<<Ludo[12]<<"     |    "<<Ludo[13]<<"     |_"<<Ludo[58]<<"__|_"<<Ludo[86]<<"__|_"<<Ludo[48]<<"__|    "<<Ludo[8]<<"      |    "<<Ludo[9]<<"      |"<<endl; 
cout<<"|__________|__________|_"<<Ludo[57]<<"__|_"<<Ludo[85]<<"__|_"<<Ludo[49]<<"__|___________|___________|"<<endl; 
cout<<"|          |          |_"<<Ludo[56]<<"__|_"<<Ludo[84]<<"__|_"<<Ludo[50]<<"__|           |           |"<<endl; 
cout<<"|    "<<Ludo[14]<<"     |    "<<Ludo[15]<<"     |_"<<Ludo[55]<<"__|_"<<Ludo[83]<<"__|_"<<Ludo[51]<<"__|    "<<Ludo[10]<<"      |    "<<Ludo[11]<<"      |"<<endl; 
cout<<"|__________|__________|_"<<Ludo[54]<<"__|_"<<Ludo[53]<<"__|_"<<Ludo[52]<<"__|___________|___________|"<<" Press 'z' to exit"<<endl; 
} 
void Turn(int &num,char Ludo[]) 
{ 
 randomize(); 
 int x; 
 num = (random(1000)%6) + 1; 
 for(x=0;x<18;x++)         // Rolling the Dice 
 { 
  clrscr(); 
  Display(Ludo); 
  gotoxy(20,20); 
  cout<<(x%6)+1; 
  delay(100); 
 } 
 clrscr(); 
 Display(Ludo); 
 gotoxy(20,20); 
 cout<<num<<endl; 
 delay(300); 
} 
void main() 
{ 
 clrscr(); 
 LUDO A,B,C,D;       // Objects for different type of tokens 
 char Ludo[104]; 
 int i; 
 for(i=0;i<104;i++) 
 Ludo[i]=' '; 
 for(i=0;i<4;i++)      // Initialization of variables 
 { 
  A.token[i] = '#'; 
  B.token[i] = '@'; 
  C.token[i] = '&'; 
  D.token[i] = '%'; 
 } 
 A.pos[0]=0; A.pos[1]=1; A.pos[2]=2; A.pos[3]=3; 
 B.pos[0]=4; B.pos[1]=5; B.pos[2]=6; B.pos[3]=7; 
 C.pos[0]=8; C.pos[1]=9; C.pos[2]=10; C.pos[3]=11; 
 D.pos[0]=12; D.pos[1]=13; D.pos[2]=14; D.pos[3]=15; 
 for(i=0;i<4;i++) 
 { 
  Ludo[A.pos[i]]=A.token[i]; 
  Ludo[B.pos[i]]=B.token[i]; 
  Ludo[C.pos[i]]=C.token[i]; 
  Ludo[D.pos[i]]=D.token[i]; 
 } 
 A.placom=0; B.placom=0; C.placom=0; D.placom=0; 
 A.NoT=0; B.NoT=0; C.NoT=0; D.NoT=0; 
int play,Num,Z=0,choice,F[4],ck[100][4],Ck[100][4]; 
int l,ch,Pos,rep[4],rmv[4][4],end=0,n;                      // Variables used in Ludo 
char name[20],Name[4][20],sub[4],tok; 
for(n=16;n<88;n++) 
ck[n][0]=0; ck[n][1]=0; ck[n][2]=0; ck[n][3]=0; 
for(n=16;n<88;n++) 
Ck[n][0]=0; Ck[n][1]=0; Ck[n][2]=0; Ck[n][3]=0; 
strcpy(Name[0],"Comp"); 
strcpy(Name[1],"Comp"); 
strcpy(Name[2],"Comp"); 
strcpy(Name[3],"Comp"); 
rep[0]=0; rep[1]=0; rep[2]=0; rep[3]=0; 
F[0]=88; F[1]=92; F[2]=96; F[3]=100; 
cout<<"\t\t\t"<<"WELCOME TO LUDO GAME!!!!!!!!!"<<"\n\n"; 
cout<<"# @ & % are the tokens"<<"\n\n"; 
cout<<"No: of players: "; cin>>play;    // To Decide the no: of players 
cout<<endl; 
for(i=0;i<play;i++) 
{ 
 cout<<i+1<<") Name of the Player: "; gets(name); 
 cout<<"Your Token: "; cin>>tok; 
 if(tok=='#') 
 { A.placom=1; strcpy(Name[0],name); }  // This will decide that 
 if(tok=='@')                           // who is player and who is computer 
 { B.placom=1; strcpy(Name[1],name); } 
 if(tok=='&') 
 { C.placom=1; strcpy(Name[2],name); } 
 if(tok=='%') 
 { D.placom=1; strcpy(Name[3],name); } 
 cout<<endl; 
} 
cout<<endl<<"AND THE GAME STARTS...............NOW!!!!!"; 
delay(1000); 
clrscr(); 
Display(Ludo); 
while(end==0)     // Loop that runs till game ends 
{ 
again: 
if(kbhit()) 
{ 
 if(getch()=='z') 
 end=5; 
} 
choice = 2; 
// For token '#' 
if(Z==0) 
{ 
 gotoxy(20,20); 
 puts(Name[Z]); 
 cout<<"\t\t\t"<<"#'s Turn"<<endl; 
 if(A.placom==1) 
 { 
 cout<<"         Press any key to Roll the Dice...."; 
 getch(); 
 } 
 if(A.placom==0)  { delay(1000); } 
 Turn(Num,Ludo); 
 if(Num>=2 && Num<=5)     // Logics made for Ludo 
 { 
  if(A.NoT==0) 
  { Z++; goto again; } 
  Achoice2: 
  clrscr(); 
  Display(Ludo); 
  gotoxy(20,20); 
  if(A.placom==1) 
  { 
   cout<<"Choose your Token:"<<endl; 
   for(i=0;i<4;i++) 
   { 
    if(A.pos[i]>=16 && A.pos[i]<=87) 
    cout<<"Token "<<i+1<<endl; 
   } 
   cout<<"\t\t"; cin>>ch; 
   if(!(A.pos[ch-1]>=16 && A.pos[ch-1]<=87)) 
   goto Achoice2; 
  } 
  if(A.placom==0) 
  { 
   for(i=0;i<4;i++) 
   { 
    if(A.pos[i]>=16 && A.pos[i]<=87) 
    ch = i+1; 
   } 
  } 
  ch--; 
  Pos = A.pos[ch]; 
  for(l=0;l<Num;l++) 
  { 
   Ludo[A.pos[ch]]=' '; 
   if(rep[0]==1) 
   { 
    Ludo[A.pos[ch]]=sub[0]; 
    rep[0]=0; 
   } 
   if(A.pos[ch]==66) 
   A.pos[ch]=67; 
   if(A.pos[ch]==72) 
   { 
    A.pos[ch]=F[0]++; 
    A.NoT--; 
    l=69; 
   } 
   else 
   A.pos[ch]++; 
   if(Ludo[A.pos[ch]]!=' ') 
   { 
    sub[0]=Ludo[A.pos[ch]]; 
    rep[0]=1; 
   } 
   Ludo[A.pos[ch]]=A.token[ch]; 
   if(rmv[0][ch]==1) 
   { 
    Ludo[Pos]=' '; 
    rmv[0][ch]=0; 
   } 
   clrscr(); 
   Display(Ludo); 
   delay(200); 
  } 
  goto DoNe; 
 } 
 if(Num==1 || Num==6) 
 { 
  choice = 1; 
  if(A.placom==1) 
  { 
   if(A.NoT==4 || Ludo[16]=='#') 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
    } 
    while(choice!=2); 
   } 
   else if(A.NoT<4) 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"1) Unlock new one"<<endl; 
     if(A.NoT!=0) 
     cout<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
     if(choice==2 && A.NoT==0) 
     choice = 0; 
    } 
    while(choice!=1 && choice!=2); 
   } 
  } 
  if(A.placom==0) 
  { 
   if(A.NoT==0) 
   choice=1; 
   else if(A.NoT==4 || Ludo[16]=='#') 
   choice=2; 
   else 
   choice = random(1) + 1; 
  } 
  if(choice==1) 
  { 
   for(int k=0;k<4;k++) 
   { 
    if(Ludo[4*Z+k]==A.token[k]) 
    { 
     Ludo[4*Z+k]=' '; 
     A.pos[k]=16; 
     Ludo[A.pos[k]]=A.token[k]; 
     A.NoT++; 
     clrscr(); 
     Display(Ludo); 
     goto DoNe; 
    } 
   } 
  } 
  else if(choice==2) 
  goto Achoice2; 
 } 
 DoNe: 
 for(i=0;i<4;i++) 
 { 
  if(A.pos[ch]==A.pos[i] && ch!=i) 
  { 
   cout<<"The Token is already there..."<<endl; 
   A.pos[ch] = Pos; 
   Ludo[A.pos[ch]]=A.token[ch]; 
   Ludo[A.pos[i]]=A.token[i]; 
   delay(500); 
  } 
  if(A.pos[ch]==B.pos[i]) 
  { 
   B.pos[i]=4+i; 
   Ludo[B.pos[i]]=B.token[i]; 
   B.NoT--; 
   rmv[0][ch]=1; 
  } 
  if(A.pos[ch]==C.pos[i]) 
  { 
   C.pos[i]=8+i; 
   Ludo[C.pos[i]]=C.token[i]; 
   C.NoT--; 
   rmv[0][ch]=1; 
  } 
  if(A.pos[ch]==D.pos[i]) 
  { 
   D.pos[i]=12+i; 
   Ludo[D.pos[i]]=D.token[i]; 
   D.NoT--; 
   rmv[0][ch]=1; 
  } 
 } 
 for(n=16;n<88;n++) 
 { 
  if(A.pos[0]==n || A.pos[1]==n || A.pos[2]==n || A.pos[3]==n) 
  ck[n][0]=1; 
  else 
  ck[n][0]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]=='#' && ck[n][0]==0) 
  Ludo[n]=' '; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(A.pos[0]==n || A.pos[1]==n || A.pos[2]==n || A.pos[3]==n) 
  Ck[n][0]=1; 
  else 
  Ck[n][0]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]==' ' && Ck[n][0]==1) 
  Ludo[n]='#'; 
 } 
} 
// For token '@' 
if(Z==1) 
{ 
 gotoxy(20,20); 
 puts(Name[Z]); 
 cout<<"\t\t\t"<<"@'s Turn"<<endl; 
 if(B.placom==1) 
 { 
 cout<<"         Press any key to Roll the Dice...."; 
 getch(); 
 } 
 if(B.placom==0)  { delay(1000); } 
 Turn(Num,Ludo); 
 if(Num>=2 && Num<=5)    // Logics made for Ludo 
 { 
  if(B.NoT==0) 
  { Z++; goto again; } 
  Bchoice2: 
  clrscr(); 
  Display(Ludo); 
  gotoxy(20,20); 
  if(B.placom==1) 
  { 
   cout<<"Choose your Token:"<<endl; 
   for(i=0;i<4;i++) 
   { 
    if(B.pos[i]>=16 && B.pos[i]<=87) 
    cout<<"Token "<<i+1<<endl; 
   } 
   cout<<"\t\t"; cin>>ch; 
   if(!(B.pos[ch-1]>=16 && B.pos[ch-1]<=87)) 
   goto Bchoice2; 
  } 
  if(B.placom==0) 
  { 
   for(i=0;i<4;i++) 
   { 
    if(B.pos[i]>=16 && B.pos[i]<=87) 
    ch = i+1; 
   } 
  } 
  ch--; 
  Pos = B.pos[ch]; 
  for(l=0;l<Num;l++) 
  { 
   Ludo[B.pos[ch]]=' '; 
   if(rep[1]==1) 
   { 
    Ludo[B.pos[ch]]=sub[1]; 
    rep[1]=0; 
   } 
   if(B.pos[ch]==67) 
   B.pos[ch]=15; 
   if(B.pos[ch]==27) 
   B.pos[ch]=73; 
   if(B.pos[ch]==77) 
   { 
    B.pos[ch]=F[1]++; 
    B.NoT--; 
    l=69; 
   } 
   else 
   B.pos[ch]++; 
   if(Ludo[B.pos[ch]]!=' ') 
   { 
    sub[1]=Ludo[B.pos[ch]]; 
    rep[1]=1; 
   } 
   Ludo[B.pos[ch]]=B.token[ch]; 
   if(rmv[1][ch]==1) 
   { 
    Ludo[Pos]=' '; 
    rmv[1][ch]=0; 
   } 
   clrscr(); 
   Display(Ludo); 
   delay(200); 
  } 
  goto DoNe1; 
 } 
 if(Num==1 || Num==6) 
 { 
  choice = 1; 
  if(B.placom==1) 
  { 
   if(B.NoT==4 || Ludo[29]=='@') 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
    } 
    while(choice!=2); 
   } 
   else if(B.NoT<4) 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"1) Unlock new one"<<endl; 
     if(B.NoT!=0) 
     cout<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
     if(choice==2 && B.NoT==0) 
     choice = 0; 
    } 
    while(choice!=1 && choice!=2); 
   } 
  } 
  if(B.placom==0) 
  { 
   if(B.NoT==0) 
   choice=1; 
   else if(B.NoT==4 || Ludo[29]=='@') 
   choice=2; 
   else 
   choice = random(1) + 1; 
  } 
  if(choice==1) 
  { 
   for(int k=0;k<4;k++) 
   { 
    if(Ludo[4*Z+k]==B.token[k]) 
    { 
     Ludo[4*Z+k]=' '; 
     B.pos[k]=29; 
     Ludo[B.pos[k]]=B.token[k]; 
     B.NoT++; 
     clrscr(); 
     Display(Ludo); 
     goto DoNe1; 
    } 
   } 
  } 
  else if(choice==2) 
  goto Bchoice2; 
 } 
 DoNe1: 
 for(i=0;i<4;i++) 
 { 
  if(B.pos[ch]==B.pos[i] && ch!=i) 
  { 
   cout<<"The Token is already there..."<<endl; 
   B.pos[ch] = Pos; 
   Ludo[B.pos[ch]]=B.token[ch]; 
   Ludo[B.pos[i]]=B.token[i]; 
   delay(500); 
  } 
  if(B.pos[ch]==A.pos[i]) 
  { 
   A.pos[i]=i; 
   Ludo[A.pos[i]]=A.token[i]; 
   A.NoT--; 
   rmv[1][ch]=1; 
  } 
  if(B.pos[ch]==C.pos[i]) 
  { 
   C.pos[i]=8+i; 
   Ludo[C.pos[i]]=C.token[i]; 
   C.NoT--; 
   rmv[1][ch]=1; 
  } 
  if(B.pos[ch]==D.pos[i]) 
  { 
   D.pos[i]=12+i; 
   Ludo[D.pos[i]]=D.token[i]; 
   D.NoT--; 
   rmv[1][ch]=1; 
  } 
 } 
 for(n=16;n<88;n++) 
 { 
  if(B.pos[0]==n || B.pos[1]==n || B.pos[2]==n || B.pos[3]==n) 
  ck[n][1]=1; 
  else 
  ck[n][1]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]=='@' && ck[n][1]==0) 
  Ludo[n]=' '; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(B.pos[0]==n || B.pos[1]==n || B.pos[2]==n || B.pos[3]==n) 
  Ck[n][1]=1; 
  else 
  Ck[n][1]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]==' ' && Ck[n][1]==1) 
  Ludo[n]='@'; 
 } 
} 
// For token '&' 
if(Z==2) 
{ 
 gotoxy(20,20); 
 puts(Name[Z]); 
 cout<<"\t\t\t"<<"&'s Turn"<<endl; 
 if(C.placom==1) 
 { 
 cout<<"         Press any key to Roll the Dice...."; 
 getch(); 
 } 
 if(C.placom==0)  { delay(1000); } 
 Turn(Num,Ludo); 
 if(Num>=2 && Num<=5)     // Logics made for Ludo 
 { 
  if(C.NoT==0) 
  { Z++; goto again; } 
  Cchoice2: 
  clrscr(); 
  Display(Ludo); 
  gotoxy(20,20); 
  if(C.placom==1) 
  { 
   cout<<"Choose your Token:"<<endl; 
   for(i=0;i<4;i++) 
   { 
    if(C.pos[i]>=16 && C.pos[i]<=87) 
    cout<<"Token "<<i+1<<endl; 
   } 
   cout<<"\t\t"; cin>>ch; 
   if(!(C.pos[ch-1]>=16 && C.pos[ch-1]<=87)) 
   goto Cchoice2; 
  } 
  if(C.placom==0) 
  { 
   for(i=0;i<4;i++) 
   { 
    if(C.pos[i]>=16 && C.pos[i]<=87) 
    ch = i+1; 
   } 
  } 
  ch--; 
  Pos = C.pos[ch]; 
  for(l=0;l<Num;l++) 
  { 
   Ludo[C.pos[ch]]=' '; 
   if(rep[2]==1) 
   { 
    Ludo[C.pos[ch]]=sub[2]; 
    rep[2]=0; 
   } 
   if(C.pos[ch]==67) 
   C.pos[ch]=15; 
   if(C.pos[ch]==40) 
   C.pos[ch]=78; 
   if(C.pos[ch]==82) 
   { 
    C.pos[ch]=F[2]++; 
    C.NoT--; 
    l=69; 
   } 
   else 
   C.pos[ch]++; 
   if(Ludo[C.pos[ch]]!=' ') 
   { 
    sub[2]=Ludo[C.pos[ch]]; 
    rep[2]=1; 
   } 
   Ludo[C.pos[ch]]=C.token[ch]; 
   if(rmv[2][ch]==1) 
   { 
    Ludo[Pos]=' '; 
    rmv[2][ch]=0; 
   } 
   clrscr(); 
   Display(Ludo); 
   delay(200); 
  } 
  goto DoNe2; 
 } 
 if(Num==1 || Num==6) 
 { 
  choice = 1; 
  if(C.placom==1) 
  { 
   if(C.NoT==4 || Ludo[42]=='&') 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
    } 
    while(choice!=2); 
   } 
   else if(C.NoT<4) 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"1) Unlock new one"<<endl; 
     if(C.NoT!=0) 
     cout<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
     if(choice==2 && C.NoT==0) 
     choice = 0; 
    } 
    while(choice!=1 && choice!=2); 
   } 
  } 
  if(C.placom==0) 
  { 
   if(C.NoT==0) 
   choice=1; 
   else if(C.NoT==4 || Ludo[42]=='&') 
   choice=2; 
   else 
   choice = random(1) + 1; 
  } 
  if(choice==1) 
  { 
   for(int k=0;k<4;k++) 
   { 
    if(Ludo[4*Z+k]==C.token[k]) 
    { 
     Ludo[4*Z+k]=' '; 
     C.pos[k]=42; 
     Ludo[C.pos[k]]=C.token[k]; 
     C.NoT++; 
     clrscr(); 
     Display(Ludo); 
     goto DoNe2; 
    } 
   } 
  } 
  else if(choice==2) 
  goto Cchoice2; 
 } 
 DoNe2: 
 for(i=0;i<4;i++) 
 { 
  if(C.pos[ch]==C.pos[i] && ch!=i) 
  { 
   cout<<"The Token is already there..."<<endl; 
   C.pos[ch] = Pos; 
   Ludo[C.pos[ch]]=C.token[ch]; 
   Ludo[C.pos[i]]=C.token[i]; 
   delay(500); 
  } 
  if(C.pos[ch]==A.pos[i]) 
  { 
   A.pos[i]=i; 
   Ludo[A.pos[i]]=A.token[i]; 
   A.NoT--; 
   rmv[2][ch]=1; 
  } 
  if(C.pos[ch]==B.pos[i]) 
  { 
   B.pos[i]=4+i; 
   Ludo[B.pos[i]]=B.token[i]; 
   B.NoT--; 
   rmv[2][ch]=1; 
  } 
  if(C.pos[ch]==D.pos[i]) 
  { 
   D.pos[i]=12+i; 
   Ludo[D.pos[i]]=D.token[i]; 
   D.NoT--; 
   rmv[2][ch]=1; 
  } 
 } 
 for(n=16;n<88;n++) 
 { 
  if(C.pos[0]==n || C.pos[1]==n || C.pos[2]==n || C.pos[3]==n) 
  ck[n][2]=1; 
  else 
  ck[n][2]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]=='&' && ck[n][2]==0) 
  Ludo[n]=' '; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(C.pos[0]==n || C.pos[1]==n || C.pos[2]==n || C.pos[3]==n) 
  Ck[n][2]=1; 
  else 
  Ck[n][2]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]==' ' && Ck[n][2]==1) 
  Ludo[n]='&'; 
 } 
} 
// For token '%' 
if(Z==3) 
{ 
 gotoxy(20,20); 
 puts(Name[Z]); 
 cout<<"\t\t\t"<<"%'s Turn"<<endl; 
 if(D.placom==1) 
 { 
 cout<<"         Press any key to Roll the Dice...."; 
 getch(); 
 } 
 if(D.placom==0)  { delay(1000); } 
 Turn(Num,Ludo); 
 if(Num>=2 && Num<=5)      // Logics made for Ludo 
 { 
  if(D.NoT==0) 
  { Z=0; goto again; } 
  Dchoice2: 
  clrscr(); 
  Display(Ludo); 
  gotoxy(20,20); 
  if(D.placom==1) 
  { 
   cout<<"Choose your Token:"<<endl; 
   for(i=0;i<4;i++) 
   { 
    if(D.pos[i]>=16 && D.pos[i]<=87) 
    cout<<"Token "<<i+1<<endl; 
   } 
   cout<<"\t\t"; cin>>ch; 
   if(!(D.pos[ch-1]>=16 && D.pos[ch-1]<=87)) 
   goto Dchoice2; 
  } 
  if(D.placom==0) 
  { 
   for(i=0;i<4;i++) 
   { 
    if(D.pos[i]>=16 && D.pos[i]<=87) 
    ch = i+1; 
   } 
  } 
  ch--; 
  Pos = D.pos[ch]; 
  for(l=0;l<Num;l++) 
  { 
   Ludo[D.pos[ch]]=' '; 
   if(rep[3]==1) 
   { 
    Ludo[D.pos[ch]]=sub[3]; 
    rep[3]=0; 
   } 
   if(D.pos[ch]==67) 
   D.pos[ch]=15; 
   if(D.pos[ch]==53) 
   D.pos[ch]=83; 
   if(D.pos[ch]==87) 
   { 
    D.pos[ch]=F[3]++; 
    D.NoT--; 
    l=69; 
   } 
   else 
   D.pos[ch]++; 
   if(Ludo[D.pos[ch]]!=' ') 
   { 
    sub[3]=Ludo[D.pos[ch]]; 
    rep[3]=1; 
   } 
   Ludo[D.pos[ch]]=D.token[ch]; 
   if(rmv[3][ch]==1) 
   { 
    Ludo[Pos]=' '; 
    rmv[3][ch]=0; 
   } 
   clrscr(); 
   Display(Ludo); 
   delay(200); 
  } 
  goto DoNe3; 
 } 
 if(Num==1 || Num==6) 
 { 
  choice = 1; 
  if(D.placom==1) 
  { 
   if(D.NoT==4 || Ludo[55]=='%') 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
    } 
    while(choice!=2); 
   } 
   else if(D.NoT<4) 
   { 
    do 
    { 
     clrscr(); 
     Display(Ludo); 
     cout<<endl<<"1) Unlock new one"<<endl; 
     if(D.NoT!=0) 
     cout<<"2) Move old one"; 
     cout<<"      "; cin>>choice; 
     if(choice==2 && D.NoT==0) 
     choice = 0; 
    } 
    while(choice!=1 && choice!=2); 
   } 
  } 
  if(D.placom==0) 
  { 
   if(D.NoT==0) 
   choice=1; 
   else if(D.NoT==4 || Ludo[55]=='%') 
   choice=2; 
   else 
   choice = random(1) + 1; 
  } 
  if(choice==1) 
  { 
   for(int k=0;k<4;k++) 
   { 
    if(Ludo[4*Z+k]==D.token[k]) 
    { 
     Ludo[4*Z+k]=' '; 
     D.pos[k]=55; 
     Ludo[D.pos[k]]=D.token[k]; 
     D.NoT++; 
     clrscr(); 
     Display(Ludo); 
     goto DoNe3; 
    } 
   } 
  } 
  else if(choice==2) 
  goto Dchoice2; 
 } 
 DoNe3: 
 for(i=0;i<4;i++) 
 { 
  if(D.pos[ch]==D.pos[i] && ch!=i) 
  { 
   cout<<"The Token is already there..."<<endl; 
   D.pos[ch] = Pos; 
   Ludo[D.pos[ch]]=D.token[ch]; 
   Ludo[D.pos[i]]=D.token[i]; 
   delay(500); 
  } 
  if(D.pos[ch]==A.pos[i]) 
  { 
   A.pos[i]=i; 
   Ludo[A.pos[i]]=A.token[i]; 
   A.NoT--; 
   rmv[3][ch]=1; 
  } 
  if(D.pos[ch]==B.pos[i]) 
  { 
   B.pos[i]=4+i; 
   Ludo[B.pos[i]]=B.token[i]; 
   B.NoT--; 
   rmv[3][ch]=1; 
  } 
  if(D.pos[ch]==C.pos[i]) 
  { 
   C.pos[i]=8+i; 
   Ludo[C.pos[i]]=C.token[i]; 
   C.NoT--; 
   rmv[3][ch]=1; 
  } 
 } 
 for(n=16;n<88;n++) 
 { 
  if(D.pos[0]==n || D.pos[1]==n || D.pos[2]==n || D.pos[3]==n) 
  ck[n][3]=1; 
  else 
  ck[n][3]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]=='%' && ck[n][3]==0) 
  Ludo[n]=' '; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(D.pos[0]==n || D.pos[1]==n || D.pos[2]==n || D.pos[3]==n) 
  Ck[n][3]=1; 
  else 
  Ck[n][3]=0; 
 } 
 for(n=16;n<88;n++) 
 { 
  if(Ludo[n]==' ' && Ck[n][3]==1) 
  Ludo[n]='%'; 
 } 
} 
Z++;                              // Checking for end point 
Z %= 4; 
int Asum=0,Bsum=0,Csum=0,Dsum=0;  // Checking for Victory 
for(i=0;i<4;i++) 
{ 
 Asum+=A.pos[i]; 
 Bsum+=B.pos[i]; 
 Csum+=C.pos[i]; 
 Dsum+=D.pos[i]; 
} 
if(Asum==358) 
end=1; 
if(Bsum==374) 
end=2; 
if(Csum==390) 
end=3; 
if(Dsum==406) 
end=4;             // End of the Game 
} 
clrscr(); 
Display(Ludo); 
gotoxy(20,20); 
if(end==1) 
cout<<"# Won The Game!!!!!!"; 
if(end==2) 
cout<<"@ Won The Game!!!!!!"; 
if(end==3) 
cout<<"& Won The Game!!!!!!"; 
if(end==4) 
cout<<"% Won The Game!!!!!!"; 
getch(); 
// // // // // 
clrscr(); 
gotoxy(30,10); 
cout<<"HAVE A NICE DAY :)"; 
getch(); 
} 
