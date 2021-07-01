#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define p printf
#define s scanf
#define g gets
#include<locale.h>
#include<time.h>

struct book{
 char name[20];
 char author[20];	
 int pages;
};
int previous(int *a,char b[100],char c[100],int d){
				p("\n        -->If you Satisfya enter '1'or  you want to return previous Page enter '0':\n");	//Burasý üst menüye dönmek için fonksiyon
		s("%d",&a);
		if(a!=0){
		users(b,c,d);
		exit(1);
	}
return a; }

void users(char name2[16],char rename[16],int d){  //Burasý kullanýcýlarýn ne zaman girdigini kaydettiðimiz fonksiyon
	FILE *tre=fopen("The last entries.txt","a+");
	struct tm *local,*gm;    //
	time_t t;				//BU KISIM TÝME ÝÇÝN
	t=time(NULL);			//
	local=localtime(&t);	//	
	if(!strcmp(rename,"admin2122")){
	fprintf(tre,"%s-----> Date: %d / %d / %d Time-->%d : %d: %d\n",rename,local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min,local->tm_sec);
	}

	else if(!strcmp(rename,"2")&&(d==1))
	fprintf(tre,"Visitor-----> Date: %d / %d / %d Time-->%d : %d: %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min,local->tm_sec);
	else 
	fprintf(tre,"%s-----> Date: %d / %d / %d Time-->%d : %d: %d\n",name2,local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min,local->tm_sec);
 
	fclose(tre);
}



void Er (){
	p("ERROR I'm So Sorry As I Couldn't help to you");	
}

	int main(){
	setlocale(LC_ALL, "Turkish"); 
			system("color 0B");
		char name1[16],name2[16],ename[16],pass1[16],pass2[16],name3[16],pass3[16];
			struct tm *local,*gm;
			time_t t;
			t=time(NULL);
			local=localtime(&t);
		
		
		char bkname[25];
		int q=0,c=0,y=0,z=0,d,i; 
		int a=0,u,er,lp=0;
		char x[100],m[100];
		
		while(1){
	   	p("\n\n\t          Date: %d / %d / %d                                       SATURN                                         Time: %d : %d              \n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);
	//	p("###########################################################################################################################################################\n");
		    p("\n\n\n\n");

		p("\t**********************************************************************************************************************************************************\n");
		p("\t----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		p("\t**********************************************************************************************************************************************************\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                           --YOU CAN CHOOSE TEXT COLOR--                                                          *++*\n");
	    p("\t*++*                                                                                                                                                  *++*\n");	
		p("\t*++*                                          -->[1]:RED                                                                                              *++*\n");
		p("\t*++*                                             ------------                                                                                         *++*\n");
		p("\t*++*                                          -->[2]:GREEN                                                                                            *++*\n");
		p("\t*++*                                             ------------                                                                                         *++*\n");
		p("\t*++*                                          -->[3]:WHÝTE                                                                                            *++*\n");
		p("\t*++*                                             ------------                                                                                         *++*\n");
		p("\t*++*                                          -->[4]:BLUE                                                                                             *++*\n");
		p("\t*++*                                             ------------                                                                                         *++*\n");
		p("\t*++*                                          -->[5]:SAME COLOR                                                                                       *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                           Enter Your Choice []                                                                                   *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
	    p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t**********************************************************************************************************************************************************\n");
		
		p("\t----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        p("\t**********************************************************************************************************************************************************\n");
	
	    
	    
	    p("               -->Color:");
	scanf("%d",&er);
	if(er==1){
		system("color 0c");
		break;
	}
		else if(er==2){
				system("color 02");
		break;
			
		}
		else if(er==3){
				system("color 0f");
		break;
		}
	else if(er==4){
			system("color 09");
		break;
		}
		else if(er==5)
		break;
		else
		system("cls");
		}
		
		
	
		
		while(1){
		
		p("\n\n\t\tDate: %d / %d / %d                                            SATURN                                                 Time: %d : %d       \n\n\t",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);
	   
		    p("\n\n\n\n");
	
		p("\t**********************************************************************************************************************************************************\n");
		
		p("\t**********************************************************************||SATURN||**************************************************************************\n");
	
		p("\t**********************************************************************************************************************************************************\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                               -->>Hi! My Name is SaturN .I am Created by Halil and Faruk.<<--                                                    *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
	    p("\t*++*                                                                                                                                                  *++*\n");	
		p("\t*++*                                     **If You are admin , you can skip this section you just have to enter the password.                          *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                     **If You have account enter '1'.                                                                             *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                     **If You don't have account , you should enter '2'                                                           *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t*++*                                                                                                                                                  *++*\n");
		p("\t**********************************************************************************************************************************************************\n");
	
        p("\t**********************************************************************************************************************************************************\n");
	
		
		p("\tEnter Your Choice:");
		
		
		
		g(ename);
		
		system("cls");
		if(!strcmp(ename,"admin2122")){
			y++;
			z++;
			q=5;
			break;
		}
		else	if(!strcmp("1",ename)){
			y++;
			z++;
			break;
		
		}
		else if(!strcmp("2",ename)) {
			while(1){
			system("cls");
		
			p("\n\n\t  Date: %d / %d / %d                                            SATURN                                                        Time: %d : %d       \n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);
			p("\t###########################################################################################################################################################\n\n");
		    p("\n\n\n\n\n\n\n");
			p("\t**********************************************************************************************************************************************************\n");
			
			p(" \t                                                              //--1)Visitor login\n");
		    p("\t----------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
		    p("\t----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			p("\t                                                               //--2)Create a new account\n");
			p("\t----------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
	        p("\t----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
			p("\t                                                               //--3)Exit\n");
	
			p("\t**********************************************************************************************************************************************************\n");
			p("\tEnter Your Choice:");
			s("%d",&d);
			
			
		
				
			
	
				if(d==1){
			y++;
			z++;
			q=5;
			break;}
			
			else if(d==2){
		system("cls");
		break;
			}
			
			else	if(d==3){
			system("cls");
			
			exit(1);
			
			}
		}
		break;
		}
	system("cls");
	}
		system("cls");
		
		while(y==0){
		u=0;
	    p("\n\n\t\t  Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

		    p("\n\n\n\n");
		p("\t||------------------------------------------------------------------------------------------------------||\n");
		p("\t	-There are gaps Which you supposed to fill	\n");
		p("\t	-If you want to acces the SaturN you have to register                          	\n");
		p("\t	-ID's range can be minumum 6 characters.         	\n");
		p("\t	-Please enter your ID Which you want to create   \n");
		p("\t||------------------------------------------------------------------------------------------------------||\n");
		
		p("\n\t\t-ID:");
		g(name1);
	
	
	
	
	
	
	
	 
	 
	 	
	
		
			FILE *rr=fopen("users.txt","r");
		 while(!feof(rr)){
		 	fscanf(rr,"%s %s",name3,pass3);
		 	if(!strcmp(name1,name3))
		 	u=1;
}
	
	if(u==1){
	system("cls");
		printf("         \n\n\n--->>That ID is used by another user therefore That ID is invalid , choice valid ID<<---\n\n\n");
		
		y=0;
	

	}



	 else if((name1[0]==NULL||name1[1]==NULL||name1[2]==NULL||name1[3]==NULL||name1[4]==NULL||name1[5]==NULL)){
		
		
		y=0;
	
	system("cls");
	}
else
y=1;



			
	fclose(rr);		}

	 	while(z==0){
	

        p("\t||------------------------------------------------------------------------------------------------------||\n");
		p("\t	-Password's range can be minumum 6 characters.  \n");
		p("\t	-Please Enter Password that You want to create  \n");
        p("\t||------------------------------------------------------------------------------------------------------||\n");
	
		p("\n\t\t-Password:");
		g(pass1);
		if(pass1[0]==NULL||pass1[1]==NULL||pass1[2]==NULL||pass1[3]==NULL||pass1[4]==NULL||pass1[5]==NULL){
		z=0;
	system("cls");
	p("\n\n\t\t  Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

	}
		else{
			system("cls");
			
	FILE *us=fopen("users.txt","a");
		fprintf(us,"%s %s\n",name1,pass1);
		fclose(us);	
	z=1;
	
		}
		
			
	}
	
    	
		p("\n\n\t\t  Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n\n\n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);
	    
		p("\t\t You Registered.\n");
		
		while(q<3){
		p("\n\n\t\t||******************************************************************************************************||\n");
		p("\t\t           -->Please Enter your ID and Password\n");
	
		p("\t\t||******************************************************************************************************||\n");
		p("\n\t\t-ID:");
		g(name2);
		p("\n\t\t-Password:");
		g(pass2);
		FILE *us;
		us=fopen("users.txt","r");
		while(!feof(us)){
			
			fscanf(us,"%s %s",name1,pass1);
		if(!strcmp(name1,name2)&&!strcmp(pass1,pass2)){
			
		    q=25;
			system("cls");
		}
		}
		fclose(us);
	
		if(!(strcmp(name1,name2))&&(!strcmp(pass1,pass2))){
		system("cls");
				p("\n\t\t  Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n\n\n\n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);
	    
			p("\t\tID and Password are Correct. %s Welcome to SaturN ",name1);
			q=11;
		}
		else{
		system("cls");
				p("\n\t\t  Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n\n\n\n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);
	    
			
			p("\t\t||------------------------------------------------------------------------------------------------------||\n");
			p("\t\t        -->ID or Password is Wrong Please Check Again.\n\t\t        --> Wrong input :%d       \n",q+1);
	
		p("\t\t||------------------------------------------------------------------------------------------------------||\n");
			
			
			q++;
		
		}	
	
		}
		if(q==3){
		system("cls");
		Er();
		exit(q==3);
	}
	


	system("cls");
	
	while(a==0){
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);

p("\t\t\t||************************************************************************************************************||\n");
p("\n\t\t\t                    --> Hi!if you are visitor you can reach only (1)\n\t\t\t                    --> if you are user you can reach (1-2-3)\n");
p("\t\t\t                    --> if you are admin, you should be you have already known what you can reach :)\n\n\n");
p("\t\t\t--------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->1:Books\n\n");
p("\t\t\t--------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->2:Looking For Book\n\n");
p("\t\t\t--------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->3:Barrowing Book\n\n");
p("\t\t\t---------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->4:Books Which are Barrowed by the Users\n\n");
p("\t\t\t---------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->5:Adding Book\n\n");
p("\t\t\t---------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->6:The Last Entries\n\n");
p("\t\t\t---------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->7:Exit\n");
p("\t\t\t---------------------------------------------------------------------------------------------------------------\n");






g(x);
system("cls");

if(!strcmp("Books",x)||!strcmp("1",x)){

while(lp==0){

system("cls");
p("\n\n\t\t\t  Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);
if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
p("\t\t\t################################################################################################################\n\n\n");

p("\t\t\t                                         Books\n");
p("\t\t\t||************************************************************************************************************||\n");


p("\t\t\t--------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->1:LÝterature\n");



p("\t\t\t--------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->2:History\n");
p("\t\t\t----------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->3:Philosophy\n");
p("\t\t\t---------------------------------------------------------------------------------------------------------------\n");


p("\n\t\t\t                                     -->4:Science\n");
p("\t\t\t----------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->5:Religion and Mytholohy \n");
p("\t\t\t----------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->6:Children Book\n");

p("\t\t\t----------------------------------------------------------------------------------------------------------------\n");
p("\n\t\t\t                                     -->7:Books Which are Added\n");
p("\t\t\t----------------------------------------------------------------------------------------------------------------\n");

p("\n\t\t\t                                     -->8:Return Previous Page\n");
p("\t\t\t----------------------------------------------------------------------------------------------------------------\n");


p("\n\t\t\t                                     -->9:Exit \n");
p("\t\t\t----------------------------------------------------------------------------------------------------------------\n");
p("\t\t\t||************************************************************************************************************||\n");


gets(m);
if(!strcmp("Literature",m)||!strcmp("1",m)){
system("cls");
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
p("                                                       --LITERATURE BOOKS--\n");
p("1)Animal Farm\n2)Mai ve Siyah\n3)Calikusu\n4)Nineteen Eighty-four\n5)Fahrenheit 451\n6)The Martian Chronicles\n7)The October Country\n8)Farewell Summer\n9)Long After Midnight\n10)Mavi Kus\n");	
p("11)My Sweet Orange Tree\n12)Banana Brava\n13)Firtinayi Kucaklamak\n14)Tarla Kusunun Sesi\n15)Yoksulluk Icimizde\n16)Zafer Yahut Hic\n17)Arkakapak Yazilari\n18)Dem Bu Demdir\n19)Huzursuz Bacak\n20)Huzun ve Tesaduf\n");
p("21)Uzun Hikaye\n22)Yokusa Akan Sular\n23)Tufandan Once\n24)Ruzgarli Pazar\n25)Tirende Bir Keman\n26)Chef\n27)An Extraordinary Award Ceremony\n28)Be On The Showcase\n29)Vatan Yahut Internet\n30)Sevincini Bulmak\n");
p("31)Sehir Mektuplari\n32)Yoksulluk Kitabi\n33)Our Love is an Old Novel\n34)Swallow's Scream\n35)Beyoglu's Most Beautiful Brother\n36)Farewell Beautiful Homeland\n37)Map Of The Human Soul\n38)Puppet\n39)Fog and Night\n40)Patasana\n");
p("If you don't Satisfya and also you want to return the Book's Page enter '0':\n");	
	g(bkname);
	
	if(!strcmp("Animal Farm",bkname)||!strcmp("animal farm",bkname)||!strcmp("1",bkname)){
		system("cls");
		p("\n||******************************************************************************************************||\n");
		p("\tGeorge Orwell\t\t\t120 Pages\t\t\t\t\t\t4.91");
		p("\n||******************************************************************************************************||\n");	
		p("\nANIMAL FARM\n\n");
		p("The animals on Mr. Jones’ farm revolt against their human\nmasters and violently expel them. Led by the pigs they decide\nto run the farm themselves on egalitarian principles. In\nCourse of time the pigs themselves become corrupted by\npower and a new tyranny is established under their leader\nNapoleon.");
		p("A resounding fable on totalitarianism and power-gone-corrupt,\nAnimal Farm is an allegorical novella that took the\npublishing world by storm when it was first published and\nhasn't stopped doing so ever since. The ultimate satire on\nfascism, Animal Farm finds relevance even in present-day\nworld. A must-read!");
		p("\n\n||------------------------------------------------------------------------------------------------------||\n");
		p("YOU CAN FIND THIS BOOK ON THE SHELF A1\n");
		p("||------------------------------------------------------------------------------------------------------||\n");
		previous(&lp,name2,ename,d);
	
	}

	else if(!strcmp("Mai ve Siyah",bkname)||!strcmp("mai ve siyah",bkname)||!strcmp("2",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHalid Ziya Usakligil\t\t\t336 Pages\t\t\t\t\t4.83");
	p("\n||******************************************************************************************************||\n");
	p("\nMAI VE SIYAH\n\n");
	p("Ahmet Cemil, a child of a middle-class family in Istanbul, loses his father\nwhen he finishes the estate.In the meantime, the great hope is trying\nto complete the work. After a while, their hope returned to despair. This dream of\nyoung poets on a blue night and life do not match; one day he reads his recently\nfinished work to his friends at Hüseyin Nazmi's house.A depraved man beats his sister-in-law\nIqbal because of the beating of his brother-in-law and dies. Her lover Lamia is engaged to an\nofficer. After this, Ahmet Cemil burned his poems which he prepared with great hopes and\nset fire to an accident in Yemen, and took a district governor's office in Yemen, leaving\nIstanbul on a black night with his mother.Sweet dreams of a casino on a starry blue night in\nTepebasi; On a dark night without stars, Istanbul is destroyed by a ferry.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A2\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Calikusu",bkname)||!strcmp("calikusu",bkname)||!strcmp("3",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tResat Nuri Guntekin\t\t\t544 Pages\t\t\t\t\t4.22");
	p("\n||******************************************************************************************************||\n");
	p("\nCALIKUSU\n\n");
	p("Feride loses her parents at an early age. He attended a French boarding school with his\naunt's protection. Because of their mischief, his friends call him 'The Wren' at school. Feride\nspends his summer holidays at his aunt's mansion. They love each other and engage with Kamuran,\nhis aunt's handsome son. Feride, on the day of the wedding, from a letter brought by a woman Kamuran'in\nin Switzerland with a sick girl named Munevver, as soon as she learns that she promised to marry, leaving\neverything upside down and run away. Feride teaches in various parts of Anatolia (Zeyniler Village, Bursa,\nCanakkale ...). She's a very idealistic girl. Her beauty is trouble. Various rumors come out. When he was in\nZeyniler Village, he met Doctor Hayrullah Bey for the second time in Kusadasi. Hayrullah Bey, a fatherly\nman, protects Feride like his daughter; upon the gossip of the people he marries him on paper; but there is\nonly a 'father - daughter' relationship. Feride kept a daily diary years during her years as a teacher. Hayrullah\nBey finds, reads and stores this book. When he becomes ill, he testifies to Feride to go to his aunt's\nposthumous death and hand over the sealed envelope he gave to Kamuran.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A3\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Nineteen Eighty-four",bkname)||!strcmp("nineteen eighty-four",bkname)||!strcmp("4",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tGeorge Orwell\t\t\t\t336 Pages\t\t\t\t\t4.54");
	p("\n||******************************************************************************************************||\n");
	p("\nNINETEEN EIGHTY-FOUR\n\n");
	p("The book is set in 1984 in Oceania, one of three perpetually warring totalitarian states\n(the other two are Eurasia and Eastasia). Oceania is governed by the all-controlling Party, which has\nbrainwashed the population into unthinking obedience to its leader, Big Brother. The Party has created\na propagandistic language known as Newspeak, which is designed to limit free thought and promote the\nParty’s doctrines. Its words include doublethink (belief in contradictory ideas simultaneously), which is\nreflected in the Party’s slogans: “War is peace,” “Freedom is slavery,” and “Ignorance is strength.” The\nParty maintains control through the Thought Police and continual surveillance. The book’s hero,\nWinston Smith, is a minor party functionary living in a London that is still shattered by a nuclear\nwar that took place not long after World War II. He belongs to the Outer Party, and his job is to rewrite\nhistory in the Ministry of Truth, bringing it in line with current political thinking. However, Winston’s\nlonging for truth and decency leads him to secretly rebel against the government. He embarks on a forbidden\naffair with Julia, a like-minded woman, and they rent a room in a neighbourhood populated by Proles\n(short for proletariats). Winston also becomes increasingly interested in the Brotherhood, a group of\ndissenters. Unbeknownst to Winston and Julia, however, they are being watched closely (ubiquitous posters\nthroughout the city warn residents that“Big Brother is watching you.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A4\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Fahrenheit 451",bkname)||!strcmp("fahrenheit 451",bkname)||!strcmp("5",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t256 Pages\t\t\t\t\t4.76");
	p("\n||******************************************************************************************************||\n");
	p("\nFAHRENHEIT 451\n\n");
	p("When the novel begins, fireman Guy Montag is burning a hidden collection of books. He enjoys\nthe experience; it is 'a pleasure to burn.' After finishing his shift, he leaves the firehouse\nand goes home. On the way he meets a neighbor, a young girl named Clarisse McClellan. Clarisse\ntells Montag that she is 'crazy' and she asks Montag many questions. After they part, Montag\nfinds himself disturbed by the encounter. Clarisse has forced him to think about his life instead\nof simply offering superficial responses to her questions. At home, Montag discovers his wife,\nMildred, unconscious from an overdose of sleeping pills. Montag calls for help and two technicians\narrive to pump Mildred's stomach and perform a blood transfusion. They tell Montag that they\nno longer send doctors because there are so many overdoses. The next day, Mildred claims to have\nno memory of the overdose, believing she went to a wild party and woke up hungover. Montag is disturbed\nby her cheer and her inability to engage with what happened. Montag continues to meet Clarisse almost every\nnight for talks. Clarisse tells him that she is sent to therapy because she does not enjoy the normal activities\nof life and prefers to be outside and to have conversations. Some weeks later Clarisse suddenly stops meeting\nhim, and Montag is saddened and alarmed.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A5\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("The Martian Chronicles ",bkname)||!strcmp("the martian chronicles",bkname)||!strcmp("6",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t320 Pages\t\t\t\t\t4.45");
	p("\n||******************************************************************************************************||\n");
	p("\nTHE MARTÝAN CHRONICLES\n\n");
	p("A Martian woman has dreams of a rocket coming down from the sky, containing a light-skinned, blue-eyed\ncreature named Nathaniel York. Her husband is weary, and when the rocket lands, he shoots the\nmen. All over Mars, people begin to hum Earth tunes and have strange dreams. When a second rocket lands, the\nastronauts get out and explore. They say they are from Earth, but everyone thinks they are crazy\npeople who have hallucinated their rocket. Thus, they are all shot by a psychologist. Meanwhile, on\nEarth, a crazed taxpayer tries to board the third rocket to Mars, but he is denied. When it lands,\nthe astronauts find themselves in an ideal small American town. They meet their dead relatives and\nsplit up to have dinner with lost parents and brothers.Captain John Black goes to bed next to his\nlong-lost brother, only to realize that it is probably all a Martian trap. His 'brother' kills him\nbefore he can leave the room. A year later, a fourth expedition lands, and it is successful.\nAlmost all the Martians have died of chicken pox, apparently acquired from one of the previous expeditions.\nCaptain Wilder lets his men drink and dance, but this angers the archaeologist in the crew, Jeff Spender.\nSpender feels humbled by the great Martian civilization and wants the rest of the crew to be dignified.\nHe goescrazy and tries to kill the crew; Wilder reasons with him and is somewhat sympathetic,\nbut finally has to shoot him.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A6\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("The October Country",bkname)||!strcmp("the october country",bkname)||!strcmp("7",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t320 Pages\t\t\t\t\t4.28");
	p("\n||******************************************************************************************************||\n");
	p("\nTHE OCTOBER COUNTRY\n\n");
	p("Short story anthologies can be difficult for me to get into, especially ones that aren’t serial.\nMany times a good story feels over before it’s even begun, and then I have to move on to a new one\nand meet new characters in a new setting. Short stories can be enthralling, capable of telling a simple\ntale without establishing a universe or communicating every thought in a character’s mind as so\nmany works of lengthy fiction tend to do these days. An overbearing level of emotion can be expressed\nin very few pages with short stories. My problem is with having to read many short stories all at once.\nI feel that I can only appreciate short stories if I take them one at a time. For a non-serial anthology,\nthat’s hard for me to do because I don’t like to sit on a single book for too long. Ray Bradbury is\nconsidered by many to be the master of American short fiction. Even aside from his short stories,\nunlike dozens of other science fiction authors, his novel-length works are extremely brief. His best-known\npieces such as Fahrenheit 451 and Something Wicked This Way Comes are short and sweet, and among many\nfavorites in modern American sci-fi and fantasy. But for Bradbury’s biggest fans, his greatest strengths\nlie in his short stories. His anthology, The Martian Chronicles, is among the most popular collections\nof short stories in science fiction literature. However, The Martian Chronicles is also serial,\nand while each story deals with individual charming characters, the mastery\nof it all is in the over-arching story. ");
	p("\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A7\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Farewell Summer",bkname)||!strcmp("farewell summer",bkname)||!strcmp("8",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t178 Pages\t\t\t\t\t4.07");
	p("\n||******************************************************************************************************||\n");
	p("\nFAREWELL SUMMER\n\n");
	p("In a summer that refuses to end, in the deceiving warmth of earliest October, civil war\nhas come to Green Town, Illinois. It is the age-old conflict: the young against the elderly, for\ncontrol of the clock that ticks their lives ever forward. The first cap-pistol shot heard 'round\nthe town is dead accurate, felling an old man in his tracks, compelling town elder and school board\ndespot Mr. Calvin C. Quartermain to marshal his graying forces and declare total war on the assassin,\nthirteen-year-old Douglas Spaudling, and his downy-checked cohorts. Doug and his cronies,\nhowever, are most worthy adversaries who should not be underestimated, as they plan and execute daring\ncampaigns-matching old Quartermain's experience and cunning with their youthful enthusiasm and\ndevil-may-care determination to hold on forever to childhood's summer. Yet time must ultimately be\nthe victor, with valuable revelations for those on both sides of the conflicts. And life waits in\nambush to assail Doug Spaulding with its powerful mysteries-the irresistible ascent\nof manhood, the sweet surrender to a first kiss");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A8\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Long After Midnight",bkname)||!strcmp("long after midnight",bkname)||!strcmp("9",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t271 Pages\t\t\t\t\t4.39");
	p("\n||******************************************************************************************************||\n");
	p("\nLONG AFTER MIDNIGHT\n\n");
	p("This 1976 volume is the last of Bradbury's great short story collections, and my personal favorite.\n'One Timeless Spring' is a unique coming-of-age tale of a 12-year-old who is convinced his\nparents are poisoning him; !The Utterly Perfect Murder' details a 48-year-old's revenge on the boy\nwho bullied him when they were 12; 'Have I Got a Chocolate Bar for You' depicts the relationship\nbetween a Catholic priest and the rotund young man who periodically comes to confession to\ntalk of his peculiar obsession; 'The Parrot Who Met Papa' is an utterly hilarious spoof of Hemingway\n(or maybe Chandler) and his literary groupies; the title story is a very different one for Bradbury,\nabout a lonely oceanside suicide ... and then there are some of Bradbury's usual stories\nabout friendly robots and light horror. A truly marvelous mix.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A9\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Mavi Kus",bkname)||!strcmp("mavi kus",bkname)||!strcmp("10",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t211 Pages\t\t\t\t\t4.07");
	p("\n||******************************************************************************************************||\n");
	p("\nMAVI KUS\n\n");
	p("A dog with a tongue out of heat, pals, heavy and weary steps from one square to the other\nin front of the butcher in the corner stops. The old stray cats standing around don't\ncare about this old dog that looks like them. In the shady door of the butcher shop, there is a\nmosquito net made of nylon strips and colorful beads. Flapper does not move. There is no\nslight breeze in the air. The midday heat is devoted to the butcher. You think it's raining\nsparks from the sky. Buildings, buildings, people, and all kinds of exposed objects fell out of\na flood of light and fell down. After starving his ribs, staring at the door of the butcher's old\ngaze, he wobbles around the corner and lies in the shadow of the upper acacia.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A10\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	p("\nIf you don't Satisfya and also you want to return the Home Page enter '0':\n");	
	previous(&lp,name2,ename,d);
		
}

	else if(!strcmp("My Sweet Orange Tree",bkname)||!strcmp("my sweet orange tree",bkname)||!strcmp("11",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJose Mauro de Vasconcelos\t\t\t192 Pages\t\t\t\t4.73");
	p("\n||******************************************************************************************************||\n");
	p("\nMY SWEET ORANGE TREE\n\n");
	p("My Sweet Orange Tree begins with José Mauro de Vasconcelos (Caco Ciocler) receiving an edition\nof his finished novel. Then, the film starts to tell the story from the writer's memories,\nthrough flashbacks. Zezé (João Guilherme Avila), a boy of eight years who lives in Minas Gerais\nin a very humble house with his family, consisting of his father (Eduardo Dascar), an unemployed and\nalcoholic, and his mother (Fernanda Vianna), which works to support the home and his brother and\nsisters. Despite the lack of understanding, affection and the aggression suffered by from his father\nand school colleagues, the boy has a great skill for storytelling using his imagination. With\nfinancial difficulties, the family has to move. At the new home, Zezé finds an orange tree, which\nhe talks everyday. However, for being extremely extrovert he got involved in several confusions.\nOne of them, he tries to ride on the bumper of Manoel Valadares, the 'Portuga' (José de Abreu), but\nis caught and spanked. The boy feels humiliated and wants revenge, however Valadares ends up understanding\nZeze, which turns to share his world of fantasies, and a new friendship arises.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B1\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Banana Brava",bkname)||!strcmp("banana brava",bkname)||!strcmp("12",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJose Mauro de Vasconcelos\t\t\t176 Pages\t\t\t\t4.62");
	p("\n||******************************************************************************************************||\n");
	p("\nBANANA BRAVA\n\n");
	p("Banana Brava has all these elements while following around a group of garimpos (men who dig\nfor diamonds). They’re such an unusual group of people that Vasconcelos even apologizes\nin the foreword of the book, saying he’s sorry for even keeping their curses the same\nin the book. They do heavy work, real heavy work, as they eat bad food, drink bad drinks,\nwear dirty clothes and drift around with no money. What they eat and drink especially caught my\nattention because I’m a lover of eating and drinking. The footnotes have explained very well what\nexactly it is they’re consuming. I didn’t at all understand how they can eat so badly yet have all\nthat energy to do the work they have to do. And looking at the worn-down places they stay in, I\nhave no idea how they manage a good night’s sleep and can actually get up so\nearly in the morning.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B2\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	
	
	else if(!strcmp("Firtinayi Kucaklamak",bkname)||!strcmp("firtinayi kucaklamak",bkname)||!strcmp("13",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t144 Pages\t\t\t\t4.57");
	p("\n||******************************************************************************************************||\n");
	p("\nFIRTINAYI KUCAKLAMAK\n\n");
	p("They're going, let's lament. Because you have to go, no return. They shouted their children\nand clenched their teeth. Ignoring the rain, the land, the butts and the clock towers. Climbing the\nwire fence and climbing the wall. It's like the sad mourning foam of an exuberant river. It's\nlike a flock of starlings that suddenly take off ... They're so crowded and huge that no one\nsees them. They look, but they don't see. Neither televisions nor satellites nor child food nor frost\nshirts. They're after that kid, you know, beautiful photo. Corpses and fashion shows that the sea\nvomits. Don't make any sense. Where do you mind? You have no mind. You don't have any, but you have money.\nWe came to see. We came to bury that kid there. We said we would, don't bother us. Fear mountains are\nwaiting, I think, to get rid of fear, war eagles are constantly bombing that fear. The nightmares\nyou see in case they come. And the screwdrivers that riddled your dreams. They are the slaves whom\nyou whip on your back, that blood, the blood you drank for centuries. We'il drown, stop that run. Stop\nor our balance will be broken, a black hole will swallow us. To no avail, where has the persecution\nbeen worshiped? That run will go to eternity, one day it will cling to your collar. He'il embrace\nthe storm. Listen to the sound from distant mountains, valleys. Listen, the echo's all over it.\nApproaching anthem of honor and honor. We came to stand against the bombs. We're here to break the\nchains. We came to see your brazen face. We've come to ask for centuries, we've come to ask!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B3\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	

	
	else if(!strcmp("Tarla Kusunun Sesi",bkname)||!strcmp("tarla Kusunun sesi",bkname)||!strcmp("14",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t224 Pages\t\t\t\t4.02");
	p("\n||******************************************************************************************************||\n");
	p("\nTARLA KUSUNUN SESI\n\n");
	p("Mustafa Kutlu's new book Tarla Kuþunun Sesi (Voice of the Bird) meets one of the readers of the Turkish\nliterary storyteller. Kutlu, who puts the life of a crowded family in the center, enriches\nthe story with the elements of daily life as in his other stories. The narrator, who looks\nat people, family and society with a “realistic” and “compassionate gözle eye, draws a historical\nbackground to the story. That is. We think things will go on the same way. It is empty to try to\nrationalize the universe and life. To a place you call mind. There is no point in saying how we believe\nin the unseen, for what is happening is like this. He must surrender. Here we have written a letter on\nthe water, we are going. We got some rest in that shade. That's all. Just handle it. Goodbye.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B4\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Yoksulluk Icimizde",bkname)||!strcmp("yoksulluk icimizde",bkname)||!strcmp("15",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t104 Pages\t\t\t\t4.71");
	p("\n||******************************************************************************************************||\n");
	p("\nYOKSULLUK ICIMIZDE\n\n");
	p("We nurture and grow a thought of happiness connected to physical and material pleasures. We\nenrich the world conversation with countless details. The ambitions of the soul make us rush to things\nthat emit different glimpses. This wild running is the symbol of the modern world. Poverty It points to\nthe truth of life by expressing the heart, love and beyond.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B5\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Zafer Yahut Hic",bkname)||!strcmp("zafer yahut hic",bkname)||!strcmp("16",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t197 Pages\t\t\t\t4.4");
	p("\n||******************************************************************************************************||\n");
	p("\nZAFER YAHUT HIC\n\n");
	p("Alexander, the king of Macedonia, advances in the east after defeating Dârâ. Rukzan, the daughter\nof Dara, hid his identity and took refuge in the palace of the Punjab ruler Esber. Esru`s sister\nSumru fell in love with Alexander without seeing him. While secretly meeting and making love between\nSumru and Alexander, Rukzan loves Alexander. Despite all the requests of Alexander Sumru, he walks\nto Punjab. When Sumru fails to pass the word to his lover, he wants to discourage his brother\nfrom this war. But Ashraf knows that he is responsible to the people. He fights and kills Sumru, a traitor.\nWhen this news reaches Alexander, the king passes by chewing Rukzan with his horse who wants to prevent\nhim. Punjab falls, Ashbar is chained. Admired by Esher's heroism, Alexander releases him and returns\nhis sword. Esber takes the sword and commits suicide. Surrounded by the corpses of Ashbar, Sumru and\nRuqzan, Alexander asks his mentor Aristotle. The work ends with Aristotle's answer: Victory or nothing!\nSummary of Abdulhak Hamid Tarhan's verse play 'Ashbar'");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B6\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Arkakapak Yazilari",bkname)||!strcmp("arkakapak yazilari",bkname)||!strcmp("17",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t118 Pages\t\t\t\t4.12");
	p("\n||******************************************************************************************************||\n");
	p("\nARKAKAPAK YAZILARI\n\n");
	p("We always wait for something to happen. Those who walk on the coastal road will look at the future\nlaughing. Seagull screams. Muazzez Abacý's misted songs are heard, the watermelon exhibits magical lamps\nlight up. The fountain of the pool begins to tell legends. fireflies, scops, caravans, journey. Sleep is\nwaiting for us and dear dream. Then smoke, gray sea, moonlight, caramel. That's good, but we'il pass.\nWe look at the horizon. Everyone looks at the horizon. What's there?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B7\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Dem Bu Demdir",bkname)||!strcmp("dem bu demdir",bkname)||!strcmp("18",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t251 Pages\t\t\t\t4.2");
	p("\n||******************************************************************************************************||\n");
	p("\nDEM BU DEMDIR\n\n");
	p("Mustafa Kutlu is one of the top names of Turkish storytelling. We're all familiar with your\nstories. What about his trials? Maybe not so ... However, every sentence from the author's pen; it\nreflects the world of mind, what they see and spend, their sadness, their excitement, and the state\nof the state. In this context, the value of the sentences of the author, which took place in\nnewspaper columns for a period of twenty years, appears automatically. Listen to a story\nin Turkey in the near term from Mustafa Kutlu ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B8\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Huzursuz Bacak",bkname)||!strcmp("huzursuz bacak",bkname)||!strcmp("19",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t164 Pages\t\t\t\t4.76");
	p("\n||******************************************************************************************************||\n");
	p("\nHUZURSUZ BACAK\n\n");
	p("The joy of having returned to the country after many years in my hands, suitcases in my hands, a\nlittle sweaty forehead while walking towards a taxi to get rid of the bustle of the airport, quiet,\ncalm, but strangely touched the creepy hand ... I left the suitcases, I deleted the term. In the meantime, that\ngray lizard passed away from my feet with a quiet, calm yet strange creepy look.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B9\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Huzun ve Tesaduf",bkname)||!strcmp("huzun ve tesaduf",bkname)||!strcmp("20",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t99 Pages\t\t\t\t4.57");
	p("\n||******************************************************************************************************||\n");
	p("\nHUZUN VE TESADUF\n\n");
	p("In this work of Azar, there is a section consisting of very short texts and a second section\ncovering long texts. The following stories are included in the work: We loved Seyfettin, Mahzun Mujahid,\nDo Something, Noise of Water, No Need for Tame, Not the Time of Rebellion, Fairy Tale and Dream,\nPoem of Poiser, Story, Spring Branch, Walking Ruling, Composing, Humpback Hafýz and Minaret, Sadness\nand Coincidence, Karakoncolos, Binoculars Flower, Mevzu Derin, Uc Selahattin Uc.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B10\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}

	else if(!strcmp("Uzun Hikaye",bkname)||!strcmp("uzun hikaye",bkname)||!strcmp("21",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t115 Pages\t\t\t\t4.28");
	p("\n||******************************************************************************************************||\n");
	p("\nUZUN HIKAYE\n\n");
	p("I was sixteen at that time, high school one. He's a tall boy. My hair stands upright like a\nhedgehog; neither side, nor crawled back, was driving me crazy. My father Stubborn\nstubborn ... Stubborn man's hair does not lie. Your grandfather obviously pulled. I wish you looked like\nyour mother, he said.I wish ... Mom had soft, blond hair like lepiska. I miss those blue eyes the most.\nHe said, 'My son will have a high officer to read.' My father looks at him as if they agreed, a mischievous smile\non his lips:H Huh Biz he shook his shoulders as if we had read something.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C1\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Yokusa Akan Sular",bkname)||!strcmp("yokusa akan sular",bkname)||!strcmp("22",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t91 Pages\t\t\t\t4.23");
	p("\n||******************************************************************************************************||\n");
	p("\nYOKUSA AKAN SULAR\n\n");
	p("In our country, which is said to be in the process of transition from agricultural society to\nindustrial society, material and moral social change is observed. The waters flowing to the slope\naddress the dilemmas that our people have been forced to experience in a certain direction. The stories\nthat make up the book basically constitute a whole that examines the phenomenon of industrialization.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C2\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Tufandan Once",bkname)||!strcmp("tufandan once",bkname)||!strcmp("23",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t208 Pages\t\t\t\t4.25");
	p("\n||******************************************************************************************************||\n");
	p("\nTUFANDAN ONCE\n\n");
	p("Mayor Þemsettin Bilen, had a bath that morning, established, undershirt on the top, striped flannel\npijima on the bottom, wearing glasses and cedar had emerged. He cuts his nails, his toenails. He spread a\nnewspaper, hunched his waist and leaned back on his feet.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C3\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Ruzgarli Pazar",bkname)||!strcmp("ruzgarli pazar",bkname)||!strcmp("24",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t183 Pages\t\t\t\t3.96");
	p("\n||******************************************************************************************************||\n");
	p("\nRUZGARLI PAZAR\n\n");
	p("Unlike the previous four works of the author, the windy market has a characteristic of marching\nfrom folk story to fairy tale. For this book, the phrase 'a city tale' would be appropriate. Mustafa\nKutlu; In this long story, he mainly deals with the theme of 'poverty.' It presents an\nepic story of love, solidarity, compassion.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C4\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("Tirende Bir Keman-",bkname)||!strcmp("tirende bir keman",bkname)||!strcmp("25",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t152 Pages\t\t\t\t4.43");
	p("\n||******************************************************************************************************||\n");
	p("\nTIRENDE BIR KEMAN\n\n");
	p("Kenan and his son Sadullah, who didn't leave him alone on the journey of endless tiren journeys in\nthe face of frustrations ... The rest of the people who enter and leave the stations filling and\nemptying the rest… There are also things that do not change: Of course they do not separate the violin and\nsongs they do not drop their tongues. You will also read the story of Yeþilçam film from Mustafa Kutlu's\npen with these songs that carry the atmosphere of the fifties.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C5\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	




	else if(!strcmp("Chef",bkname)||!strcmp("chef",bkname)||!strcmp("26",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t214 Pages\t\t\t\t4.31");
	p("\n||******************************************************************************************************||\n");
	p("\nCHEF\n\n");
	p("Kutlu's favorite stories are followed in this book ... You will not be able to leave these stories.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C6\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("An Extraordinary Award Ceremony",bkname)||!strcmp("an extraordinary award ceremony",bkname)||!strcmp("27",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t153 Pages\t\t\t\t4.0");
	p("\n||******************************************************************************************************||\n");
	p("\nAN EXTRAORDINARY AWARD CEREMONY\n\n");
	p("A coastal town in Turkey cephalopods Association, will announce the name of the town to the festival\nand will organize an award ceremony. Awards will be given in many fields from cinema to literature,\ntheater and archeology. Aziz Bey, who never got married and rose to the undersecretariat in the\nministry. The desire to benefit from tourism potential during the award ceremony, Istanbul fashion industry's\nauthentic products to the world marketing bustle, brand ambition, the 'magic word' media, bureaucracy, the meaning\nof being in mind, and the peak of shopping in a quiet town to speak to the world from a quiet address.\nNezaket, a city-hardworking, entrepreneur, quietly returns to himself. Mustafa Kutlu, who tells the\nrelationship between human and geography transformed by modern times around an award ceremony, describes the existence\nof a world that does not leave the human even if he is a hundred years old, in an ironic language when he brings\nthe protagonists to the stage one by one. An Extraordinary Award Ceremony invites people to reconnect\nwith the world through self and exquisite ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C7\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Be On The Showcase",bkname)||!strcmp("be on the showcase",bkname)||!strcmp("28",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t314 Pages\t\t\t\t3.78");
	p("\n||******************************************************************************************************||\n");
	p("\nBE ON THE SHOWCASE\n\n");
	p("Until the middle of the last century (XIX.), Our country's craftsmen shop did not showcase.\n(The showcase came to us from the west, minorities first applied it.) He opened the shutters and the\ndoor, and in a convenient place he put some of his property in front of the shop. There was no\nspecial effort for the sale of the goods (decoration-packing-polishing, etc.). To show that it is\ndifferent from what it already has (that is, to make the ugly beautiful, to shine the customer's mind\nby polishing it more than it is) was considered contrary to vain. In the end, we had the following law:\n'If you do not showcase you have no chance of selling.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C8\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	

	else if(!strcmp("Vatan Yahut Internet",bkname)||!strcmp("vatan yahut internet",bkname)||!strcmp("29",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t264 Pages\t\t\t\t4.86");
	p("\n||******************************************************************************************************||\n");
	p("\nVATAN YAHUT INTERNET\n\n");
	p("'Human beings leave the earth and surrounded by tools' a virtual world? founded. He's bored here.\nHe sees two mirages: speed and pleasure. These are games of self. When they get it, they disappear.\nThe distress continues. If people do not deliver themselves to shopping malls with fifty thousand\nkinds of products, they can get rid of the clamps of consumption culture and see the flowers and insects\nagain; A goat cub's gaze, the smell of milk, blackberry jam will not change to\nanything, but they can not bear drunkenness.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C9\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}


	else if(!strcmp("Sevincini Bulmak",bkname)||!strcmp("sevincini bulmak",bkname)||!strcmp("30",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t296 Pages\t\t\t\t4.25");
	p("\n||******************************************************************************************************||\n");
	p("\nSEVINCI BULMAK\n\n");
	p("Autumn. What is the beauty of autumn? The redness of the leaves, yellowing, and then saying\ngoodbye to the branch of the quince smelling breeze between the arms, from side to side oscillation\nand fall to the ground. Great separation, great death. Aren't the earth and leaves two lovers? Or\nmother and son. The leaf falls, splits into a thousand pieces, and dies in the mother's lap. There are\ncountless compositions of rain for this dramatic reunion. Fresh tomb rains on it, rains ... Until when?\nUntil the land is turned and the whole world is silent. Then the mourning ends, the sun smiles. Water\nwalks on the branches and the bud explodes. Mother earth blows offspring to life. That's how Devran\nturns. The propeller revolves around the flame, throwing itself into the fire, freaking out of love.\nNow, shall we not witness the birth of love? Won't he write a poem?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C10\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Sehir Mektuplari",bkname)||!strcmp("sehir mektuplari",bkname)||!strcmp("31",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t\t140 Pages\t\t\t\t3.54");
	p("\n||******************************************************************************************************||\n");
	p("\nSEHIR MEKTUPLARI\n\n");
	p("The writings in this book are the product of a provincial storyteller's efforts to get to know the\ncity (Istanbul) where he lives. I traveled around Istanbul for ten years, and I published my impressions of\nthis trip under the title of 'A bunch of Istanbul' in the daily Zaman. 'City Letters' is the next stage of\nthis passionate adventure. This time, it was embodied as essays that share human-city-space\nrelationships with readers. It's hard to get to know each other without knowing our\ncity. Especially loving.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D1\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Yoksulluk Kitabi",bkname)||!strcmp("yoksulluk kitabi",bkname)||!strcmp("32",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kutlu\t\t\t188 Pages\t\t\t\t4.07");
	p("\n||******************************************************************************************************||\n");
	p("\nYOKSULLUK KITABI\n\n");
	p("The poor are waiting for us. They wait in graves, ruins, sheds, moldy-damp dark rooms. In nylon\ntents, earth-roofed houses, bird-fly-caravans and in the heart of the city. They stand still, silent,\npensive as a statue with their bloody eyes on the horizon. Babies cry from hunger, blood flows from\nmothers' eyes instead of age. Steel glistening gushes from the glaring gaze of the children. Fathers\nclench fists, and the sons in the military are looking for a crane string in the sky. Grandparents' mouths\nclosed. Grandmas don't sound. Brides mourning. And the feeble teenage daughters await unbalanced nutrition,\nrelatives debt, lament to their neighbors. They are waiting in their corner, in the muddy deserted streets,\nbetween snow, rain and skyscrapers, in the mountains, in the fields, in front of the workshops where the\ndoor is locked. Unemployed, desperate, hungry, tired, sick, resentful, quiet and forlorn. You o healthy\nand wealthy ones. Those who go well. O belly, hard back, smiling face. O election winners and those\nestablished in the seat. Those who fly dollars and hold the heads of taps. You are the focus of power, arms\nowners, masters of words. Five time prayer with the congregation. Night relocation shields. Those who chant\nwith the chanting. Those who went to pilgrimage many times. One put and five winning merchants, fawning\ntrades to the oily customer; intermediaries, usurers, bankers. Politicians who don't leave ash in the\nbarbecue. Scientists, academics. Those who can cut iron by order. Remember. It's winter\nand the poor are waiting for you.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D2\n");
	p("||------------------------------------------------------------------------------------------------------||\n");

			previous(&lp,name2,ename,d);
}	


	else if(!strcmp("our love is an old novel",bkname)||!strcmp("Our Love is an Old Novel",bkname)||!strcmp("33",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t224 Pages\t\t\t\t4.88");
	p("\n||******************************************************************************************************||\n");
	p("\nOUR LOVE IS AN OLD NOVEL\n\n");
	p("The most pleasurable moments can turn into bloody truths Baþ For this reason, Baþkomser Nevzat,\nwho has strength not only from his mind and experience, but also from his wounded heart, is separated\nfrom his peers and perhaps loved and read and remembered the most. Our Love is an Old Novel, it is not\nenough courage to make a profession ... ... a brand new ring right in this challenging adventure, but it\nrequires a big heart at the same time. But that heart is not made of steel. After a while, he booms like\na grenade. Let's not get that heart timeless, Ali. There is no point in pleasing the oppressors.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D3\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
		previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Swallow's Scream",bkname)||!strcmp("swallow's scream",bkname)||!strcmp("34",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t436 Pages\t\t\t\t4.79");
	p("\n||******************************************************************************************************||\n");
	p("\nSWALLOW'S SCREAM\n\n");
	p("He chooses his victims among child molesters and starts killing again. The fact that the trust\nin justice has been replaced by a secret hero during a period of lynch culture has turned him into a\ngreat threat. In fact, justice is so precious that individuals cannot pollute it in their own way. The\nmoment we become aware of our self is the moment we writh in the grip of pain. Although Swallow's Scream\nis a typical Ahmet Ümit novel with its devious fiction and high tempo, it is able to gain a special\nplace among the author's works with its sensitivity and responsiveness towards social problems.\nSwallow's Scream resists the agenda that changes with the speed of light; it screams out our bleeding wounds\nthat we need to notice and take action to change.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D4\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Beyoglu's Most Beautiful Brother",bkname)||!strcmp("beyoglu's most beautiful brother",bkname)||!strcmp("35",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t640 Pages\t\t\t\t4.02");
	p("\n||******************************************************************************************************||\n");
	p("\nBEYOGLU'S MOST BEAUTIFUL BROTHER\n\n");
	p("Darkness ... A darkness that gets heavier with cold weather. Songs come from far away, cheerful\nwoman cries, drunken coyotes out of tune, one curses maybe the mainstream, maybe one cries one\nsobbing, maybe one is silently dying in the middle of this noise, this turmoil. He dont care. Stripped\nof all, only anger ... He walks without knowing where he's going, besieged by hatred. That monster, called\njealousy, squeezes his heart in his claw. Women, a voice says from the depths of the mind ... Women, you can\nnot play with them ... You think you're playing, but also look, you've become the real toy. The faces of\nwomen entering her life appear on the street floor. One by one, footage falls to your feet. They're all\ntwisted, grief in all their eyes. They're all upset ... He doesn't mind, he's stepping on them like a\npuddle, but the images fall back on the floor. Women, that voice says again, You can never get\nrid of women, their ghosts follow you all your life.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D5\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Farewell Beautiful Homeland",bkname)||!strcmp("farewell beautiful homeland",bkname)||!strcmp("36",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t560 Pages\t\t\t\t4.92");
	p("\n||******************************************************************************************************||\n");
	p("\nFAREWELL BEAUTIFUL HOMELAND\n\n");
	p("Death begins with losing our cities. I don't remember who said it, unfortunately it is true ...\nTrue, but it is missing. Death begins with the loss of our cities and results in the loss of our\nhomeland. What is homeland? A piece of land, endless seas, deep lakes, steep mountains, fertile\nplains, lush forests, crowded cities, secluded villages? No, it has a meaning beyond all that.\nNeither the land, nor the water basins, nor the range of trees… The compassion of our mother, the\nwhite hair falling on our father's hair, our first love, born child, the graves of our grandfather's\nhomeland olmayan There is no life for people without homeland. Yeah, once my mind, my heart\nwas full of these ideas. Now? I do not know now");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D6\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Map Of The Human Soul",bkname)||!strcmp("map of the human soul",bkname)||!strcmp("37",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t216 Pages\t\t\t\t4.61");
	p("\n||******************************************************************************************************||\n");
	p("\nMAP OF THE HUMAN SOUL\n\n");
	p("Don Quixote, Madame Bovary, Dimitri Karamazov, Anna Karenina, Thin Memed, Zebercet and others, most\nof which have influenced our lives, we see ourselves deeply in these immortal heroes of literature.\nIf you scrutinize the words that cover these characters of literature, humanity will emerge from gold;\ngreat humanity flowing from past to present, from present to future. Hero, low, aggressive, docile,\nattacking, wimp, honest, immoral, rich, poor, intelligent, stupid, mad, genius, woman, man, child, humanity\nin all its forms. The novelist is the person who is trying to explain, explain and make sense of this\nhuman condition, maybe himself ... To verify the truth, to make it more fun, to save the rude, to turn the\ntruth into a miracle, to discuss the truth, to understand the truth in an imaginary life is an\nadventurer. Maybe some kind of nutcase ... There is the cute one, the unlikely one ... There is also\nread with pleasure, there is also read the task ... Responsible, there is also the one who is drunk from\nhis own image ... But their temperament, style, purpose Whatever happens, they all have\none purpose: to create a life different from what is visible");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D7\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Puppet",bkname)||!strcmp("puppet",bkname)||!strcmp("38",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t512 Pages\t\t\t\t4.4");
	p("\n||******************************************************************************************************||\n");
	p("\nPUPPET\n\n");
	p("Life is about learning to lose ... Our losing adventure begins when we get out of the womb. We lose\nthe safest, softest shelter in the world, the mother's womb, which we ruled without any effort.\nThe world waiting for revenge from us, as if why you came out of there, the lights that\nburn our eyes, the noise of our ears scratching, heat, cold, hunger, dirt, disease attacks\non us. But we don't give up so easily. Instead of what we lost, we put something else on the fly.\nEven if we lose our paradise, our mother, the owner of that holy place, is with us, and a father\nis given to our command. When we get used to the outside world, we immediately forget the paradise\nwe lost. However, as we grow, the interest shown to us decreases day by day. Decreasing interest is a\nwarning that the world is not just us. But we ignore this warning. We make dreams, make up dreams, we\nreplace the lost with new ones by thinking of the world ourselves, we continue to\nfall into this beautiful lie.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D8\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("Fog and Night",bkname)||!strcmp("fog and night",bkname)||!strcmp("39",bkname)||!strcmp("FOG AND NIGHT",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t352 Pages\t\t\t\t4.72");
	p("\n||******************************************************************************************************||\n");
	p("\nFOG AND NIGHT\n\n");
	p("I turn my gaze to the mansion. This building, which will arouse fear and chill in the sight,\ngives me sadness. I feel that there is a bond between us that I have never seen before but I cannot\nresolve. I walk to the door of the building by pressing the rotten leaves in the garden. On the\nwinged iron door, the relief of the cracked marble forehead attracts my attention. My first choice\nin relief is a star. Just below the star, there's another barrel-like shape, and I'm not too late\nto realize it's a pistol. A half moon is carved under the pistol grip. At the top of the stars,\na pistol underneath and a half-moon just at the tip of the hilt. I remember this emblem\nsomewhere, but I can't take it off.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D9\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Patasana",bkname)||!strcmp("patasana",bkname)||!strcmp("40",bkname)||!strcmp("PATASANA",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Umit\t\t\t\t536 Pages\t\t\t\t4.93");
	p("\n||******************************************************************************************************||\n");
	p("\nPATASANA\n\n");
	p("I was a bastard living in an age of oppressors. A scoundrel that the gods make a coward. The most\npathetic of the bastards, the most disgusted. A sneaky palace writer who feeds your heart with\nflattery and hostility. A hypocritical man of ceremonies who runs to the king of the Hatti, hiding\nhis noble hatred of his body, the deep pain of his majestic garments behind a mask of happiness tougher\nthan bronze. The woman he loves is the most dishonorable man on earth who chooses to remain\nsilent by dying for his love and with his hands clasped to his chest. Shame on men. Rather than\nthe glory of dying for love, he is the most disgraceful of the wretched, who are not afraid to take\nrefuge in the majestic shadow of his worthless presence growing on the stone walls of the palace.\nAs I swim in the dead, I, the gods forehead, 'Forever will writhe in sorrow,' post Palace\nChief Patasana");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D10\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("The Old Man and The Sea",bkname)||!strcmp("the old man and the sea",bkname)||!strcmp("41",bkname)||!strcmp("THE OLD MAN AND THE SEA",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErnest Hemingway\t\t\t127 Pages\t\t\t\t4.94");
	p("\n||******************************************************************************************************||\n");
	p("\nTHE OLD MAN AND THE SEA\n\n");
	p("The Old Man and the Sea tells the story of a battle between an aging, experienced fisherman,\nSantiago, and a large marlin. The story opens with Santiago having gone 84 days without catching a\nfish, and now being seen as 'salao',[a] the worst form of unluckiness. He is so unlucky that his\nyoung apprentice, Manolin, has been forbidden by his parents to sail with him and has been told\ninstead to fish with successful fishermen. The boy visits Santiago's shack each night, hauling\nhis fishing gear, preparing food, talking about American baseball and his favorite player, Joe\nDiMaggio. Santiago tells Manolin that on the next day, he will venture far out into the Gulf Stream, north\nof Cuba in the Straits of Florida to fish, confident that his unlucky streak is near its end.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF E1\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	
	previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("All or Nothing",bkname)||!strcmp("all or nothing",bkname)||!strcmp("42",bkname)||!strcmp("ALL OR NOTHING",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErnest Hemingway\t\t\t244 Pages\t\t\t\t4.75");
	p("\n||******************************************************************************************************||\n");
	p("\nALL OR NOTHING\n\n");
	p("It's the sad story of an honest man, Harry Morgan, who has to smuggle between Cuba and West Island\nto keep his family economically alive. Life leads him to the world of wealthy and debauchery yachtsmen who\nflock to the region, causing him to play a role in an unusual affair. One of the best adventure books,\neither ever or ever, is one of the most realistic but still finely crafted examples of Hemingway's\nworks, adorned with impressive relationships.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF E2\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}	


	else if(!strcmp("A Farewell to Arms",bkname)||!strcmp("a farewell to arms",bkname)||!strcmp("43",bkname)||!strcmp("A FAREWELL TO ARMS",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErnest Hemingway\t\t\t355 Pages\t\t\t\t4.76");
	p("\n||******************************************************************************************************||\n");
	p("\nA FAREWELL TO ARMS\n\n");
	p("A Farewell to Arms is the unforgettable story of an American ambulance driver on the Italian\nfront and his passion for a beautiful English nurse. Set against the looming horrors of the battlefield - the\nweary, demoralized men marching in the rain during the German attack on Caporetto; the profound\nstruggle between loyalty and desertion—this gripping, semiautobiographical work captures the harsh realities\nof war and the pain of lovers caught in its inexorable sweep. Ernest Hemingway famously said that he\nrewrote his ending to A Farewell to Arms thirty-nine times to get the words right. ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF E3\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}



		
	


	


else if(a==0)
system("cls");
 


 
 else if(!strcmp("0",bkname)){
		a=0; lp=0;
		system("cls");
	}

}
	

else if(!strcmp("History",m)||!strcmp("2",m)){  
system("cls");
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
p("                                                         --HISTORY BOOKS--\n");
p("1)Kalbimin Can Mayasý\n2)Aþkýmýz Eski Bir Roman\n3)Türkiye'nin Yakýn Tarihi\n4)Nukut\n5)Bir Devlet Operasyonu: 19 Mayýs\n6)Hafýza\n7)Dünya Tarihi 101\n8)21 Lessons for the 21st Century\n9)Devlet-i Aliyye - Osmanlý Ýmparatorluðu Üzerine Araþtýrmalar 1\n10)Homo Deus: Yarýnýn Kýsa Bir Tarihi\n");	
p("11)Osmanlý Tarihinde Efsaneler ve Gerçekler\n12)Zeytindaðý\n13)Anadolu'nun Sýrlarý\n14)Einstein Seyahatnamesi: Uzakdoðu-Filistin-Ýspanya 1922-1923\n15)Türklerin Tarihi\n16)Türk Ülküsü\n17)Kök Tengri'nin Çocuklarý\n18)Baþlangýcýndan Günümüze Türkiye Cumhuriyeti Tarihi\n19)Tonyukuk\n20)21.Yüzyýl için 21 Ders\n");
p("21)Hannibal\n22)Bozkýrýn Kaðanlýklarý\n23)Tarihte Neler Oldu?\n24)Osmanlý Padiþahlarý\n25)Muhteþem Yavuz Sultan Selim Han\n26Dört Hükümdar\n27)Yüzyýllarýn Gerçeði ve Mirasý\n28)Eski Yakýndoðu’da Ulaþým Üzerine Yazýlar\n29)1923 Kuruluþ Ayarlarýna Dönmek\n30)Divan-ý Hümayun\n");	
p("31)Dünya Tarihi\n32)Anadolu'da Roma Eyaletleri\n33)Bir Solukta Evren ve Dünya Tarihi\n34)Ýstiklal Harbi'nde Etnik Ýhanet\n35)Fatih Sultan Mehmed Han\n36)Muhteþem Kanuni Sultan Süleyman\n37)Dedem Abdülhamid Han\n38)Osman Gazi\n39)Yýldýrým Beyazýt Erken Elveda Dedi\n40)4. Murad\n");	
p("If you don't Satisfya and also you want to return the Book's Page enter '0':\n");	


	g(bkname);

	 if(!strcmp("Kalbimin Can Mayasý",bkname)||!strcmp("kalbimin can mayasý",bkname)||!strcmp("1",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÝclal Aydýn\t\t\t440 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nKALBÝMÝN CAN MAYASI\n\n");
	p("\nWHEN HUMAN IS COVERED TO A STORY, A GLANCE HAS STARTED TO UNDERSTAND THEM.Im I knew that the emotions\nwe pursued without knowing why, the passions we pursued, the fears that were our prison, were left to\nus from the generation before us. Not to forget, to remember, to complement each other.\nIf the migration of thorn butterflies lasts for six generations\nand continues for generations, they can see this side of the mountain and the other side of the mountain,\n the other end of the sea, the end of a continent at the same time.which generation?\n\n");
	p("Two people stand on either side of a closed door. Rüçhan and Nesrin. Turkan and Mine. Eagle and Somer.\n So, what happens to the other closed doors if the next generation of Daphne and Somer's other daughter, Cherry, \nopens the door between them?How do stories change when yesterday, today, and tomorrow cross the path of a generation?\nPerhaps, as Cherry said to Defne, all the stories are kept in a mirror:En As I was growing up and \nbecoming a young girl, I realized that my mother is the other woman for you and your mother.We were both\n ends of the rejection of our mothers.We are a mirror where Rüçhan Haným looks sadly as she goes to death.\n One is the secret of the mirror, the other is the glass. ”The story of the three sisters Türkân, Dönüm and \nDerya continues from where they left off in Ayvalýk with their independent fiction and familiar characters.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A1\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}
	else if(!strcmp("Aþkýmýz Eski Bir Roman",bkname)||!strcmp("aþkýmýz eski bir roman",bkname)||!strcmp("2",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Ümit\t\t\t224 Pages\t\t\t\t3.0");
	p("\n||******************************************************************************************************||\n");
	p("\n\n Literature can be very dangerous sometimes. Anna Karenina, Madame Bovary, Esmeralda and \n many other female novelists ... A man who lost his ability to think correctly and then lost his \nlife while trying to reach these wonderful women.Even the murder of an overlocked girl nobody \n cares about contains important secrets. Even though the killer and the victim appear to be \n obvious, the truth may be hidden deeply. But no matter how much it is hidden, as long as there \n are conscientious policemen such as Baþkomser Nevzat, the darkness will be enlightened and \n justice will surely be fulfilled.Love is never innocent. A Russian scientist from the cold of St. \n Petersburg to the heat of Istanbul. It's a mysterious disappearance enough to bring the \n Intelligence services together. A desperate lover who finds himself on the brink of death in \nsearch of happiness ...The most enjoyable moments can turn into bloody truths…\n\n");
	p("	\nNot only from his mind and experience, but also from his wounded heart, Baþkomser Nevzat \n is separated from his peers, perhaps because of his similarity, and perhaps because of this, \n he is most loved, read and remembered. Our Love is an Old Novel, a brand new ring in his \n challenging adventure ... ... doesn't dare to do his job right, but at the same time he needs \n a big heart. But that heart is not made of steel. After a while, he booms like a grenade. Let's \n not get that heart timeless, Ali. There is no point in pleasing the oppressors.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A2\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Türkiye'nin Yakýn Tarihi",bkname)||!strcmp("türkiye'nin yakýn tarihi",bkname)||!strcmp("3",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÝlber Ortaylý\t\t\t\t256 Pages\t\t\t\t4.32");
	p("\n||******************************************************************************************************||\n");
	p("\nTÜRKÝYE'NÝN YAKIN TARÝHÝ\n\n");
	p("The Ottoman Empire vanished abruptly. The great empires leave behind three to five years, not one\nhundred years of pains. The Unionists were patriots, which was both their strength and a reason for their\nmistakes. ruling circles in Turkey and Atatürk's greatest claim to understand the excitement. The Turkish\nacademy world is still progressing lame. Turkish society has fought for existence against the giants of the\nglobe that has experienced the greatest revolution in the history of the earth. The events of September\n6-7, together with the Asset Tax, are two of the biggest problems in recent history. Even those responsible\nwere not able to dominate the flow of the compositions. Turkey constitutions refreshing neck. Organization\nand training of non-renewed policy");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A13\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Nutuk",bkname)||!strcmp("nutuk",bkname)||!strcmp("4",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Kamal Atatürk\t\t\t616 Pages\t\t\t\t4.9");
	p("\n||******************************************************************************************************||\n");
	p("\nNUTUK\n\n");
	p("O Turkish youth! Your first task is to protect and defend Turkish independence, the Turkish Republic\nforever. By force and deception, all the fortresses of the beloved homeland could be captured, entered into\nall shipyards, all their armies were dispensed, and every corner of the country could actually be\nseized. More painful and more terrible than all these conditions, those who have power within the country\ncan find indiscretion and deviance and even treachery. In fact, these rulers can combine their personal\ninterests with the political aspirations of the invaders. The nation may be tired and exhausted in poverty\nand distress. O Turkish son of the future! Even under these circumstances, your mission is to save the Turkish\nindependence and republic! The power you need is in the noble blood in your veins!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A14\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Bir Devlet Operasyonu: 19 Mayýs",bkname)||!strcmp("bir devlet operasyonu: 19 mayýs",bkname)||!strcmp("5",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMurat Bardakçý \t\t\t\t398 Pages\t\t\t\t4.75");
	p("\n||******************************************************************************************************||\n");
	p("\nBÝR DEVLET OPERASYONU: 19 MAYIS\n\n");
	p("79 passengers, one woman and three children, six horses and a car, the ferry departing from Galata Quay\nat 16.30 on 16 May 1919. It is the first step towards the emergence of a new state from the ashes of an empire\nthat was destroyed, destroyed and occupied by the World War. In this book, Murat Bardakci reveals some of\nthe details of Mustafa Kemal Pasha's departure to Samsun under the light of unpublished documents. He\nexplains that the highest level of the state, from the General Staff to the Sadaret and the Palace, was a\nstate operation that they prepared together to do something after the world war defeat.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A15\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Hafýza",bkname)||!strcmp("hafýza",bkname)||!strcmp("6",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tSinan Meydan \t\t\t\t498 Pages\t\t\t\t4.23");
	p("\n||******************************************************************************************************||\n");
	p("\nHAFIZA\n\n");
	p("People Forget History Reminds Today Those who want to make us forget Atatürk and ’tarihi recent\nhistory, want to erase’ our national memory ’which constitutes’ our nation consciousness ’. Lar They\nare trying to reform our haf political memory le le with a fictional history. I wrote this book to refresh\nour national memory by reminding us of our recent history. Don't let them erase and\nreformat your memory! Remember, remember!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A16\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Dünya Tarihi 101",bkname)||!strcmp("dünya tarihi 101",bkname)||!strcmp("7",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tTom Head\t\t\t\t248 Pages\t\t\t\t4.4");
	p("\n||******************************************************************************************************||\n");
	p("\nDÜNYA TARÝHÝ 101\n\n");
	p("History is a thousand-year adventure full of amazing events, powerful leaders, intrigues and\ninteresting discoveries. Nevertheless, history books are often far from being monotonous, boring and fun.\nWorld History 101 leaves all these boring details aside and takes you on a fascinating journey into the\nhistory of civilization. From Julius Caesar to Genghis Khan, from the Cold War to globalization, from\nthe beginning of slavery to empires of unimaginable size; Everything you wonder about the impact\nof dictators, religions and wars on modern civilizations is in World History 101!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A17\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("21 Lessons for the 21st Century",bkname)||!strcmp("21 lessons for the 21st century",bkname)||!strcmp("8",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tYuval Noah Harari \t\t\t336 Pages\t\t\t\t4.15");
	p("\n||******************************************************************************************************||\n");
	p("\n21 LESSONS FOR THE 21ST CENTURY\n\n");
	p("One of the most influential thinkers of the 21st century, Yuval Noah Harari, in his first book\nSapiens, talked about how human beings transformed from an insignificant animal to the master of the\nworld, and in his second book Homo Deus, he explored the journey of humanity in search of immortality,\nhappiness and divinity. The 21 Lessons for the 21st Century, on the other hand, raises critical questions to\ncope with unprecedented technological and economic breakdowns and uninterrupted changes in our century.\nIs God coming back? How will computers and robots change the meaning of being human? What can we do in\nthe face of a lie outbreak? How can we regain our freedom of choice while Big Data is constantly watching\nus? If we cannot understand the world, how can we distinguish between right and wrong, right and unjust?\nDoes Homo sapiens have the ability to make sense of the world he created? Is there a clear boundary\nthat separates reality from fiction? Can nationalism be a panacea for the problems of inequality and climate\nchange? What skills do we need in an age when old narratives collapse and no new ones come? While Harari\ndeals with these and other very basic questions (n) in 21 provocative and in-depth chapters, he clarifies\nthe political, technological, social and existential difficulties based on the ideas he\nhas put forward in his previous books.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A18\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Devlet-i Aliyye - Osmanlý Ýmparatorluðu Üzerine Araþtýrmalar 1",bkname)||!strcmp("devlet-i aliyye - osmanlý imparatorluðu üzerine araþtýrmalar 1",bkname)||!strcmp("9",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Halil Ýnalcýk   \t\t\t337 Pages\t\t\t\t4.87");
	p("\n||******************************************************************************************************||\n");
	p("\nDEVLET-Ý ALÝYYE OSMANLI ÝMPARATORLUÐU ÜZERÝNE ARAÞTIRMALAR 1\n\n");
	p("Devlet-i 'Aliyye is the product of Halil Ýnalcýk, one of the greatest names of Ottoman historiography\nin our age, for more than half a century. This first volume of the work, a principality of the Ottoman\nEmpire It focuses on becoming a powerful and deep-rooted empire that dominates the Middle East\nand the Balkans. Ýnalcýk does not consider the Ottoman Classical Period as political history.\nHe also analyzes the social-economic infrastructure of political history, namely population movements,\nmigration, basic needs of the masses, the ways in which agriculture and trade meet these needs, and\nurbanization. In explaining the historical problems, he attempts to determine the traditional mentality\nand institutions framework from the past.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A19\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Homo Deus: Yarýnýn Kýsa Bir Tarihi",bkname)||!strcmp("homo deus: yarýnýn kýsa bir tarihi",bkname)||!strcmp("10",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tYuval Noah Harari  \t\t\t456 Pages\t\t\t\t4.52");
	p("\n||******************************************************************************************************||\n");
	p("\nHOMO DEUS: YARININ KISA BÝR TARÝHÝ\n\n");
	p("In his book Sapiens From Animals to Gods, Harari describes how the human species dominated the world,\nand in Homo Deus, Harari discusses our future with striking predictions. In his study of humanity's\njourney of immortality, happiness and divinity in the light of science, history and philosophy, he\nconstructs a future in which man evolves into a completely different species, Homo deus. Is\nHomo sapiens, a trivial animal on the road, preparing his own end to reach the floor of the gods?\nHow did Homo sapiens believe in the humanist doctrine that claimed that the universe revolved around the\nhuman species? How does this doctrine shape our daily life, our art and our most secret passions? Are\nthere any signs of humanity other than high intelligence and power that separate man from cows,\nchickens, chimpanzees and all computer programs? Why have there not been a significant increase\nin our happiness even though we have achieved unprecedented gains throughout history? To understand all\nthis, all we have to do is look back and examine what Homo sapiens actually is, how humanism has\nbecome a dominant religion in the world, and why the dream of humanism will actually lead to the end\nof humanity itself. That is the basic issue of this book.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A20\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Osmanlý Tarihinde Efsaneler ve Gerçekler",bkname)||!strcmp("osmanlý tarihinde efsaneler ve gerçekler",bkname)||!strcmp("11",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHalil Ýnalcýk   \t\t\t272 Pages\t\t\t\t4.64");
	p("\n||******************************************************************************************************||\n");
	p("\nOSMANLI TARÝHÝNDE EFSANELER VE GERÇEKLER\n\n");
	p("When the sources of Ottoman history go down, it is possible to see many exaggerated events and\nlegendary figures. In this case, the readers are right to ask the following question: leyse How can we\nlearn our own history, even if the sources are like this? ”In order to answer this question, Halil Ýnalcýk,\nwho was pointed out by the whole world on the subject of Ottoman historiography, prepares a special\nfile for 18 subjects he has researched. Legends and Facts in Ottoman History. Halil Ýnalcýk's book begins\nwith the most important pages of the foundation period, such as the liaison with the Greeks during the\nTurkification of Anatolia, the Turkish commander Çaka Bey, who conquered Ýzmir and frightened Byzantium, and\nthe true story of Ertuðrul Gazi with the latest research. Ongoing pages of the book include some of the most\nsurprising and critical issues such as the path of power of Çelebi Mehmed, the critical three days of\nthe siege of Istanbul, the conquest of Istanbul.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B11\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}

	else if(!strcmp("Zeytindaðý",bkname)||!strcmp("zeytindaðý",bkname)||!strcmp("12",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tFalih Rýfký Atay\t\t\t176 Pages\t\t\t\t4.0");
	p("\n||******************************************************************************************************||\n");
	p("\nZEYTÝNDAÐI\n\n");
	p("Olive oil brings us a historical process that freezes human blood, “the collapse of an empire ile\nwith the purest Turkish language. In the book you will be amazed at how Mehmetçik was broken in Aden,\nthe Channel, Gaza, the Arabian Deserts, and how we left a wagon full of “mecidiye gold sonra after\nthe defeat. As Cemal Pasha's commanding officer, Falih Rýfký, who was the closest in those days,\nleft an example to our history with his book Zeytindaðý, each of which could be an epic, the diaries of\nthe soldiers and the stories of Ahmets and Mehmets lost at the gambling table will shudder. Our young\npeople must read the book called Zeytindaðý, which describes the last periods of the Ottoman Empire.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B12\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}

	else if(!strcmp("Anadolu'nun Sýrlarý",bkname)||!strcmp("anadolu'nun sýrlarý",bkname)||!strcmp("13",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tKerim Kuvetli\t\t\t240 Pages\t\t\t\t4.5");
	p("\n||******************************************************************************************************||\n");
	p("\nANADOLU'NUN SIRLARI\n\n");
	p("The first of many inventions, discoveries and innovations that have been inherited in the modern\nworld emerged in various civilizations established in Anatolia. This book has been written to ensure\nthat those who wish to explore the ancient history of Anatolia, full of secrets, can obtain satisfying and\nunderstandable information without being burdened with the chaos of knowledge. As you read, you will see\nthat the Anatolian lands we live on are the most ancient and richest places in the world, and you will realize\nhow little you know about these lands while you are acquiring hundreds of new information.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B13\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Einstein Seyahatnamesi: Uzakdoðu-Filistin-Ýspanya 1922-1923",bkname)||!strcmp("einstein seyahatnamesi: uzakdoðu-filistin-ispanya 1922-1923",bkname)||!strcmp("14",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAlbert Einstein \t\t\t352 Pages\t\t\t\t5.0");
	p("\n||******************************************************************************************************||\n");
	p("\nEÝNSTEÝN SEYAHATNAMESÝ: UZAKDOÐU-FÝLÝSTÝN-ÝSPANYA 1922-1923\n\n");
	p("This book contains all the notes that Albert Einstein made during his historical journey. It is\npossible to read Einstein's thoughts on science, philosophy, art and politics in the most sincere\nway, accompanied by his short notes and telegraph reminders. In addition, the opening lecture of the\nHebrew University in Jerusalem will be established, a garden party hosted by the Japanese Empress,\nmeeting with the King of Spain, and meeting with many prominent scientists and statesmen. topics.\nEinstein's controversial ideas about the concept of race and people of different nationalities are\nperhaps the most shocking part of the diary.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B14\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Türklerin Tarihi",bkname)||!strcmp("türklerin tarihi",bkname)||!strcmp("15",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÝlber Ortaylý   \t\t\t320 Pages\t\t\t\t3.74");
	p("\n||******************************************************************************************************||\n");
	p("\nTÜRKLERÝN TARÝHÝ\n\n");
	p("The history of the Turks begins with the discussion of the origin of the Turks, which is one of the\nstrongest civilizations of the Middle East when it was a nomadic tribe. Subsequently, the Central region\nmigrated to Asia from Anatolia Turkicize they and the principles of the culture they built there ... a great\nheritage, to a strong structure and a nation with a historical wealth, which comes from the Turkish names\nand since when this geography Turkey in the debate called all details Anadolu This is the story of Anatolia, which\nhas gained its present status with the important wars and withdrawals gained, and moreover the suffering losses.\nTurkey Malazgirt War of 400 years between Bosnia's conquest of the grounds of being a problem to be an\nimportant country and head for Europe ... Moreover, the Kipchak from Oguz, dating back to the Ottoman\nEmpire, which Seljuks and the great empire of Pecenek and not just the Turks; The history of the Russians,\nMamelukes, Karakoyunlu, Ghaznavids, Safavids, Chinese, Indians and Arabs.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B15\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}

	else if(!strcmp("Türk Ülküsü",bkname)||!strcmp("türk ülküsü",bkname)||!strcmp("16",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHüseyin Nihal Atsýz\t\t\t177 Pages\t\t\t\t4.50");
	p("\n||******************************************************************************************************||\n");
	p("\nTÜRK ÜLKÜSÜ\n\n");
	p("In the face of hostility and resentment within the West that cannot cope with the Turks even though\nit defeats all the Eastern nations, our weapon is the Turkish ideal. Asian lions plunging into Europe\nalone and defending the name of God against all European nations for centuries alone, sometimes fell into\nsleeplessness, but then jumped and shook. This time thoughtfulness seems a little dangerous. Because\nthere is also an element of admiration for the stranger. Wherever the dangers come from, no matter how big,\nthe only remedy and the only drug is the Turkish ideal.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B16\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}



	else if(!strcmp("Kök Tengri'nin Çocuklarý",bkname)||!strcmp("kök tengri'nin çocuklarý",bkname)||!strcmp("17",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Taþaðýl \t\t\t368 Pages\t\t\t\t4.0");
	p("\n||******************************************************************************************************||\n");
	p("\nKök Tengri'nin Çocuklarý\n\n");
	p("The Turks… captured, fought, made peace ýlar They spread to a vast region from Far Asia to the\nMediterranean. States formed, states destroyed. They didn't give it to China. They were known by many\ndifferent names and believed in different religions. They created a great civilization. They contributed\nto the rise of other civilizations. They all came together under the deep blue Sky");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B17\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("Baþlangýcýndan Günümüze Türkiye Cumhuriyeti Tarihi",bkname)||!strcmp("baþlangýcýndan günümüze türkiye cumhuriyeti tarihi",bkname)||!strcmp("18",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tTemuçin Faik Ertan\t\t\t304 Pages\t\t\t\t4.0");
	p("\n||******************************************************************************************************||\n");
	p("\nBaþlangýcýndan Günümüze Türkiye Cumhuriyeti Tarihi\n\n");
	p("Turkish modernization is a process that incorporates historical continuity and rupture and devotes\nitself to various periods. Held under the leadership of Ataturk founded Turkey as a result of the revolution\nin the development of the Republic of Turkey is a part of this modernization process.\nToday's process of establishment and development of the Republic of Turkey, in all higher education\ninstitutions Ataturk's Principles and Revolution History lessons are described under the name.\nAtatürk's Principles and History of Turkish Revolution is an area of Turkish History and has a\nmeaning beyond the course. Republic of Turkey, Ataturk's Principles and History of Turkish Revolution\nto know the citizens, it means learning an important part of its history.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B18\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);		
}
	else if(!strcmp("Tonyukuk",bkname)||!strcmp("tonyukuk",bkname)||!strcmp("19",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErhan Aydýn\t\t\t224 Pages\t\t\t\t5.0");
	p("\n||******************************************************************************************************||\n");
	p("\nTonyukuk\n\n");
	p("Of the Turkish runic letters in which the Turkish name is mentioned for the first time,\nTonyukuk is undoubtedly the most talked about. This inscription, which comes from the mind\nand language of Tonyukuk himself, is in a very important position not only because of\nthe historical events, but also because of his contributions to the Turkish language and culture.\nThe Tonyukuk inscription has generally been studied by language researchers since its inception.\nIn particular, history researchers have focused on who Tonyukuk is based on info");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B19\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}
	else if(!strcmp("21.Yüzyýl için 21 Ders",bkname)||!strcmp("21.yüzyýl için 21 ders",bkname)||!strcmp("20",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tYuval Noah Harari\t\t\t336- Pages\t\t\t\t3.5");
	p("\n||******************************************************************************************************||\n");
	p("\n21.Yüzyýl için 21 Ders\n\n");
	p("One of the most influential thinkers of the 21st century, Yuval Noah Harari, in his first book\nSapiens, talked about how human beings transformed from an insignificant animal to the master of the world,\nand in his second book Homo Deus, he explored the journey of humanity in search of immortality,\nhappiness and divinity. The 21 Lessons for the 21st Century, on the other hand, pose the critical\nquestions to deal with the unprecedented technological and economic breakdowns\nand uninterrupted changes of our century.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B20\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);		
}
	else if(!strcmp("Hannibal",bkname)||!strcmp("hannibal",bkname)||!strcmp("21",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPatrick N. Hunt\t\t\t400 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHANNÝBAL\n\n");
	p("Patrick Hunt, who teaches humanities, archeology, mythology and art at Stanford University, has\ncreated this work, pursued by the legend of Hannibal, which has been a place of imagination\nsince his youth, following his footsteps on three continents for many years. In the following\npages, accompanied by ancient sources and archaeological field research, Hannibal's variability\nin tactical responses to extraordinary challenges is revealed. This reveals why Hannibal was\na big mystery in the thousands of years and how the truth and the myth intermingled.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C11\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}

else if(!strcmp("Bozkýrýn Kaðanlýklarý",bkname)||!strcmp("bozkýrýn kaðanlýklarý",bkname)||!strcmp("22",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Taþaðýl\t\t\t  240 Pages\t\t\t\t4.48");
	p("\n||******************************************************************************************************||\n");
	p("\nBozkýrýn Kaðanlýklarý\n\n");
	p("The four great khanates, rising in the highlands of Mongolia and mainly in the Ötüken region in the east\nof Central Asia, have risen on the same model as the continuation of each other in the depths\nof the steppes. Hun and Gök Turkish state models and their applications are like the continuation\nof each other, as supported by Chinese sources. The differences between them continue to attract\nthe attention of both historians and history lovers. In short, anyone interested in the history\nof the wise, warrior, fearless, loyal and organizing Turks finds them in the adventurous\npages of the steppes. The Khanates of the Steppe: Huns, Tabgaçlar, Göktürk, Uighurs present the\nsteppe Turks with all mystery to their enthusiasts, and horseshoes are heard from the pages…");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C12\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}



	else if(!strcmp("Tarihte Neler Oldu?",bkname)||!strcmp("tarihte neler oldu?",bkname)||!strcmp("23",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tV. Gordon Childe\t\t\t410 Pages\t\t\t\t2.7");
	p("\n||******************************************************************************************************||\n");
	p("\nTarihte Neler Oldu?\n\n");
	p("Vere Gordon Childe (1892-1957) is an Australian-born British archaeologist. Archeology was initiated\nas a branch of the “national history” and “national museums inin of the nation-state period\nof the bourgeois administrations after the French Revolution. It was developed as an “objective\nbilimsel scientific research field in universities. Even a few centuries later, Childe called it a\n“postage stamp collector-like genel general culture. Childe was the founder of the “New Archeology”\nschool that saved archeology from this vicious understanding. Thus, by examining and interpreting the\nobjects left behind by the pre-written communities, the way of revealing their economic,\nsocial, political structures and even their ways of thinking was opened.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C23\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}


	else if(!strcmp("Osmanlý Padiþahlarý",bkname)||!strcmp("osmanlý padiþahlarý",bkname)||!strcmp("24",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tFaruk Çal\t\t\t     368 Pages\t\t\t\t4.82");
	p("\n||******************************************************************************************************||\n");
	p("\nOSMANLI PADÝÞAHLARI\n\n");
	p("The Ottoman Empire, one of the most established states in the world, has hosted 36 sultans since\nits establishment. There is no doubt that each of these sultans has its own policy and strategy.\nThis journey, which began with Osman Gazi, reveals the unforgettable history of a\nruling state for centuries. The Ottoman Sultans bring the wars, conquests, changing power\nand policies together with the readers.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C24\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}


	else if(!strcmp("Muhteþem Yavuz Sultan Selim Han",bkname)||!strcmp("muhteþem Yavuz sultan selim han",bkname)||!strcmp("25",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tYavuz Bahadýroðlu\t\t\t232 Pages\t\t\t\t4.92");
	p("\n||******************************************************************************************************||\n");
	p("\nMUHTEÞEM YAVUZ SULTAN SELÝM HAN\n\n");
	p("One era was closed in Ottoman history and a new one was opened. Yavuz Sultan Selim, who was hailed as\n“Cihangir Dünya in world history, was on the throne of his ancestors. Sultan Selim was dressed in a shirt\nof fire and prepared to burn while burning. His brother, Prince Ahmed, was in a rebellion.\nHe declared himself as “the Sultan of Anatolia“. For now, he was in the immediate danger\nand had to be eliminated immediately. There would not be two titles in state life. He instructed\nhis brother Korkud, a remarkable scholar, to return to the banner of Manisa and to engage\nin science and wisdom. Z If you do not lead to the misery of the property, do not pursue\nthe sovereignty case, you will live in peace in our reign, making sure of your life and\nthe life of your son. No, if you fall for the sovereignty of sovereignty, you will not be\nsaved. Even if our own son gave rise to the misery of the property, we would not have mercy!! ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C25\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}




else if(!strcmp("Dört Hükümdar",bkname)||!strcmp("dört hükümdar",bkname)||!strcmp("26",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJohn Julius Norwich \t\t\t240 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÖRT HÜKÜMDAR\n\n");
	p("In the days when feudal Europe became a community of national states, the Ottoman Empire became\nstronger in the East, and Spain and Portugal were enriched with discoveries. I. François ... The\nthrone took over the young, 1509-47 under the sovereignty of the establishment of the Anglican\nChurch and VIII known sensational marriages. Henry ... Karl V, who ruled the Holy Roman-Germanic\nEmpire between 1519-56 and left the throne voluntarily ... And Sultan Suleiman, who ruled Europe between\n1520 and 66, called “The Magnificent ... ... Wall Street John Julius Norwich, the most popular historian of\nthe Journal, draws a thorough portrait of the 16th century. The colorful, dynamic lives and intersecting\npaths of the four rulers come to life in Norwich's master pen. British historian John Julius was born in\nNorwich in 1929. She has contributed to many magazines and encyclopedias, whose cities, Shaping the\nAncient World and three-volume Byzantine, have also been translated into Turkish.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C16\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}
	else if(!strcmp("Yüzyýllarýn Gerçeði ve Mirasý ",bkname)||!strcmp("yüzyýllarýn gerçeði ve mirasý ",bkname)||!strcmp("27",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tServer Tanilli\t\t\t528 Pages\t\t\t\t4.1-");
	p("\n||******************************************************************************************************||\n");
	p("\nYÜZYILLARIN GERÇEÐÝ VE MÝRASI\n\n");
	
	p("\n\nCentury of Enlightenment: 18th century that comes to mind; When he says “Enlightenment, \nthe dominance of science and reason comes first. However, the 18th century is European with these \nqualities. Indeed, scientific development in Europe has gained enormous dimensions in this century; \nThe industrial revolution gives the tip and the modern technical era begins. It is in this century and in Europe \nthat thought is relentlessly directed and attacked by weapons against the old order, that is, \nfeudalism and its values, especially religion, based on reason and science. England and France \nare the ones who have taken Enlightenment Europe behind. Maybe it's the East alone. Neither \na scientific awakening nor the sovereignty of reason: the 18th century is a century lost in the East; \nthe East will suffer in later centuries. But because Europe created and lived the 18. Enlightenment \n18. of the 18th century, it would determine the developments in other continents of the world.\nIn this respect, knowing 18th-century Europe gives us the keys to further developments; such a decisive\n century. As the people of a living society, even if the Enlightenment movement was delayed,\nthat century must have been instructive for us in the first place.\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C17\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}
	else if(!strcmp("Eski Yakýndoðu’da Ulaþým Üzerine Yazýlar",bkname)||!strcmp("eski yakýndoðu’da ulaþým üzerine yazýlar",bkname)||!strcmp("28",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tBilcan Gökce,  Pýnar Pýnarcýk \t\t\t446 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nESKÝ YAKINDOÐU'DA ULAÞIM ÜZERÝNE YAZILAR\n\n");
	p("Since the earliest periods of history, archaeological remains, written texts and visual data are available.\nIn our study titled on Articles on Transportation in Ancient Near East “, especially in \nthe light of archaeological data on the civilizations that we know exist in the geography, \nwe have specialized in the fields such as road routes, accommodation on bridges,\nvehicles used in sea / land transportation and animals. has been handled scientifically by \nour authors. Thus, the deficiency in this field was tried to be eliminated.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C18\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}
	else if(!strcmp("1923 Kuruluþ Ayarlarýna Dönmek",bkname)||!strcmp("1923 kuruluþ ayarlarýna dönmek",bkname)||!strcmp("29",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tSinan Meydan\t\t\t576 Pages\t\t\t\t4.5-");
	p("\n||******************************************************************************************************||\n");
	p("\n1923 KURULUÞ AYARINA DÖNMEK\n\n");
	p("Unfortunately, after the death of Atatürk, these four basic founding settings began to deteriorate \nand the deterioration continued for 65-70 years. The deterioration has been completed in the last 15 years.\nMuch more importantly, the counter-revolution today is to make your own organization \nsettings to convert the Republic of Turkey to a completely different structure.\nJust not enough to see the horizon, you'll see the beyond the horizon, said Ataturk, \nsee beyond the horizon, the future one day return to the organization settings \nmay be needed She had thought. Republic of Turkey in the future, when, how and if \nthey will return to the setting organizations who, in 1927, he said at the end of the Oration \naddress to the youth had brought clearly spelled out. In this sense, H Address to Youth\n”is the password to return to the organization settings.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C19\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Divan-ý Hümayun",bkname)||!strcmp("divan-ý hümayun",bkname)||!strcmp("30",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Mumcu \t\t\t208 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÝVAN-I HÜMAYUN\n\n");
	p("Divan-ý Hümayun, who was born shortly after the establishment of the Ottoman Empire, left its mark \non the administration of the Ottoman Empire from the mid-15th century to the first half of the 17th century,\nand became a symbol towards the end of the century. In Divan-ý Hümayun, which is different from the similar \ninstitutions that existed in Islamic states before the Ottomans and contemporary of the Ottomans,\nthe fact that all political, judicial and administrative works could be seen, the certainty of\nthe centrist character of the Ottoman State and the practical work of the statesmen, the development of\nthe feelings of reaching the quick and correct decision. shows. The Sultan's Divan has become the most\nrespected organ of the state with its superior powers and way of working. Working in the Divan has been a symbol\nof honor. Although the Divan-ý Hümayun was the sultan's divan, the opinion that the people working here were\nin the service of the Divan,\nnot the sultan, was settled and even the kadis could be tried here. But\nas the personality of the sultans weakened, the viziers increased their power and the Divan-i Humayun\nlost its effectiveness. In addition, hasty provisions during the execution of judicial decisions were\nsometimes contrary to the sense of justice and caused great injustices. On the other hand, the viziers who\nlacked common sense according to their power, established great authority in the Divan and made decisions that\ndisrupt the state order and sometimes caused revolts with these decisions");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C20\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}

	else if(!strcmp("Dünya Tarihi",bkname)||!strcmp("dünya tarihi",bkname)||!strcmp("31",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tBaker Keenan \t\t\t472 Pages\t\t\t\t3.-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÜNA TARÝHÝ\n\n");
	p("World History an, which provides a narrative summary of the history of humanity, depicts the events\nthat shape the world from the formation of settled civilized societies to the world wars, from the disappearance\nof European monarchies to the rise of Islam. the important milestones in the history of Turkey in\nthe work place that, thousands of years of history, not bold to read in one breath, interconnectedness\nof historical events and the reasons are easily understood.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D1\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
	else if(!strcmp("Anadolu'da Roma Eyaletleri",bkname)||!strcmp("Anadolu'da Roma Eyaletleri",bkname)||!strcmp("32",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tKevser Taþdöner \t\t\t216Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nANADOLU'DA ROMA EYALETLERÝ\n\n");
	p("This study is important in that there is no monographic study on the history of Anatolia during the\nAugustus period in Turkish or foreign languages and that this period is a period of transformation\nof Rome in political, social and economic fields in general.For this reason, our book Roman States -\nAugustus Period is the first book written in Turkish. Finally, this book is a useful resource\nfor those who do academic studies about Ancient History, Ancient Roman History and Ancient History of Anatolia,\nundergraduate and graduate students at universities and field enthusiasts.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D3\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);		
}
	else if(!strcmp("Bir Solukta Evren ve Dünya Tarihi",bkname)||!strcmp("bir solukta evren ve dünya tarihi",bkname)||!strcmp("33",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tIan Crofton,  Jeremy Black  \t\t\t272 Pages\t\t\t\t4.2-");
	p("\n||******************************************************************************************************||\n");
	p("\nBÝR SOLUKTA  EVREN VE DÜNYA TARÝHÝ\n\n");
	p("As science develops at a dizzying pace, it is clear that world history is closely related to the evolution\nof living things and that evolution of living things is very closely related to the formation of\nthe universe. In order to understand the birth and development of man and civilization, it is necessary to\nunderstand how the universe came into being, how stars and planets were formed, and why the Earth\nhad conditions conducive to the emergence of life. You will read the Universe and World History in a Breath\nunder the following headings: • The formation of the universe and the Earth • The emergence\nof living things • The domination of human beings • The birth of civilization\n• The rise of the West • The formation of the modern world");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D13\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
	
		
}
	else if(!strcmp("Ýstiklal Harbi'nde Etnik Ýhanet",bkname)||!strcmp("istiklal harbi'nde etnik ihanet",bkname)||!strcmp("34",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tNecdet Sevinç \t\t\t512 Pages\t\t\t\t5.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nÝSTÝKLAL HARBÝNDE ETNÝK ÝHANET\n\n");
	p("Which Pasha Esat Toptan and Ýsmail Kemal offered the Albanian principality? .. Rauf Orbay's secret meeting\nwith Admiral Calthorpe in Agamemnon. Admiral Calthorpe responded to the request of the Circassian\nstate under British auspices of Orbay? .. Turkish enemy Greek priests in the War of Independence.\nThe fate of Ferit, who broke the Turks against the Turks ... How did Said-i Nursi reject the offer to \nestablish Kurdistan Byzantine Emperor Constantine, May 29, 1453 although he had no chance, he died\nfighting us. What did our sultan do after centuries? .. Zat-ý Þahane'nin salary tied British supporter\nassociations ... May 15, You can save the country, said Sultan Vahidettin, 8 June, Mustafa Kemal, how was taken\nfrom behind? Kurdish Lavrens Captain Noel ... Citing the Iskilipli cited why? Turkish children\nkidnapped by Armenian mobs ... Nazým Hikmet's mother and grandfather supported the British\nin the War of Independence? ... Communists who preferred Yeþilordu to Mustafa Kemal ...\nAziz Mahmud Hüdayi congregation was executed to serve foreigners. What happened when the full staff\nattended the funeral of Mehmet Kemal Bey, the Governor of Martyr Bogazliyan? ... The services of the famous server\nOrhan Boran's father, Tibetan Wisdom ... The rebellion of the Kurds under the British administration ... ...\nWe gave the War of Independence together with the Kurds? .. Why not a single non-Muslim in the list of 150?\nwhat's onthe gambling table and the loser; mentally unstable; convert those who swing from there to say,\nI have no face to return to the country...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D14\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);

     }



	else if(!strcmp("Fatih Sultan Mehmed Han",bkname)||!strcmp("fatih sultan mehmed han",bkname)||!strcmp("35",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tKolektif     \t\t\t570 Pages\t\t\t\t4.98");
	p("\n||******************************************************************************************************||\n");
	p("\nFATÝH SULTAN MEHMED HAN\n\n");
	p("In August 1444, at the age of 12, he ascended the throne, and during his reign of 32 years between\n1444-1446 and 1451-1481, many conquests, especially Istanbul (Amasra, Serbia, Trabzon, Sinop,\nKastamonu, Peloponnese, Mytilene, Bosnia, Euboea, Otranto), as well as Wallachia, Boðdan\nand Crimea was subject to. The administrative and military organizations and institutions\nof the Ottoman Empire were also established in its time and continued to evolve for centuries.\nThis sovereign, who ran from conquest to conquest during his reign, went on a new expedition\nalthough he was ill, but his illness increased when he was close to Gebze and he\npassed away on May 3, 1481.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D15\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}


	else if(!strcmp("Muhteþem Kanuni Sultan Süleyman",bkname)||!strcmp("muhteþem kanuni sultan süleyman",bkname)||!strcmp("36",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tYavuz Bahadýroðlu\t\t\t304 Pages\t\t\t\t4.72");
	p("\n||******************************************************************************************************||\n");
	p("\nMUHTEÞEM KANUNÝ SULTAN SÜLEYMAN\n\n");
	p("Kanuni saw Efendimiz (s.a.v) in his dream and said to him: in Let Belgrade, Rhodes and Baghdad\nconquer the city, then let me reconstruct my city! He even asks his personal wealth to establish\na foundation to bring water for pilgrims. His daughter, Mihrimah Sultan, also fulfills this will\nof his father and sends Arafat's Ayn-ý Zübeyde Suyu to Mecca.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D16\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}


	else if(!strcmp("Dedem Abdülhamid Han",bkname)||!strcmp("dedem abdülhamid han",bkname)||!strcmp("37",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAbdülhamid Kayýhan Osmanoðlu\t\t\t232 Pages\t\t\t\t5.0");
	p("\n||******************************************************************************************************||\n");
	p("\nDEDEM ABDULHAMÝD HAN\n\n");
	p("Our Lord Nebiler servant Hz. Muhammad Mustafa (s.a.v) 's compliments of the Ottoman descendants of\nthe Ottoman descendants of the late Caliph-i Muslim Sultan Abdulhamid Han so far, many people\nhave told their point of view. I am honored to be descendants and grandsons, and bear the\nburden of a great responsibility in carrying my name to my dear readers as much as our\nLord, I will try to tell my grandfather Cennetmekân Sultan Abdülhamid Han. They say look\nat their enemies to understand the greatness of a person. It is surprising that the mentality\nof Sultan Abdülhamid Han during the reign of those who were hostile to him as well as\nthose who insisted on hostility to him despite all this time.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D17\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}


	else if(!strcmp("Osman Gazi",bkname)||!strcmp("osman gazi",bkname)||!strcmp("38",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tKolektif\t\t\t64 Pages\t\t\t\t4.77");
	p("\n||******************************************************************************************************||\n");
	p("\nOSMAN GAZÝ\n\n");
	p("Osman Gazi… The founder and legend of the Turkish Empire that ruled the world m The fact that the\nname is mentioned together with the newly growing state makes him an important role model.\nWhen we speak to the past from the present age, the silhouette of Osman I always appears\nbefore us. His dream changed real politics in the last half century. He guided his followers and\nreminded of the Turkish ‘red apple yeniden again. Osman Bey is an immortal hero for an empire\nthat spans three continents. His humble life, ideal, is a legacy on which long sentences\nwill be established.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D18\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);	
}

	else if(!strcmp("Yýldýrým Beyazýt Erken Elveda Dedi",bkname)||!strcmp("yýldýrým beyazýt erken elveda dedi",bkname)||!strcmp("39",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHalil Ýbrahim Özcan\t\t\t80 Pages\t\t\t\t4.05");
	p("\n||******************************************************************************************************||\n");
	p("\nYILDIRIM BEYAZIT ERKEN ELVEDA DEDÝ\n\n");
	p("At the beginning of the 21st century, the change in the cultural heritage, traditional way of life\nand production relations of the rapidly transforming cities attracts the attention of\nresearchers and writers. Historians, architects, geographers, economists, sociologists,\nwriters, lawyers, tourism professionals and many other researchers and writers try\nto understand and explain the changes in cities from different perspectives.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D19\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}



else if(a==0)
system("cls");
 


 
 else if(!strcmp("0",bkname)){
		lp=0;
		system("cls");
	}


}


else if(!strcmp("Philosophy",m)||!strcmp("3",m)){	
system("cls");
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
p("                                                       --PHILOSOPHY BOOKS--\n");
p("1)Sokrates'in Savunmasý\n2)Tanrýlar Okulu\n3)Devlet - Hasan Ali Yücel Klasikleri\n4)Kendisinin Efendisi Olmayan Hiç Kimse Özgür Deðildir\n5)Böyle Söyledi Zerdüþt - Hasan Ali Yücel Klasikleri\n6)Deliliðe Övgü\n7)Mutlu Olma Sanatý\n8)Denemeler - Hasan Ali Yücel Klasikleri\n9)Felsefenin Kýsa Tarihi\n10)Utopia\n");
p("11)Zincire Vurulmuþ Prometheus - Hasan Ali Yücel Klasikleri\n12)Poetika\n13)Yürümenin Felsefesi\n14)Ýdeal Devlet\n15)Yaratma Cesareti\n16)Yaþam Bilgeliði Üzerine Aforizmalar - Hasan Ali Yücel Klasikleri\n17)Toplum Sözleþmesi - Hasan Ali Yücel Klasikleri\n18)Toplum Sözleþmesi - Hasan Ali Yücel Klasikleri\n19)The Meaning of Life\n20)Felsefe 101\n");
p("21)Tao Te Ching\n22)Ben\n23Politika\\n24)Antikçað Felsefesi\n25)Tanrý Var mýdýr?\n26)Ölümün Anlamý\n27)Einstein-Aforizmalar\n28)Eðitim Felsefesi\n29)Dönüþüm Sembolleri\n30)Akýlcýlýk\n");
p("31)Varoluþçuluk\n32)Kendini Bilmek\n33)Toplum Sözleþmesi\n34)Varlýk ve Zaman\n35)Aforizmalar\n36)Burukluk\n37)Hayatýn Anlamý\n38)Ermiþ\n39)Þiddet\n40)Mantýk\n");
p("If you don't Satisfya and also you want to return the Book's Page enter '0':\n");	
g(bkname);
if(!strcmp("Sokrates'in Savunmasý ",bkname)||!strcmp("sokrates'in savunmasý ",bkname)||!strcmp("1",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPlato\t\t\t220 Pages\t\t\t\t3.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nSOKRATESÝN SAVUNMASI\n\n");
	p("Plato (ca. 428 BC to ca. 348 BC): He is one of the best masters who transferred philosophy to writing\n through the dialogues in which he talked about the founder and teacher of Akademia, the ancestor of today's \nuniversity. This book contains four complementary dialogues. The first dialogue, Euthyphron, tells the story\nof his trial and tells us about the beliefs of Socrates, who are accused of atheism. In the defense of Socrates, \nthe judicial process is explained. In Kriton, after the judgment, the principles that a citizen should \nrespect are discussed. Phaidon, one of Plato's most poetic works, reflects the thoughts\n of the soul on the last day of Socrates.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A21\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Tanrýlar Okulu",bkname)||!strcmp("tanrýlar okulu",bkname)||!strcmp("2",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tStefano D'Anna\t\t\t474 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nTANRILAR OKULU\n\n");
	p("Life; just like he did to me, when you squeeze until you stop breathing in a vise, disappointing you \nthat you can't get out of it, and you can't find any way out ... that's when that Book will come to \nyou and find you. So you will know that for your Individual Revolution, you are ready for the greatest \nadventure a man can imagine: to rejoin your paradise where you have lost the path of wholeness.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A22\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);

}
else if(!strcmp("Devlet - Hasan Ali Yücel Klasikleri",bkname)||!strcmp("devlet - hasan ali yücel klasikleri",bkname)||!strcmp("3",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPlaton\t\t\t245 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nDEVLET - HASAN ALÝ YÜCEL KLASÝKLERÝ\n\n");
	p("Plato (Plato, ca. 428/7-ca. 348/7): The founder of Akademia (387 BC), the founder of the ancestor of \ntoday's university (387 BC), is one of the masters who best conveyed the philosophy to the \nwriting with the dialogues in which he talked Socrates. In the State (Politeia), the most well-known of their \ndialogue with Apologia, Plato explained that it was the best state he imagined by examining human situation \nsuch as goodness, equality, strength and righteousness. the basic work, whether it is in or \nagainst it, has been among the reference sources of all state theories or social orders \nthat have been put forward for more than 2000 years.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A23\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Kendisinin Efendisi Olmayan Hiç Kimse Özgür Deðildir",bkname)||!strcmp("kendisinin efendisi olmayan hiç kimse özgür deðildir",bkname)||!strcmp("4",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tEpiktetos\t\t\t88 Pages\t\t\t\t4.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nKENDÝSÝNÝN EFENDÝSÝ OLMAYAN HÝÇ KÝMSE ÖZGÜR DEÐÝLDÝR\n\n");
	p("The person who enjoys the sun, the moon, the stars, the earth and the sea is neither lonely nor helpless.\nEp His simple but deep-rooted philosophy, which he built on, continues to shed light on the search for \nmeaning of modern people two thousand years ago.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A24\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
	
	
	
	
}
else if(!strcmp("Böyle Söyledi Zerdüþt - Hasan Ali Yücel Klasikleri",bkname)||!strcmp("böyle söyledi zerdüþt - hasan ali yücel klasikleri",bkname)||!strcmp("5",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tFriedrich Nietzsche\t\t\t335 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nBÖYLE BUYURDU ZERDÜÞT - HASAN ALÝ YÜCEL KLASÝKLERÝ\n\n");
	p("Friedrich Wilhelm Nietzsche (1844-1900): He is one of the most influential contemporary philosophers \nwho criticizes traditional religious, moral and philosophical understandings with his own intense and striking \nlanguage. Nietzsche began studying theology at the University of Bonn and later turned to philology. He \ncontinued his education at the University of Leipzig and was a candidate for the professor of philology at \nthe University of Basel while still a student. In 1869, Nietzsche became a doctor, based solely on \nhis writings, without any examination or thesis requirements, and went away from classical philology studies \nand began to deal with philosophy. The Birth of Tragedy, Unconventional Perspectives, Humanely \nVery Human, Tan Redness, Merry Science, Said Such Zoroaster, Beyond Good and Evil, The Genealogy of \nMorality, Ecce Homo, Wagner Incident, Dionysos Dithyrambos, Twilight of Doves, \nAntichrist Wagner among his works.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A25\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Deliliðe Övgü",bkname)||!strcmp("deliliðe övgü",bkname)||!strcmp("6",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErasmus\t\t\t152 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nDELÝLÝÐE ÖVGÜ\n\n");
	p("Desiderius Erasmus (1469-1536): Erasmus, the first editor of the New Testament, one of the \nleading theology literature and one of the most important humanists of the Northern European Renaissance, \nlaid the foundation of historical-critical past research using philological methods. His writings in the \nfield of education contributed to a classical humanistic approach to classics rather than the old \nreligious curriculum. He criticized the abuse of church power and encouraged rising reform demands. \nThis attitude was found both in the Protestant and Catholic Counter-Reforms. It became the target of \nboth sides because of Luther's independent stance that rejected the doctrine and the powers that the papacy \nclaimed to have. He praised the intellectuals of the period with the Praise of Madness, which he \ndesigned on his way to England and wrote at Thomas More's house, and he used to mock teachers, pastors, \ntheologians, philosophers, merchants, lawyers, rulers, saints and anyone who considered himself clever.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A26\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Mutlu Olma Sanatý",bkname)||!strcmp("mutlu olma sanatý",bkname)||!strcmp("7",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tBertrand Russell\t\t\t192 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nMUTLU OLMA SANATI\n\n");
	p("");
	p("\nMutlu Olma Sanatý Bertrand Russell'ýn iyi bir yaþam sürmek isteyenlere sunduðu bir reçetedir. \nKiþisel Geliþim kitaplarýnýn vermeyi vaat ettiði ama veremediði mutluluk sýrlarýný açýklar. \nRussell'a göre mutluluk birtakým insanlarýn bizim elimizden alabileceði temel insan haklarýndan \nbiri deðildir. Kiþi mutluluða baþkalarýný suçlayarak deðil, belirlediði hedeflere eriþmek \niçin mücadele ederek ve bu mücadele sýrasýnda eðlenerek ulaþýr. Üstelik kiþi bu \nmücadeleyi iç dünyasýna deðil, sosyal yaþamýna dönerek vermelidir.Deyim yerindeyse, \nMutlu Olma Sanatý, kiþisel geliþim vaat eden bir popüler felsefe kitabýdýr.\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A27\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Denemeler - Hasan Ali Yücel Klasikleri",bkname)||!strcmp("denemeler - hasan ali yücel klasikleri",bkname)||!strcmp("8",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMichel de Montaigne\t\t\t272 Pages\t\t\t\t3.7-");
	p("\n||******************************************************************************************************||\n");
	p("\nDENEMELER - HASAN ALÝ YÜCEL KLASÝKLERÝ\n\n");
	p("Michel de Montaigne (1533-1592): Know yourself and What do I know? This creative process, which began \nwith the withdrawal of his books with his books to the tower of his farm in 1571, pushed Montaigne to \ntake notes about what he had read before. In this book, the Eyüboðlu translations followed a similar \npath with the work by bringing new pieces in front of the reader each \ntime, from the first edition of 1940 to the 1970s.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A28\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Felsefenin Kýsa Tarihi",bkname)||!strcmp("felsefenin kýsa tarihi",bkname)||!strcmp("9",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tNigel Warburton\t\t\t360Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nFELSEFENÝN KISA TARÝHÝ\n\n");
	p("Philosophy begins with questions of the nature of reality and how we should live. \nThe Brief History of Philosophy focuses on the main themes of philosophy, such as appearance and truth, \nthe nature of the self, the existence of God, and how we should live as individuals and as \nmembers of society. He outlines the 2000-year-old Western philosophy from Socrates to the animal \nrights movement. Warburton makes the philosophy that many of us find intimidating and incomprehensible, \na topic that everyone can understand and use in everyday life. A perfect introduction to the great \nphilosophers of Western philosophy in chronological order. A perfect starting point for those \ninterested in the history of thought.-Publishers Weekly-");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A29\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Utopia",bkname)||!strcmp("utopia",bkname)||!strcmp("10",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tThomas More\t\t\t224 Pages\t\t\t\t3.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nUTOPÝA\n\n");
	p("Henry, the undefeated King of England, known for his rare superior intelligence, and the esteemed \nCastilian prince, were severely disrupted a few years ago. At that time I went to the Netherlands \nas a spokesperson to discuss and correct this work. I was with me, Cuthbert Tunstall, a unique person \nas a business and companion. At that time, the king gave him the archbishop of Canterbury, \nin public applause ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A30\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Zincire Vurulmuþ Prometheus - Hasan Ali Yücel Klasikleri",bkname)||!strcmp("zincire vurulmuþ prometheus - hasan ali yücel klasikleri",bkname)||!strcmp("11",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAiskhylos\t\t\t75 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nZÝNCÝRE VURULMUÞ PROMETHEUS - HASAN ALÝ YÜCEL KLASÝKLERÝ\n\n");
	p("Aiskhylos (525? -456 BC): One of the most important tragedy writers of ancient Greece. He has covered \nalmost all mythological subjects in his works. Of the 90 tragedies he wrote, only 7 survive. In particular, \nAiskhylos emphasized the necessity of justice and placed the issue of rights at the center of gravity in \nmost of his works. Prometheus also struck the chain and discussed the disagreement between \nthe gods of different generations. Titan Prometheus, the protagonist of Tragedy, rebelled against the gods, stole \nthe fire from the gods and gave it to the people, and was chained for opposing the order the gods \nhad established. In this tragedy, Aiskhylos emphasized the superiority of reason power over \nbrute force and the importance that should be given to reason and free thought.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B21\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Poetika",bkname)||!strcmp("poetika",bkname)||!strcmp("12",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAristoteles\t\t\t132 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nPOETÝKA\n\n");
	p("Aristotle (384-322 BC): A student of Aristotle Plato, one of the important names of ancient \nGreek philosophy, the teacher of Tirana Hermias and Alexander the Great, the founder of Lykeion \nschool. In the Middle Ages, Jewish and Muslim thinkers influenced Christian theology, especially \nscholastic thought, and its influence spread to the Enlightenment, the Renaissance and the Reform. \nHe is the founder of classical logic. Biology, botany, zoology, chemistry, ethics, logic, metaphysics, \nrhetoric, philosophy of science, physics, art of poetry, political theory, psychology and \ntheir writings that have survived to the present day are considered as founding \ntexts in all mentioned fields.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B22\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Yürümenin Felsefesi",bkname)||!strcmp("yürümenin felsefesi",bkname)||!strcmp("13",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tFrederic Gros\t253\t\t Pages\t\t\t\t2.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nYÜRÜMENÝN FELSEFESÝ\n\n");
	p("Nietzsche's tears of happiness filled the eye sockets as he walked through the Black Forest, \nthe dream that Rimbaud had created with his wooden foot, the forbidden Rousseau's steps in the Alps, \nThoreau's Walden walk, and Nerval's narrow streets. walkers, nomads, exiles, pilgrims, \nfugitives, travelers, hermiters and refugees are marching. Is walking not just a commute between \nhome and work, catching up and running around, but meeting the universe in a special rhythm, \ntuning or lightening? Can we walk away from the earth and open ourselves to metamorphosis?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B23\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Ýdeal Devlet",bkname)||!strcmp("ideal devlet",bkname)||!strcmp("14",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tFarabi\t\t\t192 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nÝDEAL DEVLET\n\n");
	p("Farabi (870-950): Turkish-Islamic philosopher, astronomer, musician. He is one of the most important \nfigures in the Golden Age of Islam. Farabi completed his higher education in Baghdad and took \nlessons from famous scholars of the time. He studied the works of Aristotle and Plato, attempting to reconcile \nthe philosophers of these two philosophers with Islam, thereby giving the Islamic religion a philosophical character. \nHe started philosophy with logic and focused on metaphysics; gave works in the branches of philosophy dealing with language, \npolitics, nature, mind; He developed musical instruments and wrote on music and psychology. It helped to develop \nand preserve Islamic philosophy, influencing the Western medieval thought, which had to make \nuse of Arabic translations of ancient Greek-Latin works and called itself Alpharabius. Ideal State is \nthe last of 103 known works and it reflects Farabî's philosophy from all angles. In this work, \nthe qualities of the First Existence, how the other beings came into being, the degrees of the beings, \nits equivalent in organs, the qualities of the person who will run the city / society as a body, \nthe types of the city / society, the strengths and weaknesses of each.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B24\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Yaratma Cesareti",bkname)||!strcmp("yaratma cesareti",bkname)||!strcmp("15",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRollo May\t\t\t152 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nYARATMA CESARETÝ\n\n");
	p("The courage to create is one of the most important works of Rollo May, a leading figure in American \npsychology and existential psychotherapy. Because of her close relationship with psychology, \npsychotherapy, philosophy and art, May explores creativity from an interesting perspective. \nLike all existentialists, he places great emphasis on the phenomenon of anxiety, emphasizing that change \nwill take place at a level of creativity that can be embedded in anxiety. May, who celebrates all the \nnegativity of transitional psychology on behalf of the necessity of creativity, argues \nthat in a world where the yeni new gushes everywhere, one should rely on unknown sources. For this, it \nmakes a significant contribution to the creation of a new form of courage in the individual. We believe that this book \nwill provide intellectual support to one's own resources and to establish a new life without \nthe collapse of today's moral disintegration.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B25\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Yaþam Bilgeliði Üzerine Aforizmalar - Hasan Ali Yücel Klasikleri",bkname)||!strcmp("yaþam bilgeliði üzerine aforizmalar - hasan ali yücel klasikleri",bkname)||!strcmp("16",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tArthur Schopenhauer\t\t\t222 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nYAÞAM BÝLGELÝÐÝ ÜZERÝNE AFORÝZMALAR - HASAN ALÝ YÜCEL KLASÝKLERÝ\n\n");
	p("Arthur Schopenhauer (1788-1860): He is one of the philosophers of the history of philosophy,\nwhich is as open to the East as the West, and which writes in the best and most realistic way about \nthe fundamental questions (n) of life. This work of the thirty-year-old philosopher, who introduced \nthe philosophy system and regarded as his masterpiece, World as Will and Design (1818), \nwas greeted with dark silence; In 1851, when he was sixty-three years old, he published the essays \nand aphorisms of Parerga and Paralipomena (by-products and the sum of Parerga and Paralipomena \n(by-products and the rest). He is one of the most productive German translators of his generation, and \nhas started with Thomas Bernhard's autobiographical quintet.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B26\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Toplum Sözleþmesi - Hasan Ali Yücel Klasikleri",bkname)||!strcmp("toplum sözleþmesi - hasan ali yücel klasikleri",bkname)||!strcmp("17",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJean-Jacques Rousseau\t\t\t144 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nTOPLUM SÖZLEÞMESÝ - HASAN ALÝ YÜCEL KLASÝKLERÝ\n\n");
	p("Jean-Jacques Rousseau (1712-1778): From the Discourse on Science and the Arts to Emile, From the \nSource of Inequality Among People to Confessions, he is the most important Romantic thinker-author of \nthe Enlightenment thought in the history of mankind. has been one of the most basic works of \nthought about the coexistence of societies since its publication.Vedat Günyol (1911-2004); She is one of \nthe most important members of our cultural history with the translation office of Yeni Ufuklar \nmagazine and Çan Publications. Along with translations from Rabelais to Rousseau, from T. More to M. Gandhi, \nhis essays have been collected in more than twenty books.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B27\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Cahil Hoca",bkname)||!strcmp("cahil hoca",bkname)||!strcmp("18",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJacques Ranciere\t\t\t144 Pages\t\t\t\t4.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nCAHÝL HOCA\n\n");
	p("The apple of philosophy fell to Joseph Jacotot: in 1818, a revolutionary in exile, Jacotot found \na part-time job as a lecturer of French literature in Belgium. He has to teach the Flemish who do not \nspeak a single word of French, even though he does not speak a single word of Flemish. \nguides students to \nlearn French and Telemak on their own. Jacotot: The equality of those who know and do \nnot know, those who do not know, those who teach and learn, the laborer and mind laborer, in short, \nthe equality of intelligence.Describing this amazing story and Jacotot's philosophy, Jacques Rancière \noffers a very original thought on education, and brings important criticism to the notions \nof inequality and intelligence in the sense of social inequality. Cahil Hodja, who says en educating \nwithout freeing, makes foolish, bir is a horizon book for educators and those interested in \npolitical philosophy as well as those who think about the education system.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF b28\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("The Meaning of Life",bkname)||!strcmp("the meaning of life",bkname)||!strcmp("19",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tArthur Schopenhauer\t\t\t144 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nTHE MEANÝNG OF LÝFE\n\n");
	p("Our lives are similar to a payment made primarily with copper disturbances; we must provide a receipt \nagainst this payment; copper disturbances days, receipt receipt is death. Time to rush us out of ceaselessness,\nnever offer us the opportunity to breathe, whip in the hands of us as a bossy employer waiting on \ntop of us all with a punishment and torture is not possible to establish a bond between. Time is not only \ntrouble for those who writhe in the boredom of the boredom and does not squeeze them. was taken to his \ncountry; What would these people do then? Either they would die of boredom, they would hang themselves or they \nwould fall on each other, fighting and drowning and killing each other.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B29\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Felsefe 101",bkname)||!strcmp("flsefe 101",bkname)||!strcmp("20",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPaul Kleinman\t\t\t296 Pages\t\t\t\t4.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nFELSEFE 101\n\n");
	p("Textbooks, from time to time, can transform the important theories, principles and figures of philosophy \ninto boring texts that would infuriate even philosophers. Philosophy 101 opens up the gates of man's fascinating \nhistory of thought and questioning, rather than providing unnecessary details and exhausting philosophical theories; \nFrom Aristotle and Heidegger to willingness and metaphysics, it offers hundreds of interesting philosophical \nknowledge and ideas that you will not find anywhere else. Philosophy 101 answers all your questions.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B30\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Tao Te Ching",bkname)||!strcmp("tao te ching",bkname)||!strcmp("21",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLaozi\t\t\t120 Pages\t\t\t\t3.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nTAO TE CHÝNG\n\n");
	p("Laozi: Although there are various legends about his life, there is no certain information. \nThe name means both old master and old child in Chinese. He is considered the author of \nTao Te Ching (Dao De Jing), the most important text of Taoism. Tao Te Ching is one of \nthe oldest and most famous examples of classical Chinese literature. The text has inspired many artists, \nthinkers and politicians for centuries and has led to various intellectual debates. Compared \nto other texts of the period, the most distinctive feature of the text is that it does not put \npeople at the center. Unlike the other currents of thought of his time, Tao Te Ching characterizes \nnature as a neutral source of power that is equal to all things, including man, and not as \na set of forces that are sensitive to human morality and serve humanity. According to Tao Te Ching, \neverything between the earth and the sky is subject to the same laws. The reason why Tao Te Ching, \nwhich is interpreted in different ways according to political climates in different periods, \nis read even after centuries is that the subjects he touched on are always valid.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C21\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Ben",bkname)||!strcmp("ben",bkname)||!strcmp("22",bkname)){	
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHüseyin Atay\t\t\t352 Pages\t\t\t\t2.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nBEN\n\n");
	p("For whom is the Qur'an called hamiyyet-ül jahiliya (the cunning of ignorance)?\n•Has the practice of prayer being the basis of Islam increased hypocrisy?\n•Is praying an obstacle to paganism?\n•Does the Qur'an propose a pattern for human life?\n•What does Shura (consultation) mean?\n•What is ijtihad and mujtahid?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C22\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Politika",bkname)||!strcmp("politika",bkname)||!strcmp("23",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAristoteles\t\t\t272 Pages\t\t\t\t4.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nPOLÝTÝKA\n\n");
	p("Aristotle is the foremost philosopher of ancient philosophy. It is accepted that only Plato \nhad access to a similar level of philosophy in ancient times. Aristotle, who left his mark \non antiquity, is, according to many, one of the greatest philosophers of all ages.\nIt is widely accepted that in science and philosophy, the number of people who have the hope \nto compete with what they have achieved does not cross the fingers of a hand.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C23\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Antikçað Felsefesi",bkname)||!strcmp("antikçað felsefesi",bkname)||!strcmp("24",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÇiðdem Dürüþken\t\t\t410 Pages\t\t\t\t5.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nANTÝKÇAÐ FELSEFESÝ\n\n");
	p("Ancient philosophy, which forms the basis of Western philosophy tradition, starts with Thales of Miletus,\nthe first philosopher and continues until the collapse of the Roman Empire. This process, which covers \na period of about 1000 years, is one of the first philosophers who started philosophical thinking \nthrough nature research, and directed Socrates to the course of philosophy. Plato and Aristotle, which \nlaid the foundation stones, Epicurus and Stoa schools that tried to give a new direction to human life \nin the culture climate of Alexander the Great, spreading the culture of Yonan \nto the coast of Indos in India, and Neo-Platonism which reinterpreted and enriched \nPlato philosophy. thinkers.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C24\n");
	p("||-----------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Tanrý Var mýdýr?",bkname)||!strcmp("tanrý var mýdýr?",bkname)||!strcmp("25",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÖrsan K. Öymen\t\t\t128 Pages\t\t\t\t5.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nTANRI VAR MIDIR?\n\n");
	p("“Is there God? Ur is a question that man has sought for answers for thousands of years. \nThis question is one of the most fundamental questions of philosophy. The philosophers gave different \nanswers to this question, arguing that some God existed, some God did not exist, and some did not \nknow whether God existed. Philosophy expert in this book. Dr. Örsan K. Öymen summarizes atheist (agnostic)\n and agnostic reasoning from a historical perspective, and also draws attention to the importance of \ndeveloping different views on religion in a country where the principle of secularism applies. \nThis book is one of the guide books for those who try to understand the universe \nand life through questioning, creative and analytical thinking.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C25\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Ölümün Anlamý",bkname)||!strcmp("ölümün anlamý",bkname)||!strcmp("26",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tArthur Schopenhauer\t\t\t128 Pages\t\t\t\t4.3-");
	p("\n||******************************************************************************************************||\n");
	p("\nÖLÜMÜN ANLAMI\n\n");
	p("Death is the great remorse that the will of life and, in particular, the essential and essential \nselfishness of life takes in the flow of nature, and can be considered a punishment for our existence.\nShouts from the outside: Death is the great awakening. Where is death in life? What has cost \nus and the world we live in discovering the most sophisticated ways of driving death out of the very heart \nof life and deflecting it from our heads? Even the most resilient confesses that we have turned our life \ninto hell with our own hands, will we still stand to see the bill of making death in this hell \nfrom the place it holds in life and the weight it has depending on that place?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C26\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Einstein-Aforizmalar",bkname)||!strcmp("einstein-aforizmalar",bkname)||!strcmp("27",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAlbert Einstein\t\t\t192 Pages\t\t\t\t5.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nEÝNSTEÝN-AFORÝZMALAR\n\n");
	p("Vard There are two ways of living: living as if nothing is miracle or living as if everything \nis miracle. Bir A physicist who believes that all life is a miracle and inspired by it to \nexplain life and the universe… Einstein's thoughts and studies continue to influence the scientific \nworld It is. Although Einstein was a scientist who pursued his dreams after a difficult childhood \nand education, he never ignored the importance of human values. According to Einstein, all that is needed \nto save the world and humanity is a new way of thinking; olan Imagination is more \nimportant than knowledge, E says Einstein. This book reveals the genius of a genius who holds his imagination superior \nto intelligence and the world of thought. Now it's our turn to go into the infinity of imagination.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C27\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Eðitim Felsefesi",bkname)||!strcmp("eðitim felsefesi",bkname)||!strcmp("28",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAhmet Cevizci\t\t\t344 Pages\t\t\t\t2.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nEÐÝTÝM FELSEFESÝ\n\n");
	p("The philosophy of education, which emerged only as an independent discipline of philosophy in \nthe 20th century, takes its roots from the phenomenon of education, which is the most important \nwork of man. For thousands of years, What kind of people we want to raise? a society that did not ask the question, \non Earth was probably not found at all. This question has been asked more intensively in today's \nsociety which sees education as the solution of all problems and tried to be answered.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C28\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Dönüþüm Sembolleri",bkname)||!strcmp("dönüþüm sembolleri",bkname)||!strcmp("29",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tC. G. Jung\t\t\t305 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÖNÜÞÜM SEMBOLLERÝ\n\n");
	p("In 1912, Jung published the Symbols and Transformations of Libido for the first time and declared \nFreud's break with the psychoanalytic school. The book soon became his most known and influential \nwork. Jung, who wanted to reorganize his work for many years because he represented a transitional \nsituation in the development of his theory, was only able to do so in 1952. In his own words, \nthe Symbols of Transformation are, in Jung's words, “a new interpretation expanded on a \npractical understanding of the prodromal stages of schizophrenia. The signs of the case are the Ariadne \nrope to guide us through the details of the symbolic parallels maze, that is absolutely necessary \nif we want to determine the meaning of the exemplary situation. ”");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C29\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Akýlcýlýk",bkname)||!strcmp("akýlcýlýk",bkname)||!strcmp("30",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJohn Cottingham\t\t\t198 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nAKILCILIK\n\n");
	p("n terms of the history of philosophy, Rationalism is the name given to the common philosophical \ntendencies of the great Rational philosophers of the 17th century, Descartes, Spinoza and Leibniz. \nIt is a philosophical view that is based on the argument that the mind can produce a priori, compulsory \ninformation independent of the experiment. This tradition can also be initiated by the fact that the \nbasis for being something that can be founded, verifiable, testable by separating from other \ntypes of knowledge, belief, faith, is reason. Although it does not share other philosophical approaches \nsuch as experimentalism, positivism and analytical philosophy, it can be argued that \nthese approaches also converge on the common ground of rationality.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C30\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Varoluþçuluk",bkname)||!strcmp("varoluþçuluk",bkname)||!strcmp("31",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJean-Paul Sartre\t\t\t128 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nVAROLUÞÇULUK\n\n");
	p("This is a question that has been given various answers to date. For example, according to Weil, \nexistentialism is a crisis, hopelessness for Mounier, anxiety for Hamelin, pessimism for Banfi, rebellion \nfor Wahl, freedom for Marcel, idealism for Lukacs, idealism for Benda The irrationality, according to Foulqué, is \nthe nonsense philosophy. A period, J.-P. According to Sartre, existence, man, but only man, comes first. This means that \nhuman beings are first; then one way or another. Because he creates the essence himself. How Does? It says: By throwing \ninto the world, suffering there, fighting slowly determines itself. This way of determination never closes ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D21\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Kendini Bilmek",bkname)||!strcmp("kendini bilmek",bkname)||!strcmp("32",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMichel Foucault\t\t\t215 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nKENDÝNÝ BÝLMEK\n\n");
	p("When you look at your body, you won't bend to yourself. The self does not consist of clothing, \ntools or property. It is a principle about the spirit, not the body. Michael Foucault mentioned \nthe idea of a new book shortly before his death in 1984. He described the book as “a collection of different articles \nabout the self (for example, epimeleia heautou, an essay on Plato's Alkibiades, where the concept of 'bending itself' \nwas first proposed), about the role of reading and writing in the formation of the self ves \nand so on.” Foucault This book was designed for the first time in the fall of 1982 at the University of Vermont \nver Self-Forming Techniques ”seminar was based on. This book is a partial recording of this seminar.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D22\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Toplum Sözleþmesi",bkname)||!strcmp("toplum sözleþmesi",bkname)||!strcmp("33",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJean Jacques Rousseau\t\t\t160 Pages\t\t\t\t3.8-");
	p("\n||******************************************************************************************************||\n");
	p("\nTOPLUM SÖZLEÞMESÝ\n\n");
	p("One of the first works by Jean-Jacques Rousseau on how society should be governed in the 18th century, \nthe Community Convention focuses on inequality, social rights, laws, democracy, and how politics \ncan be shaped. According to Rousseau, there is no virtue without citizens, no freedom without virtue, \nno state without freedom. In the absence of natural sanctions, justice laws are ineffective among people. \nWhen an honest man acts against everyone under the law and no one responds in the same way, these \nlaws do good to abuse and cause honest destruction. Therefore, agreements and laws are needed to \ncombine rights with duties and to link justice with its object. ”");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D23\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Varlýk ve Zaman",bkname)||!strcmp("varlýk ve zaman",bkname)||!strcmp("34",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMartin Heidegger\t\t\t Pages\t\t\t\t5.0-");
	p("\n||******************************************************************************************************||\n");
	p("\n\n\n");
	p("Martin Heidegger's masterpiece Being and Time was published in 1927. In this book, Heidegger \nanalyzed and explained human existence in the world (Dasein) with a unique method and terminology. \nHe revealed that human existence is revealed in the time horizon, which means that the existence \nof human beings is revealed. In this way, Heidegger created an ontology aimed at overcoming the \ndistinction between subject-object and spirit-body. With this book, one of the most important \nworks of contemporary philosophy, Heidegger had a profound impact not only in \nphilosophy but also in art, politics, language, psychology, architecture and technology. \nMany contemporary thinkers such as Sartre, Levinas, Binswanger, Boss, Merleau-Ponty, Foucault, Derrida, \nArendt, Gadamer, Jonas, Marcuse, Rorty, Agamben, Dreyfus were \ninspired by Being and Time.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D24\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Aforizmalar",bkname)||!strcmp("aforizmalar",bkname)||!strcmp("35",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHippokrates\t\t\t104 Pages\t\t\t\t2.6-");
	p("\n||******************************************************************************************************||\n");
	p("\nAFORÝZMALAR\n\n");
	p("Hippocrates of Kos (460-370 BC): He saved medicine from the shadow of superstition and turned it \ninto an art based on mental foundations, thus succeeding in making history as the father of medicine.\nHis understanding was adopted by different societies and cultures over time, and even through \nthe Galenos (2nd century AD) it was transferred to the Western and Islamic Middle \nAges and continued its influence until the 18th century, when the foundations of \ncontemporary science were laid. The collection of Hippocrates, attributed to it, consists of about \nsixty texts which cover many subjects ranging from the body structure of human beings \nto the causes of diseases, even technical rules to be observed in practice, and moral \nprinciples. Aphorisms, which are considered as the pupil of this review and have not been discredited \nby physicians for centuries, are a gateway to Hippocrates' understanding of medicine which \nhas revolutionized the history of medicine.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D25\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Burukluk",bkname)||!strcmp("burukluk",bkname)||!strcmp("36",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tEmil Michel Cioran\t\t\t96 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nBURUKLUK\n\n");
	p("Sometimes a serious, sometimes humorous collection of thought, the Strangeness \nmaintains the same obsession from its first paragraph to its last paragraph: \nto maintain a suspicion of both anxiety and smile.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D26\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Hayatýn Anlamý",bkname)||!strcmp("hayatýn anlamý",bkname)||!strcmp("37",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tTerry Eagleton\t\t\t144 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHAYATIN ANLAMI\n\n");
	p("What is the meaning of life? More power, wealth, sex, love, chocolate, football, intellectual \ncontemplation or live on the day? Does life have a meaning; or is it just a postmodern fiction, like \nall the meanings? and question the meaning of life in an area invaded by popular culture and the meaning \nindustry. Shakespeare's theatrical characters, Wittgenstein's language plays, Schopenhauer's will, \nHeidegger's nothing, Sartre ', to Eagleton's narrative discussing the meaning of life with the linguistic,\nethical, cultural and political indicators that make up the life of meaning. The concern is that \nSamuel Beckett's maybe and Freud's unconscious participate in pieces. Interpreting concepts and values \n??such as self-realization, personal satisfaction, happiness, love and virtue as a social practice \nin a moral genealogy from Aristotle to Marx, this book is a call for thinking for those who still \nworry about life with vital signs. His life, or, as he says, O Life!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D27\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Ermiþ",bkname)||!strcmp("ermiþ",bkname)||!strcmp("38",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHalil Cibran\t\t\t128 Pages\t\t\t\t4.4-");
	p("\n||******************************************************************************************************||\n");
	p("\nERMÝÞ\n\n");
	p("You were told that life is dark and you are\nyou've come back again in your weariness, whatever is said by a weary.\nAnd I say when life is really dark, human, it's different.\nAnd every human being is blind, when information is available.\nAnd every knowledge is futile, when work is another.\nAnd every work is futile, when love is another.\nAnd whenever you work with love\nyou rapt to yourself and to the other and to God.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D28\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Þiddet",bkname)||!strcmp("þiddet",bkname)||!strcmp("39",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tSlavoj Zizek\t\t\t210 Pages\t\t\t\t3.3-");
	p("\n||******************************************************************************************************||\n");
	p("\nÞÝDDET\n\n");
	p("According to zizek, there are counter-violence. They are hypocrites who create the situation \nthat they hate when fighting against subjective violence. Similarly, there is even violence at the core of the language, \na means of directly defeating violence. It is an ideological operation to condemn violence strictly and condemn \nit as a “bad“, making it invisible to the basic forms of violence in society. Although Western \nsocieties show great sensitivity to the types of violence, they also make us insensitive to the most \nviolent forms of violence. Moreover, he does this under the guise of humanitarian sympathy for victims.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D29\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
}
else if(!strcmp("Mantýk",bkname)||!strcmp("mantýk",bkname)||!strcmp("40",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tDoðan Özlem\t\t\t423 Pages\t\t\t\t4.8-");
	p("\n||******************************************************************************************************||\n");
	p("\nMANTIK\n\n");
	p("Logic is generally thought to be a technical field of study. This judgment from a limited point of \nview also leads to the ignorance and incomplete understanding of its depth. Logic, which has been regarded\n as the organon of thinking since ancient times, has a multidimensional content in this book that meets \nexactly this need. In addition to classical logic and symbolic logic, the relationship between \nlogic and philosophy and sciences, the nature of logic principles and the relation of logic with culture \nare among the main topics discussed in the book. still protecting.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D30\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);

}







else if(!strcmp(bkname,"0")){
	a=0;lp=0;
	system("cls");
}

























}
else if(!strcmp("Science",m)||!strcmp("4",m)){ 

system("cls");

p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
p("                                                         --SCÝENCE BOOKS--\n");
p("1)Uyumsuzluk\n2)The Science Book\n3)The Man Who Mistook His Wife for a Hat\n4)The Help\n5)Blue Moon\n6)There Is No Planet B\n7)Curbing Catastrophe : Natural Hazards and Risk Reduction in the Modern World\n8)Philosophy and Climate Science\n9)Testosterone\n10)The Story of Pain : From Prayer to Painkillers\n");	
p("11)The Turing Guide\n12)Superintelligence : Paths, Dangers, Strategies\n13)The Fourth Revolution\n14)The Improbable Primate\n15)Curious Tales from Chemistry\n16)Life Unfolding\n17)The Intelligent Web\n18)Virus Hunt\n19)Social\n20)Run, Swim, Throw, Cheat\n");
p("21)Secret Chambers\n22)Higgs\n23)Reactions\n24)On Being\n25)A Brief History Of Time: From Big Bang To Black Holes\n26)Astrophysics for People in a Hurry\27)The Universe\n28)Seven Brief Lessons on Physics\n29)An Astronaut's Guide to Life on Earth\n30)The Almanac\n");
p("31)Wilding: The Return of Nature to a British Farm\n32)A Really Short History of Nearly Everything\n33)No One Is Too Small to Make a Difference\n34)Midnight in Chernobyl\n35)Finding Chika\n36)The Salt Path\n37)Shackleton's Boat Journey\n38)The Uninhabitable Earth\n39)Primitive Technology\n40)The Elephant Whisperer\n");
p("\nIf you don't Satisfya and also you want to return the Book's Page enter '0':\n");
g(bkname);
if(!strcmp("Uyumsuzluk",bkname)||!strcmp("uyumsuzluk",bkname)||!strcmp("1",bkname)){
		system("cls");
		p("\n||******************************************************************************************************||\n");
		p("\t Ronald Giphart, Mark Van Vugt\t\t392 Pages\t\t\t\t\t\t4.91");
		p("\n||******************************************************************************************************||\n");	
		p("\nUyumsuzluk\n\n");
		p("TIncompatibility describes the conflict between our biology and culture. It explores the striking\ncontrast between the first few million years of human history and the 12,000 years of the Agricultural Revolution,\nfollowed by the Digital Revolution, which provides comfortable lives in a very different social structure, where\npeople live in large meadows as hunters-gatherers among small communities.");
		p("\n\n||------------------------------------------------------------------------------------------------------||\n");
		p("YOU CAN FIND THIS BOOK ON THE SHELF A31\n");
		p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	
	}
	
	else if(!strcmp("The Science Book",bkname)||!strcmp("the science book",bkname)||!strcmp("2",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tDK\t\t\t\t\t\t352 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Science Book\n\n");
	p("With over 225,000 copies in print, DK's Big Ideas series has struck a chord with readers fascinated-but\nalso intimidated-by complex subjects like philosophy, psychology, politics, and religion.The newest title\nin this successful and acclaimed series is The Science Book, an inventive visual take on astronomy,\nbiology, chemistry, geology, and physics. With eye-catching artwork, step-by-step diagrams, and\nillustrations that break down complicated ideas into manageable concepts, The Science Book will have\nreaders conversant in genetic engineering, black holes, and global warming in no time. Along the way are\nfound mini-biographies of the most well-known scientists, and a glossary of helpful scientific\nterms.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A32\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("The Man Who Mistook His Wife for a Hat",bkname)||!strcmp("the man who mistook his wife for a hat",bkname)||!strcmp("3",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tOliver Sacks\t\t\t\t272 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Man Who Mistook His Wife for a Hat\n\n");
	p("In his most extraordinary book, The Man Who Mistook His Wife for a Hat, Oliver Sacks recounts the\nstories of patients lost in the bizarre, apparently inescapable world of neurological disorders.\nThese are case studies of people who have lost their memories and with them the greater part of their\npasts; who are no longer able to recognize people or common objects; whose limbs have become\nalien; who are afflicted and yet are gifted with uncanny artistic or mathematical talents.\nIn Dr Sacks's splendid and sympathetic telling, each tale is a unique and deeply human study of\nlife struggling against incredible adversity.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A33\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("The Help",bkname)||!strcmp("the help",bkname)||!strcmp("4",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tKathryn Stockett\t\t\t\t464 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Help\n\n");
	p("There's Aibileen, raising her seventeenth white child and nursing the hurt caused by her own son's\ntragic death; Minny, whose cooking is nearly as sassy as her tongue; and white Miss Skeeter, home from\nCollege, who wants to know why her beloved maid has disappeared.Skeeter, Aibileen and Minny. No\nonewould believe they'd be friends; fewer still would tolerate it. But as each woman finds\nthe courage to cross boundaries, they come to depend and rely upon one another. Each is in a\nsearch of a truth. And together they have an extraordinary story to tell...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A34\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	

	else if(!strcmp("Blue Moon",bkname)||!strcmp("blue moon",bkname)||!strcmp("5",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLee Child\t\t\t\t384 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nBlue Moon : (Jack Reacher 24)\n\n");
	p("He's on a Greyhound bus, watching an elderly man sleeping in his seat, with a fat envelope of cash\nhanging out of his pocket. Another passenger is watching too ... hoping to get rich quick.As the\nmugger makes his move, Reacher steps in.The old man is grateful, yet he turns down Reacher's offer to\nhelp him home. He's vulnerable, scared, and clearly in big, big trouble.What hold could the gangs\nhave on the old guy? Will Reacher be in time to stop bad things happening?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A35\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}



	else if(!strcmp("There Is No Planet B",bkname)||!strcmp("there is no planet b",bkname)||!strcmp("6",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMike Berners-Lee\t\t\t302 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThere Is No Planet B\n\n");
	p("Feeding the world, climate change, biodiversity, antibiotics, plastics - the list of concerns seems\nendless. But what is most pressing, what are the knock-on effects of our actions, and what should we\ndo first? Do we all need to become vegetarian? How can we fly in a low-carbon world? Should we frack?\nHow can we take control of technology? Does it all come down to population? And, given the global\nnature of the challenges we now face, what on Earth can any of us do? Fortunately, Mike Berners-Lee has\ncrunched the numbers and plotted a course of action that is practical and even enjoyable.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A36\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("curbing catastrophe : natural hazards and risk reduction in the modern world",bkname)||!strcmp("Curbing Catastrophe : Natural Hazards and Risk Reduction in the Modern World",bkname)||!strcmp("7",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tTimothy H. Dixon\t\t\t\t318 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nCurbing Catastrophe : Natural Hazards and Risk Reduction in the Modern World\n\n");
	p("What does Japan's 2011 nuclear accident have in common with the 2005 flooding of New Orleans from\nHurricane Katrina? This thought-provoking book presents a compelling account of recent and historical\ndisasters, both natural and human-caused, drawing out common themes and providing a holistic\nunderstanding of hazards, disasters and mitigation, for anyone interested in this important and\ntopical subject. Based on his on-the-ground experience with several major recent disasters,\nTimothy H. Dixon explores the science, politics and economics behind a variety of disasters and\nenvironmental issues, arguing that many of the worst effects are avoidable. ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A37\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Philosophy and Climate Science",bkname)||!strcmp("philosophy and climate science",bkname)||!strcmp("8",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tEric Winsberg\t\t\t\t282 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nPhilosophy and Climate Science\n\n");
	p("There continues to be a vigorous public debate in our society about the status of climate science.\nMuch of the skepticism voiced in this debate suffers from a lack of understanding of how the science\nworks - in particular the complex interdisciplinary scientific modeling activities such as those\nwhich are at the heart of climate science. In this book Eric Winsberg shows clearly and accessibly\nhow philosophy of science can contribute to our understanding of climate science, and how it can also shape\nclimate policy debates and provide a starting point for research. ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A38\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	

	else if(!strcmp("Testosterone",bkname)||!strcmp("testosterone",bkname)||!strcmp("9",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJoe Herbert\t\t\t\t256 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nTestosterone\n\n");
	p("We inherit mechanisms for survival from our primeval past; none so obviously as those involved in\nreproduction. The hormone testosterone underlies the organization of activation of masculinity: it changes\nthe body and brain to make a male. It is involved not only in sexuality but in driving aggression,\ncompetitiveness, risk-taking - all elements that were needed for successful survival and reproduction\nin the past. But these ancient systems are carried forward into a modern world.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A39\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("The Story of Pain : From Prayer to Painkillers",bkname)||!strcmp("the story of pain : from prayer to painkillers",bkname)||!strcmp("10",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJoanna Bourke\t\t\t\t416 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Story of Pain : From Prayer to Painkillers\n\n");
	p("It is easy to assume this is the end of the story: 'pain-is-pain-is-pain', and that is all there is\nto say. But it is not. In fact, the way in which people respond to what they describe as 'painful'\nhas changed considerably over time. In the eighteenth and nineteenth centuries, for example,\npeople believed that pain served a specific (and positive) function - it was a message from God or\nNature; it would perfect the spirit. 'Suffer in this life and you wouldn't suffer in the next\none'.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A40\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}

	else if(!strcmp("The Turing Guide",bkname)||!strcmp("the turing guide",bkname)||!strcmp("11",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRobin Wilson\t\t\t\t576 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Turing Guide\n\n");
	p("Alan Turing has long proved a subject of fascination, but following the centenary of his birth\nin 2012, the code-breaker, computer pioneer, mathematician (and much more) has become even more celebrated with\nmuch media coverage, and several meetings, conferences and books raising public awareness of\nTuring's life and work.This volume will bring together contributions from some of the leading experts on Alan\nTuring to create a comprehensive guide to Turing that will serve as a useful resource for researchers in\nthe area as well as the increasingly interested general reader. ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B31\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("Superintelligence : Paths, Dangers, Strategies",bkname)||!strcmp("superintelligence : paths, dangers, strategies",bkname)||!strcmp("12",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tNick Bostrom\t\t\t\t432 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nSuperintelligence : Paths, Dangers, Strategies\n\n");
	p("The human brain has some capabilities that the brains of other animals lack. It is to these distinctive\ncapabilities that our species owes its dominant position. Other animals have stronger muscles or\nsharper claws, but we have cleverer brains.If machine brains one day come to surpass human\nbrains in general intelligence, then this new superintelligence could become very powerful.\nAs the fate of the gorillas now depends more on us humans than on the gorillas themselves, so\nthe fate of our species then would come to depend on the actions of the machine superintelligence.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B32\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("The Fourth Revolution",bkname)||!strcmp("the fourth revolution",bkname)||!strcmp("13",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLuciano Floridi\t\t\t\t272 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Fourth Revolution\n\n");
	p("As the boundaries between life online and offline break down, and we become seamlessly connected\nto each other and surrounded by smart, responsive objects, we are all becoming integrated into an\ninfosphere. Personas we adopt in social media, for example, feed into our 'real' lives so that we begin to\nlive, as Floridi puts in, onlife. Following those led by Copernicus, Darwin, and Freud, this\nmetaphysical shift represents nothing less than a fourth revolution.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B33\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("The Improbable Primate",bkname)||!strcmp("the improbable primate",bkname)||!strcmp("14",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tClive Finlayson\t\t\t\t224 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Improbable Primate\n\n");
	p("Taking an ecological approach to our evolution, Clive Finlayson considers the origins of modern humans\nwithin the context of a drying climate and changing landscapes. Finlayson argues that environmental change,\nparticularly availability of water, played a critical role in shaping the direction of human\nevolution, contributing to our spread and success. He argues that our ancestors carved a niche for\nthemselves by leaving the forest and forcing their way into a long-established community of carnivores\nin a tropical savannah as climate changes opened up the landscape. ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B34\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("Curious Tales from Chemistry",bkname)||!strcmp("curious tales from chemistry",bkname)||!strcmp("15",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLars Ohrstrom\t\t\t272 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nCurious Tales from Chemistry\n\n");
	p("This is a book about discovery and disaster, exploitation and invention, warfare and science - and\nthe relationship between human beings and the chemical elements that make up our planet. Lars\nOhrstrom introduces us to a variety of elements from S to Pb through tales of ordinary and\nextraordinary people from around the globe. We meet African dictators controlling vital supplies of\nuranium; eighteenth-century explorers searching out sources of precious metals;industrial spies\nstealing the secrets of steel-making.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B35\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("Life Unfolding",bkname)||!strcmp("Life Unfolding",bkname)||!strcmp("16",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJamie A. Davies\t\t\t320 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nLife Unfolding\n\n");
	p("Where did I come from? Why do I have two arms but just one head? How is my left leg the same size as\nmy right one? Why are the fingerprints of identical twins not identical? How did my brain learn to learn? Why\nmust I die?Questions like these remain biology's deepest and most ancient challenges. They force\nus to confront a fundamental biological problem: how can something as large and complex\nas a human body organize itself from the simplicity of a fertilized egg? A convergence of ideas\nfrom embryology, genetics, physics, networks, and control theory has begun to provide real answers. ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B36\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);		
}	

	else if(!strcmp("The Intelligent Web ",bkname)||!strcmp("the intelligent web ",bkname)||!strcmp("17",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tGautam Shroff\t\t\t\t320 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Intelligent Web \n\n");
	p("As we use the Web for social networking, shopping, and news, we leave a personal trail. These days,\nlinger over a Web page selling lamps, and they will turn up at the advertising margins as you move around\nthe Internet, reminding you, tempting you to make that purchase. Search engines such as Google\ncan now look deep into the data on the Web to pull out instances of the words you are looking for. And\nthere are pages that collect and assess information to give you a snapshot of changing political\nopinion. ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B37\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	

	else if(!strcmp("Virus Hunt",bkname)||!strcmp("virus hunt",bkname)||!strcmp("18",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tDorothy H. Crawford\t\t\t272 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nVirus Hunt\n\n");
	p("Dorothy H. Crawford traces the story back to the remote rain forests of Africa - home to the primates\nthat carry the ancestral virus - and reveals how HIV-1 first jumped from chimpanzees to humans in rural\nsouth east Cameroon. Examining how this happened, and how it then travelled back to Colonial west\ncentral Africa where it eventually exploded as a pandemic, she asks why and how it was able to spread\nso widely. From hospital intensive care wards to research laboratories and the African rain forests, this\nis the wide-ranging story of a killer virus and a tale of scientific endeavour.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B38\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Social",bkname)||!strcmp("social",bkname)||!strcmp("19",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMatthew D. Lieberman\t\t\t384 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nSocial\n\n");
	p("Why are we influenced by the behaviour of complete strangers? Why does the brain register similar\npleasure when I perceive something as 'fair' or when I eat chocolate? Why can we be so profoundly hurt by\nbereavement? What are the evolutionary benefits of these traits? The young discipline of 'social cognitive\nneuroscience' has been exploring this fascinating interface between brain science and human behaviour\nsince the late 1990s.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B39\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("Run, Swim, Throw, Cheat",bkname)||!strcmp("run, swim, throw, cheat",bkname)||!strcmp("20",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tChris Cooper\t\t\t320 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nRun, Swim, Throw, Cheat\n\n");
	p("Drugs in sport are big news and the use of performance-enhancing drugs in sport is common. Here, Chris\nCooper, a top biochemist at the University of Essex, looks at the science behind drugs in sport. Using\nthe performance of top athletes, Cooper begins by outlining the limits of human performance.\nShowing the basic problems of human biochemistry, physiology, and anatomy, he looks at what stops\nus running faster, throwing longer, or jumping higher. Using these evidence-based arguments he shows\nwhat the body can, and cannot, do. -");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B40\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Secret Chambers",bkname)||!strcmp("secret chambers",bkname)||!strcmp("21",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMartin Brasier\t\t\t320 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nSecret Chambers\n\n");
	p("In the follow up to Darwin's Lost World, Martin Brasier introduces the quest for the missing history\nof life and the cell. Through a series of journeys it emerges that the modern plant cell is one of the\nmost deeply puzzling and unlikely steps in the whole history of life. Decoding this puzzle\nis a great adventure that has mainly taken place over the last half century. Brasier puts the big questions\ninto context through lively descriptions of his explorations around the world, from the Caribbean Sea\nand the Egyptian pyramids, to the shores of the great lakes in Canada, and to the reefs and deserts of\nAustralia.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C31\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	

	else if(!strcmp("Higgs",bkname)||!strcmp("higgs",bkname)||!strcmp("22",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJim Baggott\t\t\t\t304 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHiggs \n\n");
	p("The hunt for the Higgs particle has involved the biggest, most expensive experiment ever. So exactly\nwhat is this particle? Why does it matter so much? What does it tell us about the Universe? Did the discovery\nannounced on 4 July 2012 finish the search? And was finding it really worth all the effort? The short\nanswer is yes. The Higgs field is proposed as the way in which particles gain mass - a fundamental\nproperty of matter. It's the strongest indicator yet that the Standard Model of physics really does reflect\nthe basic building blocks of our Universe. Little wonder the hunt and discovery of this new particle\nproduced such intense media interest.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C32\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}

	else if(!strcmp("Reactions",bkname)||!strcmp("reactions",bkname)||!strcmp("23",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Peter Atkins\t\t\t200 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nReactions\n\n");
	p("Peter Atkins captures the heart of chemistry in this book, through an innovative, closely integrated\ndesign of images and text, and his characteristically clear, precise, and economical exposition. Explaining\nthe processes involved in chemical reactions, he begins by introducing a 'tool kit' of basic reactions,\nsuch as precipitation, corrosion, and catalysis, and concludes by showing how these building blocks\nare brought together in more complex processes such as photosynthesis, to provide a concise and\nintellectually rewarding introduction to the private life of atoms.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C33\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}


	else if(!strcmp("On Being",bkname)||!strcmp("on being",bkname)||!strcmp("24",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPeter Atkins\t\t\t\t128 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nOn Being\n\n");
	p("In this scientific 'Credo', Peter Atkins considers the universal questions of origins, endings,\nbirth, and death to which religions have claimed answers. With his usual economy, wit, and elegance,\nunswerving before awkward realities, Atkins presents what science has to say. While acknowledging the\ncomfort some find in belief, he declares his own faith in science's capacity to reveal the\ndeepest truths.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C34\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	

	else if(!strcmp("a brief history of time : from big bang to black holes",bkname)||!strcmp("A Brief History Of Time : From Big Bang To Black Holes",bkname)||!strcmp("25",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tStephen Hawking\t\t\t\t272 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nA Brief History Of Time : From Big Bang To Black Holes\n\n");
	p("These are just some of the questions considered in the internationally acclaimed masterpiece by\nthe world renowned physicist - generally considered to have been one of the world's greatest thinkers.\nIt begins by reviewing the great theories of the cosmos from Newton to Einstein, before delving into\nthe secrets which still lie at the heart of space and time, from the Big Bang to black holes, via\nspiral galaxies and strong theory. To this day A Brief History of Time remains a staple of the scientific canon,\nand its succinct and clear language continues to introduce millions to the universe and its wonders.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C35\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Astrophysics for People in a Hurry",bkname)||!strcmp("astrophysics for people in a hurry",bkname)||!strcmp("26",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tNeil Degrasse Tyson\t\t\t224 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nAstrophysics for People in a Hurry\n\n");
	p("But today, few of us have time to contemplate the cosmos. So Tyson brings the universe down to\nEarth succinctly and clearly, with sparkling wit, in digestible chapters consumable any time and\nanywhere in the busy day. Astrophysics for People in a Hurry reveals just what you need to be fluent\nand ready for the next cosmic headlines: from the Big Bang to black holes, from quarks to quantum\nmechanics and from the search for planets to the search for life in the universe.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C36\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("The Universe",bkname)||!strcmp("the universe",bkname)||!strcmp("27",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLonely Planet\t\t\t608 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Universe\n\n");
	p("Let Lonely Planet take you further than ever before with the world's first and only travel guide to\nthe Universe. Developed with the latest data from NASA, we take you from our home on Earth and out into the\nfar reaches of the solar system, then into our neighbouring stars and planetary systems, and\nfinally into the rest of our galaxy and the Universe");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C37\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Seven Brief Lessons on Physics",bkname)||!strcmp("seven brief lessons on physics",bkname)||!strcmp("28",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tCarlo Rovelli\t\t\t96 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nSeven Brief Lessons on Physics\n\n");
	p("'With the publication of this million-selling book, Rovelli took his place with Stephen Hawking and\nRichard Feynman as one of the great popularisers of modern theoretical physics' - Sam Leith, Spectator");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C38\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	

	else if(!strcmp("An Astronaut's Guide to Life on Earth",bkname)||!strcmp("an astronaut's guide to life on earth",bkname)||!strcmp("29",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tChris Hadfield\t\t\t320 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nAn Astronaut's Guide to Life on Earth\n\n");
	p("Colonel Chris Hadfield has spent decades training as an astronaut and has logged nearly 4,000 hours\nin space. During this time he has broken into a Space Station with a Swiss army knife, disposed of a\nlive snake while piloting a plane, been temporarily blinded while clinging to the exterior of an orbiting\nspacecraft, and become a YouTube sensation with his performance of David Bowie's 'Space Oddity' in space.\nThe secret to Chris Hadfield's success - and survival - is an unconventional philosophy he\nlearned at NASA: prepare for the worst - and enjoy every moment of it.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C39\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("The Almanac",bkname)||!strcmp("the almanac",bkname)||!strcmp("30",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Lia Leendertz\t\t\t\t272 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Almanac\n\n");
	p("A perfect toolkit connecting with the world around us and the year ahead as it unfolds - all in a\ncompact and pocket size that just begs you to pick it up and browse. The Almanac: A Seasonal Guide to 2020\nreinvents the tradition of the rural almanac for a new audience. It gives you the tools and inspiration you\nneed to celebrate, mark and appreciate each month of the year in your own particular way");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C40\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Wilding: The Return of Nature to a British Farm",bkname)||!strcmp("wilding : the return of nature to a british farm",bkname)||!strcmp("31",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Isabella Tree\t\t\t\t384 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nWilding: The Return of Nature to a British Farm\n\n");
	p("Forced to accept that intensive farming on the heavy clay of their land at Knepp was economically\nunsustainable, Isabella Tree and her husband Charlie Burrell made a spectacular leap of faith: they decided\nto step back and let nature take over. Thanks to the introduction of free-roaming cattle, ponies,\npigs and deer - proxies of the large animals that once roamed Britain - the 3,500 acre project has\nseen extraordinary increases in wildlife numbers and diversity in little over a decade.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D31\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("A Really Short History of Nearly Everything",bkname)||!strcmp("a really short history of nearly everything",bkname)||!strcmp("32",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Bill Bryson \t\t\t\t272 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nA Really Short History of Nearly Everything\n\n");
	p("Bill's own fascination with science began with a battered old schoolbook he had when he was about ten\nor eleven years old in America. It had an illustration that captivated him - a cutaway diagram showing\nEarth's interior as it would look if you cut into it with a large knife and carefully removed about\na quarter of its bulk. And he very clearly remembers thinking: How do they know that?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D32\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);	
}	
	else if(!strcmp("No One Is Too Small to Make a Difference",bkname)||!strcmp("no one is too small to make a difference",bkname)||!strcmp("33",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Greta Thunberg\t\t\t\t80 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nNo One Is Too Small to Make a Difference\n\n");
	p("In August 2018 a fifteen-year-old Swedish girl, Greta Thunberg, decided not to go to school one day.\nHer actions ended up sparking a global movement for action against the climate crisis, inspiring\nmillions of pupils to go on strike for our planet, forcing governments to listen, and earning\nher a Nobel Peace Prize nomination.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D33\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	
	else if(!strcmp("Midnight in Chernobyl",bkname)||!strcmp("midnight in chernobyl",bkname)||!strcmp("34",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAdam Higginbotham\t\t\t\t560 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nMidnight in Chernobyl\n\n");
	p("A perfect toolkit connecting with the world around us and the year ahead as it unfolds - all in a\ncompact and pocket size that just begs you to pick it up and browse. The Almanac: A Seasonal Guide to 2020\nreinvents the tradition of the rural almanac for a new audience. It gives you the tools and inspiration you\nneed to celebrate, mark and appreciate each month of the year in your own particular way");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D34\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}		
	else if(!strcmp("Finding Chika",bkname)||!strcmp("finding chika",bkname)||!strcmp("35",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Mitch Albom\t\t\t\t256 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nFinding Chika\n\n");
	p("Chika Jeune was born three days before the devastating earthquake that decimated Haiti in 2010.\nShe spent her infancy in extreme poverty, and when her mother died giving birth to a baby brother,\nChika was brought to the Have Faith Haiti Orphanage that Mitch and his wife, Janine operate.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D35\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("The Salt Path",bkname)||!strcmp("the salt path",bkname)||!strcmp("36",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Raynor Winn\t\t\t\t288 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Salt Path\n\n");
	p("Give them something inspiring this Christmas, with the uplifting true story of the couple who\nlost everything and embarked on a journey of salvation across the windswept South West coastline.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D36\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Shackleton's Boat Journey",bkname)||!strcmp("shackleton's boat journey",bkname)||!strcmp("37",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tFrank Arthur Worsley\t\t\t\t160 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nShackleton's Boat Journey\n\n");
	p("On August 1, 1914, on the eve of World War I, Sir Ernest Shackleton and his hand-picked crew embarked\nin HMS Endurance from London's West India Dock, for an expedition to the Antarctic. It was to\nturn into one of the most breathtaking survival stories of all time. Even as they coasted\ndown the channel, Shackleton wired back to London to offer his ship to the war effort.\nThe reply came from the First Lord of the Admiralty, one Winston Churchill: Proceed.\nAnd proceed they did.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D37\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("The Uninhabitable Earth",bkname)||!strcmp("the uninhabitable earth",bkname)||!strcmp("38",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tDavid Wallace-wells\t\t\t\t336 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Uninhabitable Earth\n\n");
	p("A perfect toolkit connecting with the world around us and the year ahead as it unfolds - all in a\ncompact and pocket size that just begs you to pick it up and browse. The Almanac: A Seasonal Guide to 2020\nreinvents the tradition of the rural almanac for a new audience. It gives you the tools and inspiration you\nneed to celebrate, mark and appreciate each month of the year in your own particular way");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D38\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Primitive Technology",bkname)||!strcmp("primitive technology",bkname)||!strcmp("39",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t John Plant \t\t\t\t192 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nPrimitive Technology\n\n");
	p("Watched by millions online, this is the first time Primitive Technology's ancient methods, rooted in\nfire, stone, earth, water and plants, have been comprehensively laid out in a book. Through\nillustrations, photographs and instruction, learn how to create something useful from natural resources and become\nskilled in the art of fire starting, pottery making, shelter building, spear throwing, basket crafting and\nmuch more.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D39\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("The Elephant Whisperer",bkname)||!strcmp("the elephant whisperer",bkname)||!strcmp("40",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t  Lawrence Anthony\t\t\t\t400 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Elephant Whisperer\n\n");
	p("When South African conservationist Lawrence Anthony was asked to accept a herd of 'rogue' elephants\non his Thula Thula game reserve in Zululand, his common sense told him to refuse. But he was the\nherd's last chance of survival - dangerous and unpredictable, they would be killed if\nAnthony wouldn't take them in");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D40\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	
else if(!strcmp("0",bkname)){
	a=0;lp=0;
}



}
else if(!strcmp("Religion and Mythology",m)||!strcmp("5",m)){
system("cls");
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
p("                                                       --RELIGION AND MITHOLOGY BOOKS--\n");
p("1)Mitoloji 101\n2)Kahramanýn Sonsuz Yolculuðu\n3)Mezopotamya Mitolojisi\n4)Eski Türk Mitolojisi\n5)Hilekarýn Marifeti Bu Dünya\n6)Mitoloji Kitabý\n7)Ýskandinav Mitolojisi\n8)Yaratýlýþ Mitolojileri\n9)Mitlerin Özellikleri\n10)Evren Yaratýlýþ ve Köken Mitleri\n");
p("11)Bir Yaratýlýþ Efsanesi\n12)Odesa Öyküleri\n13)Iri Boynuzlu Kara Geyik Anlatýyor\n14)Ilkçað Gizem Tapýlarý\n15)Sorularla Mitoloji\n16)Avcý Tanrýça-Artemis\n17)Eski Yunan'da Mit ve Din\n18)Sir Nigel\n19)Adem ile Havva\n20)Zeus'un Oðlu Herkül\n");
p("21)Kur'an\n22)Dinler Tarihi 101\n23)Tanrýlarýn Mucizeleri\n24)Dinler Tarihine Giriþ\n25)Kudüs'ün Gizemli Tarihi\n26)Evanjelizm\n27)Allah'ýn Parmak Ýzi\n28)Kutsal ve Kutsal Dýþý\n29)Paganizm-1\n30)Dinin Kýsa Tarihi\n");
p("31)Unutulan Hakikat\n32)Seçme Dini Hikayeler\n33)Din Nedir?\n34)Tevhid Risalesi\n35)Musul Komplosu\n36)Ayna Ýçinde Ayna\n37)Kerbela ve Matem\n38)Firavun Mantýðý\n39)Yusuf Olabilmek\n40)Akýl ve Sezgi\n");
p("If you Satisfya enter '1'and  you want to return the Home Page enter '0':\n");	
g(bkname);		
	 if(!strcmp("Mitoloji 101",bkname)||!strcmp("mitoloji 101",bkname)||!strcmp("1",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tKathleen Sears\t\t\t264 Pages\t\t\t\t3.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nMÝTOLOJÝ 101\n\n");
	p("This book will take you on a journey full of adventures, just like Odysseus, and you will \nfind the most interesting stories of the classic mythology, such as the Trojan War, Perseus killing \nMedusa, and Oedipus escaping from a prophecy. Hades puts his guests in their forget-me-not chairs \nto ask for something; the innkeeper Procrustes, who cuts the legs and shortens the length of the passengers \nto fit the bed; Demeter condemns a greedy man to eat his own flesh; Sirens, who sail the minds of \nthe sailors with the songs they sing, causing ships to get on the rocks; The monster Sphinx, which smashes \nand eats the passengers who cannot find the answer to the riddle, is only a few of the most \nbizarre mythological characters you will encounter in these stories. You will also learn about the major \nclassical writers and works of ancient Greek and Roman mythology.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	
	
	}
	else if(!strcmp("Kahramanýn Sonsuz Yolculuðu",bkname)||!strcmp("kahramanýn sonsuz yolculuðu",bkname)||!strcmp("2",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJoseph Campbell\t\t\t440 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nKAHRAMANIN SONSUZ YOLCULUÐU\n\n");
	p("Joseph Campbell's cult book The Endless Journey of the Hero - A Hero with A Thousand Faces is \nnow on the Ithaki label. The Hero's Infinite Journey, the best book ever written about the strong link \nbetween mythology and human psychology, has a feature that will positively change the reader's life. \nInspired by Nice fiction, the book is the main inspiration of the Star Wars movie series in particular.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Mezopotamya Mitolojisi",bkname)||!strcmp("mezopotamya mitolojisi",bkname)||!strcmp("3",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJean Bottero, Samuel Noah Kramer\t\t\t896 Pages\t\t\t\t2.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nMEZOPOTAMYA MÝTOLOJÝSÝ\n\n");
	p("Jean Bottéro and Samuel Noah Kramer, the authors of Mesopotamian Mythology, were the first \nexperts to come to mind when it came to ancient Near Eastern civilizations. Two world-famous writers \ncompiled, translated and interpreted fifty myths from the oldest myths discovered in Mesopotamia, the \ncradle of the oldest known civilizations. In addition to being the most comprehensive and \ncomplete compilation that has been gained in Turkish, this work is a rare work in the \nworld. In the words of their authors: “Assyrian scientists have never worked on the texts of \nancient Mesopotamian myths and have achieved very positive results, but they have \nnever thought of putting all these documents together. In this way, however, they could \nbetter reveal the development of the ideas of these myths, their 'logic', the worldview and \nsensitivity they embodied in these texts. their responses are conveyed in a \nstriking manner, which still maintains its vitality today.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Eski Türk Mitolojisi",bkname)||!strcmp("eski türk mitolojisi",bkname)||!strcmp("4",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJean - Paul Roux\t\t\t158 Pages\t\t\t\t3.-");
	p("\n||******************************************************************************************************||\n");
	p("\nESKÝ TÜRK MÝTOLOJÝSÝ\n\n");
	p("It is too early to accurately and reliably outline the religions and mythologies of the ancient \nTurkish peoples. Their religions are based on the belief in a celestial god, or at least superior to \nother gods. But they also believed in superhuman powers, cared for animals, and undoubtedly \ntended to totemism. While their religions do not address the beginning and the end of the world \nmuch, they try to explain the birth of great personalities and the formation of stature. Their religions have a \ncharacteristic understanding and rich rituals of classification, but we know only a few of them. In these rituals, the \nsubject of the sacrifice plays a major role, but cleaning and taboos are also widely discussed. This religion of ancient Turkish \npeoples is about the dead and ancestors who are condemned to live or to live eternal life in another world. \nIn their religions, there are divination and magic issues, and shamanist elements are also \nfrequently encountered.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Hilekarýn Marifeti Bu Dünya",bkname)||!strcmp("hilekarýn marifeti bu dünya",bkname)||!strcmp("5",bkname)){	
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLewis Hyde\t\t\t600 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHÝLEKEARIN MARÝFETÝ BU DÜNYA\n\n");
	p("Hyde, The Trick of the Cheat In this world, he is chasing the kahraman cultural hero deceit  \nthat appears in almost every ancient mythology from Greece to Rome, Africa to America, China to India. \nIt examines the role of this vague playful figure who is captivating and disrupting, creating and demolishing, \nborder-violating and demarcating, ingenious and incompetent, intelligent and foolish. At the same time, \nPicasso, Duchamp, Ginsberg, Cage, Maxine Hong Kingston and Frederick Douglass, such as the relatively recent \npersonalities in the creative process and emancipatory gestures traces the experiences of emancipation. \nThis is a valuable handbook for those looking for creative escape from the cultural and language traps.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Mitoloji Kitabý",bkname)||!strcmp("mitoloji kitabý",bkname)||!strcmp("6",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tKolektif\t\t\t258 Pages\t\t\t\t2.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nMÝTOLOJÝ KÝTABI\n\n");
	p("Who is the cheater god Maui? What is the honey liquor of the poem and what kind of ingenuity\n does it give to its drinkers? What does ancient Egyptian mythology tell about the Underworld? This book, \nwhile answering these and similar questions, examines more than 80 myths from all \nover the world. The Book of Mythology, a competent and comprehensive study, \nis full of striking visuals and interesting stories. He brings a new approach to myths and what \nthese myths mean to the cultures that created them. From Loki and Thor to Viracocha \nand Cuhulainn, each title deals with colorful characters and their adventures. Whether you're \nnew to the topic, an enthusiastic student of traditions and myths, or just a person who likes big \nstories, you'll find a lot of things that interest you and amaze you.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Ýskandinav Mitolojisi",bkname)||!strcmp("iskandinav mitolojisi",bkname)||!strcmp("7",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPeter Andreas Munch\t\t\t272 Pages\t\t\t\t4.8-");
	p("\n||******************************************************************************************************||\n");
	p("\nÝSKANDÝNAV MÝTOLOJÝSÝ\n\n");
	p("Were mythologies purely fictitious, or were they stories of other worlds? Peter Andreas Munch, \none of the most important intellectuals of the period. While examining the emergence of many characters \nfrom Thor to Vikings, from Odin to trolls, he reveals how the beliefs and thoughts of the period \naffected today. The book is an important resource for mythology enthusiasts and researchers.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Yaratýlýþ Mitolojileri",bkname)||!strcmp("yaratýlýþ mitolojileri",bkname)||!strcmp("8",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tGönül Yonar\t\t\t27 Pages\t\t\t\t3.2-");
	p("\n||******************************************************************************************************||\n");
	p("\nYARATILIÞ MÝTOLOJÝLERÝ\n\n");
	p("In the beginning ...' This is how many stories of creation begin. We witness stories spread \nby this word in different geographies and in every corner of history. The ilk firsts bekleyen \nwaiting for us in our journey to mythologies are nothing but the dream and curiosity of reaching \nout to the origins of our humanity. Such curiosity and desire brings us to the religious, cultural \nand social dynamics of many civilizations. Gönül Yonar, after the book The Origins of Fantasy\nin Turkish Literature, deals with the mythologies of creation, a product of human effort to discover and \nunderstand his own wonders. This work, which deals with the myths of the first civilizations, the creation \nof women and the Flood incident, is of paramount importance in the six civilizations of the \nancient East in terms of showing the historical course of humanity and the idea of humanity itself.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Mitlerin Özellikleri",bkname)||!strcmp("mitlerin özellikleri",bkname)||!strcmp("9",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMircea Eliade\t\t\t270 Pages\t\t\t\t2.7-");
	p("\n||******************************************************************************************************||\n");
	p("\nMÝTLERÝN ÖZELLÝKLERÝ\n\n");
	p("	In this book, Eliade deals with various societies scattered throughout the world, where \nmyths existed until recently. If we can understand the structure and functioning of myths in these \ntraditional societies, we will illuminate a stage in the history of human thought. Because myths serve \nas models for human behavior, they add meaning and value to life. Ade Eliade is our greatest \nsource of information for modern mythologies. He is so competent in his subject that he can develop new\nperspectives. Even non-experts can transfer methodical information. ”");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Evren Yaratýlýþ ve Köken Mitleri",bkname)||!strcmp("evren yaratýlýþ ve köken mitleri",bkname)||!strcmp("10",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMahir Þanlý\t\t\t208 Pages\t\t\t\t3.9-");
	p("\n||******************************************************************************************************||\n");
	p("\nEVREN YARATILIÞ VE KÖKEN MÝTLER\n\n");
	p("Mythology is a kind of art that helps us to go beyond the chaotic flow of random events and \nto look at the essence of reality, pointing to something beyond history that has no time in human \nexistence.“- Karen Armstrong -Celtic bir is a kind of magic bag in which anything can be put into and \nout of anything… In the famous Celtic twilight, anything is possible and this is the \ntwilight of logic rather than the gods.”- R. R. Tolkien -");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Bir Yaratýlýþ Efsanesi",bkname)||!strcmp("bir yaratýlýþ efsanesi",bkname)||!strcmp("11",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tOsman Aktaþ\t\t\t223 Pages\t\t\t\t4.3-");
	p("\n||******************************************************************************************************||\n");
	p("\nBÝR YARATILIÞ EFSANESÝ\n\n");
	p("The color of the eye, under the seven suns that create seasons on the ground, was half a substance, \nhalf a soul, a place like that ... The rug was green meadow, the roof was obed from the sky dome; The sound \nis heard in the forests of secular running glaze; Bathing Oguz ... A place that he, Bengibozlar, Savruk mane white, \ndoru and al, autumn wind competing ala horses; Anadol where the mountains reach the day of change u'ydu ... Fearless in \nthe blood Turali, many young people, Thin Waist Banuçiçek, Yellow Selcen, Bush Bird Alçin'ler, Agham hey! Eyebrows bows, \nfaces were beautiful months ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Odesa Öyküleri",bkname)||!strcmp("odesa öyküleri",bkname)||!strcmp("12",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tIzak Babel\t\t\t195 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nODESA OÖYKÜLERÝ\n\n");
	p("There is no information about this book.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Iri Boynuzlu Kara Geyik Anlatýyor",bkname)||!strcmp("ýri boynuzlu kara geyik anlatýyor",bkname)||!strcmp("13",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJohn G. Neihardt\t\t\t287 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nIRI BOYNUZLU KARA GEYÝK\n\n");
	p("When the noble horse crawled in, he could hear his beating heart quickly because his nerves \nwere so tense; His heart beating rapidly, as if to wake up the old people inside. But he wasn't afraid, and after \na while he started cutting secrets. Every secret he cut off made a sound like 'pat' and it was \nlike he was going to die. But it was going well. All the glazes wide enough for her to get through \nher hips were cut. As his nerves were tightened, his knife slipped \nand stabbed him. A big, high-pitched screaming girl ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Ilkçað Gizem Tapýlarý",bkname)||!strcmp("ýlkçað gizem tapýlarý",bkname)||!strcmp("14",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tWalter Burkert\t\t\t208 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nILK GÝZEM TAPILARI\n\n");
	p("Walter Burkert, the foremost historian of the Greek language, examines the mysterious \nand mystical worship that emerged within the broad culture of the Greek and Roman people around \na thousand years ago in this comprehensive and comparative study of the lesser known aspects of \nreligious beliefs and practices of ancient Greek religion. This book is neither a history nor a study, \nbut a comparative phenomena focusing on five major worships. In describing the mysteries and \ntheir rituals, membership, organization, and dissemination, Walter Burkert shows the vast knowledge that \nwe expect from him; in addition to being sensitive and sympathetic in interpreting the \nexperience and motivation of the ascents");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Sorularla Mitoloji",bkname)||!strcmp("sorularla mitoloji",bkname)||!strcmp("15",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tDerman Bayladý\t\t\t346 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nSORULARLA MÝTOLOJÝ\n\n");
	p("EVERYTHING YOU NEED TO KNOW FROM A TO Z FOR THE GODS, EPICS AND HEROES ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Avcý Tanrýça-Artemis",bkname)||!strcmp("avcý tanrýça-artemis",bkname)||!strcmp("16",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRobert Krugmann\t\t\t64 Pages\t\t\t\t4.9-");
	p("\n||******************************************************************************************************||\n");
	p("\nAVCI TANRIÇA - ARTEMÝS\n\n");
	p("Meanwhile, Agamemnon brought the dagger closer to his daughter's neck. The king of Mycenae was used\n to taking lives. But when it comes to her own daughter ... I have to slit her throat in one move! I \ncan't let her suffer!Agamemnon closed his eyes and slashed his daughter's throat with a sharp motion of \nhis strong wrist. He opened his eyes when he heard the screams of astonishment that echoed in the big \nsquare. It was at that moment that he was shaken with a lightning strike and dropped the dagger in \nhis hand. On the altar stone was not a daughter, but a female deer with blood flowing down her throat. \nIt was Kalkhas who first recovered: The Goddess received our victim! he shouted with all his might. He spared \nour king and took his daughter to show him his good fortune, and sent this deer instead. We are saved! \nHappy for us! Long live the goddess Artemis!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Eski Yunan'da Mit ve Din",bkname)||!strcmp("eski yunan'da mit ve din",bkname)||!strcmp("17",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJean-Pierre Vernant\t\t\t111 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nESKÝ YUNAN'DA MÝT VE DÝN\n\n");
	p("Can the religion of the Greeks be considered a religion in the sense that we understand today? \nThe author's answer to this question is no, the revealed monotheistic religions should not be confused \nwith Greek polytheism. While monotheistic religions aim to provide individual salvation through the church, \nGreek polytheism acts on the political boundaries of the ancient city. By settling in the institutions of cities, \nreligion leads to a worldly life: it aims to see citizens as beings who are completely in this world, not as \npeople whose salvation will be provided in another world. Religion throws sectarian currents and margins \nout of their own field, and philosophy is embraced by them.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Sir Nigel",bkname)||!strcmp("sir nigel",bkname)||!strcmp("18",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tSir Arthur Conan Doyle\t\t\t352 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nSÝR NÝGEL\n\n");
	p("The lion-hearted Nigel, whose blood had circulated through hundreds of brave soldiers in \nhis veins, was only twenty-two years old. Today he spent his hawks breeding or training his dogs living \nin the ground-floor hall of the mansion with the family. In those times, life was mysterious \nand intriguing. Mankind was walking with fear and seriousness, both in the heaven above and in \nthe very near point of hell under his feet. God's presence was felt everywhere: in the rainbow, \nin the comet, in the storm, in the wind… In the meantime, the devil was not only giving away \nhis anger to the earth. In the twilight of the night, he was hiding behind hedge hedges. \nHis laughter echoed through the night. He was clawing at the dying sinner, \nattacking the un-baptized baby, and twisting the legs of a wounded man.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Adem ile Havva",bkname)||!strcmp("adem ile havva",bkname)||!strcmp("19",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAlbert Hirsch\t\t\t64 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nADEM ÝLE HAVVA\n\n");
	p("The next morning Adam woke up with the first light of the day and stretched. He had slept so sweetly! \nWhen Eve reached for her hand to caress her hair, she saw that her husband was not there. I wonder \nwhere? he thought. Where could he have gone? Adam stood up from his bed ... As soon as he wanted to \nwash his face in the water of the nearby clear river, he suddenly felt his blood frozen. Eve was \nstanding near the forbidden tree. He had one of the fruits of the tree. Red, beautiful, \nattractive, desirable fruit ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Zeus'un Oðlu Herkül",bkname)||!strcmp("zeus'un oðlu herkül",bkname)||!strcmp("20",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRobert Krugmann\t\t\t76 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nZEUS'UN OÐLU HERKÜL\n\n");
	p("Suddenly something strange happened. Megara's face began to change slowly. His beautiful chestnut \nhair boomed, his cherry lips shining through his white teeth tingling, sharpened, and a cruel glance appeared \nin his clever eyes. His beloved wife turned into a terrible lion before Hercules' eyes ... Three wolves \nappeared next to the lion. They were licking their lips with their pink tongues, throwing deadly glances \naround them with their cold eyes ... Hercules drew a sword screaming and attacking wild animals. He tore them \napart in a blink of an eye. Funny, he was thinking, why didn't they try to attack me?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Kur'an",bkname)||!strcmp("kur'an",bkname)||!strcmp("21",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHüseyin Atay\t\t\t640 Pages\t\t\t\t4.4-");
	p("\n||******************************************************************************************************||\n");
	p("\nKUR'AN\n\n");
	p("Muhammed Hamdi was born in 1878 in the Elmali district of Antalya. He completed his \nprimary and secondary education and his memory in Elmali. He went to Istanbul with his uncle Mustafa \nEfendi to improve his education and settled in Küçük Ayasofya Madrasa. He received an authorization \nfrom Mahmud Hamdi Efendi from Kayseri, where he continued his education at Beyazýt Mosque. After that \nhis teacher Büyük Hamdi became known as Küçük Hamdi. In the meantime, he graduated from Mekteb-iNüvvâb \nwith first place. He learned literature, philosophy and music by his own efforts. Studies to \ndevelop a legitimacy model appropriate to Islam instead of a legitimacy in Europemade.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Dinler Tarihi 101",bkname)||!strcmp("dinler tarihi 101",bkname)||!strcmp("22",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPeter Archer\t\t\t272 Pages\t\t\t\t3.6-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÝNLER TARÝHÝ\n\n");
	p("While there are so many civilizations and religions in the world, it is not easy to remember \nthe important names, rules and dates of all of them. The History of Religions 101 tells the \nstory of the sacred stories, the lives of the prophets and how religious figures have \ntaken place in history, without going into dull details. From the celestial religions to the \nmystical religions; everything you wonder about prophets, holy books and important \nreligious leadersHistory of Religions is in 101!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Tanrýlarýn Mucizeleri",bkname)||!strcmp("tanrýlarýn mucizeleri",bkname)||!strcmp("23",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErich Von Daniken\t\t\t432 Pages\t\t\t\t4.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nTANRILARIN MUCÝZELERÝ\n\n");
	p("The Writer of the Cars of Gods Reaching Millions of Readers.Erich von Daniken is waging \nwar against the miracles of the gods that have been accepted as real for years. Pursuing the mysterious \nevents alleged to have taken place in dozens of different cities, Däniken examines many vision \nevents that have helped establish the social foundations of Christianity. The saints and prophets \nwho appear to the “chosen” people, the structures that disappeared and the unexplained natural \nevents ... Daniken goes to these places of sight, which have survived to the present day and \nexplores the backdrop of these miracles. Is it really a miracle or a scientific explanation to the \nwitnesses, the Miracles of the Gods, the bold questions of Erich von Däniken, and the fluent \nnarration that will make you question everything you know.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Dinler Tarihine Giriþ",bkname)||!strcmp("dinler tarihine giriþ",bkname)||!strcmp("24",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMircea Eliade\t\t\t Pages504\t\t\t\t2.9-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÝNLER TARÝHÝNE GÝRÝÞ\n\n");
	p("");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Kudüs'ün Gizemli Tarihi",bkname)||!strcmp("kudüs'ün gizemli tarihi",bkname)||!strcmp("25",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÖmer Faruk Harman, Pelin Çift\t\t\t288 Pages\t\t\t\t3.4-");
	p("\n||******************************************************************************************************||\n");
	p("\nKÜDÜS'ÜN GÝZEMLÝ TARÝHÝ\n\n");
	p("Why is Jerusalem holy for the three heavenly religions? What place did Muhammad ascend \nto the heavens in Jerusalem? What secrets do Jesus hold? Where do they \nbelieve that Christ ascends to heaven and where he will come?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Evanjelizm",bkname)||!strcmp("evanjelizm",bkname)||!strcmp("26",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRamazan Kurtoðlu\t\t\t608 Pages\t\t\t\t3.0-");
	p("\n||******************************************************************************************************||\n");
	p("\nEVANJELÝZM\n\n");
	p("Today we are confronted with a notion that has never been found in history: different \nbeliefs are concentrated on the same purpose. The Messiah, which the Jews of King David descended, and \nespecially the Evangelical Christians, Jesus Christ, was the head of the 12th imam, the lost \nimam expected by the Muslims in the Shiite Islamic faith led by Iran. Jesus and some Sunni Muslim sects \nand communities await the Mahdi and the Prophet. The strong beliefs and speculative political \nattractions that refer to the first quarter of the 21st century for the coming of \nJesus are surprisingly overlapping. How come all heavenly religions are waiting for the same \nsavior for separate purposes? We don't judge who believes what. But how can these hundreds \nof millions of different faiths agree in some way? Another side of the business is becoming increasingly \npublic. The above-mentioned expectation of the Messiah / Mahdi becomes such a social hysteria that all \nparties are calling on God to come to the end of the day. You will read the story of the rise of this \ndenomination from the birth of this sect to the present in the light of historical facts in this \nera where it is not possible to predict how this hysteresis evolved from \nevangelism can lead to grave consequences.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("allah'ýn parmak izi",bkname)||!strcmp("Allah'ýn Parmak Ýzi",bkname)||!strcmp("27",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tEmre Dorman\t\t\t176 Pages\t\t\t\t3.5-");
	p("\n||******************************************************************************************************||\n");
	p("\nALLAH'IN PARMAK ÝZÝ\n\n");
	p("Many verses in the Qur'an invite people to reflect on the proofs of creation, both in their \nown selves and in the outside world. At the same time, the mother's womb formations to the depths \nof space in many issues that make people admiring himself. If God created the Universe, the traces \nof creation must be visible in the Universe. Therefore, science should be seen as an important tool to \nbetter understand the art of Allah. This claim does not reflect the fact that there is a \nconflict between religion and science, the contributions of the Muslim scientists who have \nwritten their names in history with their scientific studies and the contribution of Muslims to \nscience, you will witness the false miracles of religion, not Islam, and the scientific \nmiracles of the Qur'an, the last guidance of humanity.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Kutsal ve Kutsal Dýþý",bkname)||!strcmp("kutsal ve kutsal dýþý",bkname)||!strcmp("28",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMircea Eliade\t\t\t260 Pages\t\t\t\t1.-");
	p("\n||******************************************************************************************************||\n");
	p("\nKUTSAL VS KUTSAL DIÞI\n\n");
	p("According to Eliade, even today's people who claim to live in an entirely unholy world \nare still unconsciously nourished by the memory of the holy. Eliade traces the manifestations of \nthe sacred in space, time, nature and the cosmos, from primitive man to modern times. In doing so, \nhe compares all human experiences of religious and non-religious. Anyone who wants to explore \nthe potential dimensions of human existence should read. An exciting introduction \nto the religious life of human beings.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Paganizm-1",bkname)||!strcmp("paganizm-1",bkname)||!strcmp("29",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErhan Altunay\t\t\t376 Pages\t\t\t\t2.6-");
	p("\n||******************************************************************************************************||\n");
	p("\nPAGANÝZM-1\n\n");
	p("Turkey has been increasing interest in paganism. There are, of course, many reasons for this. \nEspecially the internet and computer games ... Easily accessible to the pagan groups on the internet \ndue to the influence of pagan personalities in computer games intensifies the interest in paganism. \nThis legacy has begun to be understood without being destroyed by today's capitalism. The recent political \ndevelopments and interest in esotericism arouse great curiosity towards paganism.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Dinin Kýsa Tarihi",bkname)||!strcmp("dinin kýsa tarihi",bkname)||!strcmp("30",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRichard Holloway\t\t\t342 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÝNÝN KISA TARÝHÝ\n\n");
	p("Holloway explores where religious belief comes from, extending beyond Judaism, Islam, \nChristianity, Buddhism and Hinduism, the search for meaning throughout history, the concepts of \nScientology and Creationism, today's interesting concepts, the conflict between religious people and \nsecularists and much more. A guide who understands the eternal importance of faith and its power from \nancient times to the present, but also demonstrates the differences ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Unutulan Hakikat",bkname)||!strcmp("unutulan hakikat",bkname)||!strcmp("31",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tHuston Smith, David Ray Griffin, Latif Boyacý\t\t\t388 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nUNUTULAN HAKÝKAT\n\n");
	p("Reason and Intuition Duality in Psychology and Religion: The Case of Imam Rabbani\nRobert Ornstein is a psychologist and thinker who tried to introduce Turkish-Islamic culture to international \nconsciousness. Imam Rabbanî is an Islamic scholar who was more interested in the relationship \nbetween reason and intuition, which is the basic problematic of Ornstein psychology in the categorical sense, \nas a rare figure of Islamic science tradition. The book examines the method of thinking of Imam \nRabbani through the letters borrowed from the psychology of Ornstein.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Seçme Dini Hikayeler",bkname)||!strcmp("seçme dini hikayeler",bkname)||!strcmp("32",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMustafa Necati Bursalý\t\t\t412 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nSEÇME DÝNÝ HÝKAYELER\n\n");
	p("Aziz's wife Züleyha'nýn Yusuf's love to what kind of love was it? In the Qur'an, the \nwife of the saint Züleyha 's Joseph's prophet to the love of þegheheh hubben is referred to \nas ÞeðeFeha Hubben What was the dream of the Egyptian king? What was the dream of the king of\n Egypt? ð edðasu ehlam açýk and other sections of the life of the prophet Joseph was presented. adýna All in the name \nof the prophet Yusuf to better understand and understand ... ");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Din Nedir?",bkname)||!strcmp("din nedir?",bkname)||!strcmp("33",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLev Nikolayeviç Tolstoy\t\t\t192 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nDÝN NEDÝR?\n\n");
	p("According to the understanding of today's readers, religion is not necessary: science will \nreplace it, or it has already taken place. Yet, as in the past, not a single human society or \neven a sane person has ever lived atheist and cannot. I say a sane person, because a sane person can live \nungodly like an animal. A sane being cannot live without religion; for it is only and only religion \nthat truly guides him, first and foremost, what to do. Since religion is given to man as a necessity of \ncreation, no sane person can live without religion.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Tevhid Risalesi",bkname)||!strcmp("tevhid risalesi",bkname)||!strcmp("34",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÝbn Teymiyye\t\t\t152 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nTEVHÝD RÝSALESÝ\n\n");
	p("The basic thesis of the Qur'an is the principle of ev tawhîd yani, that is, bir \nunity üyle in all aspects of Allah, and that it is unique from spouses and partners. When putting \nforward, one of the Islamic thinkers, Ibn Taymiyyah, the prominent figure of Salaf thought, views \nhis views on the attributes and attributes of Allah; While emphasizing the concept of God, he insistently \nemphasizes this point. The book is a concise statement of the author's opinion \nregarding the mention of tawheed and adjectives.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Musul Komplosu",bkname)||!strcmp("musul komplosu",bkname)||!strcmp("35",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMim Kemal Öke\t\t\t430 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nMUSUL KOMPLOSU\n\n");
	p("Mosul: The entrance gate of the Turk from Atayurt to Anayurt ... The biggest fight on this land \ntook place between 1918 and 1926. Imperialism, in its own interest, put forth all its power to break \nMosul, which he called Kür Southern Kurdistan den, from the Turks. In this context, the Mosul Question \nhas gained a dimension which is intertwined with the Kurdish Question. Thus, provocations, \nriots, conflicts followed each other. While he reads that chain of conspiracies written by \nMim Kem Öke for the first time, he will be amazed at how similar the past is \nto the past and maybe Does history repeat again? You will not get yourself to say.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Ayna Ýçinde Ayna",bkname)||!strcmp("ayna içinde ayna",bkname)||!strcmp("36",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tÖmer Evren Tanyaþ\t\t\t160 Pages\t\t\t\t2.-");
	p("\n||******************************************************************************************************||\n");
	p("\nAYNA ÝÇÝNDE AYNA\n\n");
	p("Returning to the past and trying to find the source of my desire to write this book; \nI have come across so many reasons! ... I wanted to be one of those who managed to connect this beginning \nwith one reason. I just missed the simplicity of starting out for a simple reason ... appeared: \nthe information we call intuition, whether the mind or the heart enters through \nthe door of perception, means the comprehension of a whole, the discovery of \na connection without any means.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Kerbela ve Matem",bkname)||!strcmp("kerbela ve matem",bkname)||!strcmp("37",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Adil Ali Atalay Vaktidolu\t\t\t428 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nKERBELA MATEM\n\n");
	p("I figured you gave us every piece of equipment we needed to get to know you. You put in your \nconscience to distinguish between right and wrong, and foresee our face to blush when you do \nbad things. You put your life's unchanging rules and you wait until you die without any interference. \nYou created us in such a way that you can glorify us with good deeds and disdain with bad behavior.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Firavun Mantýðý",bkname)||!strcmp("firavun mantýðý",bkname)||!strcmp("38",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRecep Öztürk\t\t\t304 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nFÝRAVUN MANTIÐI\n\n");
	p("It was my grandmother who told me first, and she said a lot of nonsense. Then I listened \nto you from the mosque official. When I overcame my grandmother and the imam of the neighborhood, I kept \nreading the quantities that tried to patch the obsessions in her head, \nsaying she devoted herself to religion.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Yusuf Olabilmek",bkname)||!strcmp("yusuf olabilmek",bkname)||!strcmp("39",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAli Sarsu\t\t\t163 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nYUSUF OLABÝLMEK\n\n");
	p("Why is the story of Joseph in the Qur'an the most beautiful of the stories? What lay at the \nbasis of his brothers throwing Joseph into the well? Did the prophet Yusuf also desire tended \nto his wife / saint? Therefore, is it possible for a purified prophet like Yusuf to tend to adultery, \nwhich is what Allah calls ugly, as a wife of a saint / Züleyha in the Muslim world? What is \nthe reason for this erroneous perception? The verse, why not reflected as\n necessary to people? Hemmet bihi and");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}
	else if(!strcmp("Akýl ve Sezgi",bkname)||!strcmp(" akýl ve sezgi",bkname)||!strcmp("40",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tMehmet Atalay\t\t\t512 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nAKIL VE SEZGÝ\n\n");
	p("Robert Ornstein is a psychologist and thinker who tried to introduce Turkish-Islamic culture to \ninternational consciousness. Imam Rabbanî is an Islamic scholar who was more interested \nin the relationship between reason and intuition, which is the basic problematic of Ornstein \npsychology in the categorical sense, as a rare figure of Islamic science tradition. The book \nexamines the method of thinking of Imam Rabbani through the letters \nborrowed from the psychology of Ornstein.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF \n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}

else if(!strcmp(bkname,"0")){
	a=0;
	system("cls");
}




	
}
else if(!strcmp("Children Books",m)||!strcmp("6",m)){	
system("cls");
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
p("                                                         --CHILDREN BOOKS--\n");
p("1)Wrecking Ball: Diary of a Wimpy Kid\n2)Brain Games For Clever Kids\n3)Dear Zoo : A Lift-the-flap Book\n4)Look Inside Your Body\n5)Roald Dahl's Marvellous Joke Book24)\n6)The Wonderful Things You Will Be\n7)Harry Potter and the Goblet of Fire\n8)Have You Filled A Bucket Today?\n9)The Dinky Donkey\n10)Guinness World Records 2020 \n");	
p("11)The Very Hungry Caterpillar\n12)Dear Santa\n13)The 13-Storey Treehouse\n14)Dog Man 1-6 HB Boxed Set\n15)Giraffes Can't Dance\n16)Hilekarýn Marifeti Bu Dünya\n17)Yusuf Olabilmek\n18)Bir Yaratýlýþ Efsanesi\n19)Tonyukuk\n20)Farewell Summer\n");
p("21)Nineteen Eighty-four\n22)Fahrenheit 451\n23)The Martian Chronicles\n24)Eleanor Oliphant is Completely Fine\n25)The Jolly Christmas Postman\n26)Stick Man\27)The 117 Storey Treehouse\n28)The Secret Commonwealth: The Book of Dust Volume Two\n29)Look Inside Things That Go\n30)Harry Potter Box Set\n");
p("31)Scythe\n32)Thunderhead\n33)Dry\n34)The Hand, the Eye and the Heart\n35)Small Spaces\n36)I Will Not Be Erased\n37)The Quiet at the End of the World\n38)The Next Together\n39)The Last Beginning\n40)The Loneliest Girl in the Universe\n");

p("\nIf you Satisfya enter '1' and  you want to return the Home Page enter '0':\n");


g(bkname);

	if(!strcmp("Wrecking Ball: Diary of a Wimpy Kid",bkname)||!strcmp("wrecking ball: diary of a wimpy kid",bkname)||!strcmp("1",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Jeff Kinney\t\t\t\t224 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nWrecking Ball: Diary of a Wimpy Kid\n\n");
	p("An unexpected inheritance gives the Heffley family a chance to make major improvements to their home.\nBut they soon find that construction isn't all it's cracked up to be. When things get rough, will the\nHeffleys be able to stay...or will they be forced to move?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A61\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	p("\nIf you don't Satisfya and also you want to return the Home Page enter '0':\n");	
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Brain Games For Clever Kids",bkname)||!strcmp("brain games for clever kids",bkname)||!strcmp("2",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tGareth Moore\t\t\t\t192 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nBrain Games For Clever Kids\n\n");
	p("Brain Games for Clever Kids is a fantastic bestselling puzzle book, brimming with memory, word and\nnumber workouts for the cleverest of kids! Including battleships and mind-bending spot the differences\nto Japanese puzzles including hanjie, kakuro, futoshiki, sudoku and lots more.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A62\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("dear zoo : a lift-the-flap book",bkname)||!strcmp("Dear Zoo : A Lift-the-flap Book",bkname)||!strcmp("3",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Rod Campbell\t\t\t\t18 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nDear Zoo : A Lift-the-flap Book\n\n");
	p("Rod Campbell's classic lift-the-flap book Dear Zoo has been a firm favorite with toddlers and\nparents alike ever since it was first published in 1982. Young readers love lifting the flaps to discover\nthe animals the zoo has sent--a monkey, a lion, and even an elephant! But will they ever find the perfect pet?\nWith bright, bold artwork, a catchy refrain, and a whole host of favorite animals, Dear Zoo is\na must for every child's bookshelf.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A63\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}


	else if(!strcmp("Look Inside Your Body",bkname)||!strcmp("look inside your body",bkname)||!strcmp("4",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLouie Stowell\t\t\t\t14 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nLook Inside Your Body\n\n");
	p("This is a wonderful flap book introducing children to the way their own bodies work in a fun and\ninformative way. It is a new, smaller format of the Look Inside series, perfect for little fingers.\nIt is full of surprises to keep enquiring minds entertained, including flaps beneath\nflaps and a cheeky peek inside a toilet cubicle. Young readers' minds will boggle as\nthey learn about how their brains work, what happens when they eat, how their lungs\nuse oxygen and much more.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A64\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Roald Dahl's Marvellous Joke Book",bkname)||!strcmp("roald dahl's marvellous joke book",bkname)||!strcmp("5",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRoald Dahl\t\t\t\t128 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nRoald Dahl's Marvellous Joke Book\n\n");
	p("Based on Roald Dahl's most famous characters you will be chortling away with Matilda, Charlie, George,\nThe BFG, James and many more! Roald Dahl was full of fun and mischief, and LOVED all kinds of\njokes- the sillier the better, like chocolate-covered chickens to grizzly, grouchy grandmas. This\nside-splitting book includes his own 'knock-knock' jokes, keeping all practising jokesters\namused for hours!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A65\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
	p("\nIf you don't Satisfya and also you want to return the Home Page enter '0':\n");	
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("The Wonderful Things You Will Be",bkname)||!strcmp("The Wonderful Things You Will Be",bkname)||!strcmp("6",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tEmily Winfield Martin\t\t\t36 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Wonderful Things You Will Be\n\n");
	p("From brave and bold to creative and clever, Emily Winfield Martin's rhythmic rhyme expresses all the\nloving things that parents think of when they look at their children. With beautiful, and sometimes\nhumorous, illustrations, and a clever gatefold with kids in costumes, this is a book grown-ups\nwill love reading over and over to kids-both young and old. A great gift for any occasion, but a\nspecial stand-out for baby showers, birthdays, and graduation. The Wonderful Things You Will\nBe has a loving and truthful message that will endure for lifetimes.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A66\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("harry potter and the goblet of fire : illustrated edition",bkname)||!strcmp("Harry Potter and the Goblet of Fire : Illustrated Edition",bkname)||!strcmp("7",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t J.K. Rowling , Illustrated by  Jim Kay\t\t464 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHarry Potter and the Goblet of Fire : Illustrated Edition\n\n");
	p("Dragons! Daring! Danger! The first fully illustrated edition of Harry Potter and the Goblet of Fire is\nan extraordinary creative achievement by two extraordinary talents. Jim Kay's inspired reimagining\nof J.K. Rowling's classic series has captured a devoted following worldwide, and the drama\njust gets bigger as the series progresses. With over 150 illustrations, Jim Kay's unique vision\ndelivers breathtaking scenes and unforgettable characters - including fan favourites Cedric\nDiggory, Fleur Delacour and Viktor Krum illustrated by Jim Kay for the first time.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A67\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Have You Filled A Bucket Today?",bkname)||!strcmp("have you filled a bucket today?",bkname)||!strcmp("8",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tCarol McCloud , Illustrated by  David Messing\t  32 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHave You Filled A Bucket Today?\n\n");
	p("Children are not the only ones that need to learn how to be truly happy. It's all in the bucket,\nthat invisible bucket that follows you everywhere... teaches young readers valuable lessons about\ngiving, sharing, and caring. This guide to daily happiness, though, is not just for kids. We all\nneed reminders of the benefits of positive thinking and positive behavior. It's an important lesson\nto teach and remind us all . . . that showing kindness and appreciation of others goes a long way to\nmaking this world a happier place for everyone, including ourselves. A classic tale, beautifully\ntold and beautifully shared. --Emily-Jane Hills Orford, Readers' Favorite Book Reviews");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A68\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("The Dinky Donkey",bkname)||!strcmp("the dinky donkey",bkname)||!strcmp("9",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Craig Smith , Illustrated by  Katz Cowley\t\t24 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Dinky Donkey\n\n");
	p("The laugh-out-loud follow-up to the viral sensation THE WONKY DONKEY is finally here! The Wonky\nDonkey has a daughter in this hilarious picture book sequel to the runaway hit.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF 69\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Guinness World Records 2020 ",bkname)||!strcmp("guinness world records 2020 ",bkname)||!strcmp("10",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tPrepared for publication by  Guinness World Records \t256 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nGuinness World Records 2020 \n\n");
	p("Celebrate the dawning of a new decade with the fully revised Guinness World Records 2020. To kick off\nthe '20s, we've created an electrifying new cover and curated a record-breaking edition packaged with\nthousands of new, updated and classic superlatives, hundreds of never-before-seen images, and\na selection of eye-opening photo-composites that put a new spin on record-breaking...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF A70\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}


	else if(!strcmp("The Very Hungry Caterpillar",bkname)||!strcmp("The Very Hungry Caterpillar",bkname)||!strcmp("11",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Eric Carle      \t\t\t24 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Very Hungry Caterpillar\n\n");
	p("The Very Hungry Caterpillar has sold over 45 million copies worldwide. Its vivid and colourful\ncollage illustrations and its deceptively simple, hopeful story have helped it become the most\nread children's book in Britain. With its die-cut pages and finger-sized holes to\nexplore, this is a richly satisfying book for babies and toddlers.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B61\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Dear Santa",bkname)||!strcmp("dear santa",bkname)||!strcmp("12",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Rod Campbell\t\t\t\t16 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nDear Santa\n\n");
	p("Lift the flaps to unwrap a Christmas present on every page of Dear Santa, a festive book by Rod\nCampbell, creator of the preschool classic Dear Zoo. Toddlers will love lifting the flaps to discover\nwhat Father Christmas has sent, and finding the perfect present at the end.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B62\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	


	else if(!strcmp("The 13-Storey Treehouse",bkname)||!strcmp("the 13-storey treehouse",bkname)||!strcmp("13",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAndy Griffiths , Illustrated by  Terry Denton \t256 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe 13-Storey Treehouse\n\n");
	p("The 13-Storey Treehouse is the first book in Andy Griffiths and Terry Denton's wacky treehouse\nadventures, where the laugh-out-loud story is told through a combination of text and fantastic\ncartoon-style illustrations.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B63\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Dog Man 1-6 HB Boxed Set",bkname)||!strcmp("dog man 1-6 hb boxed set",bkname)||!strcmp("14",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tDav Pilkey\t\t\t\t--------- Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nDog Man 1-6 HB Boxed Set\n\n");
	p("Dog Man is the crime-biting canine who is part dog, part man and ALL HERO! This six book set includes\nDog Man, Dog Man Unleashed, Tale of Two Kitties, Dog Man and Cat Kid, Lord of the Fleas\nand Brawl of the Wild.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B64\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("Giraffes Can't Dance",bkname)||!strcmp("giraffes can't dance",bkname)||!strcmp("15",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Giles Andreae , Illustrated by  Guy Parker-Rees \t32 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nGiraffes Can't Dance\n\n");
	p("Number One bestseller Giraffes Can't Dance from author Giles Andreae has been delighting children\nfor over 15 years. Gerald the tall giraffe would love to join in with the other animals at the\nJungle Dance, but everyone knows that giraffes can't dance . . . or can they?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B65\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	

	else if(!strcmp("Hilekarýn Marifeti Bu Dünya",bkname)||!strcmp("hilekarýn marifeti bu dünya",bkname)||!strcmp("16",bkname)){	
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLewis Hyde\t\t\t600 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHÝLEKEARIN MARÝFETÝ BU DÜNYA\n\n");
	p("Hyde, The Trick of the Cheat In this world, he is chasing the kahraman cultural hero deceit  \nthat appears in almost every ancient mythology from Greece to Rome, Africa to America, China to India. \nIt examines the role of this vague playful figure who is captivating and disrupting, creating and demolishing, \nborder-violating and demarcating, ingenious and incompetent, intelligent and foolish. At the same time, \nPicasso, Duchamp, Ginsberg, Cage, Maxine Hong Kingston and Frederick Douglass, such as the relatively recent \npersonalities in the creative process and emancipatory gestures traces the experiences of emancipation. \nThis is a valuable handbook for those looking for creative escape from the cultural and language traps.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B66\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}

	else if(!strcmp("Yusuf Olabilmek",bkname)||!strcmp("yusuf olabilmek",bkname)||!strcmp("17",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tAli Sarsu\t\t\t163 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nYUSUF OLABÝLMEK\n\n");
	p("Why is the story of Joseph in the Qur'an the most beautiful of the stories? What lay at the \nbasis of his brothers throwing Joseph into the well? Did the prophet Yusuf also desire tended \nto his wife / saint? Therefore, is it possible for a purified prophet like Yusuf to tend to adultery, \nwhich is what Allah calls ugly, as a wife of a saint / Züleyha in the Muslim world? What is \nthe reason for this erroneous perception? The verse, why not reflected as\n necessary to people? Hemmet bihi and");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B67\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}
	else if(!strcmp("Bir Yaratýlýþ Efsanesi",bkname)||!strcmp("bir yaratýlýþ efsanesi",bkname)||!strcmp("18",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tOsman Aktaþ\t\t\t223 Pages\t\t\t\t4.3-");
	p("\n||******************************************************************************************************||\n");
	p("\nBÝR YARATILIÞ EFSANESÝ\n\n");
	p("The color of the eye, under the seven suns that create seasons on the ground, was half a substance, \nhalf a soul, a place like that ... The rug was green meadow, the roof was obed from the sky dome; The sound \nis heard in the forests of secular running glaze; Bathing Oguz ... A place that he, Bengibozlar, Savruk mane white, \ndoru and al, autumn wind competing ala horses; Anadol where the mountains reach the day of change u'ydu ... Fearless in \nthe blood Turali, many young people, Thin Waist Banuçiçek, Yellow Selcen, Bush Bird Alçin'ler, Agham hey! Eyebrows bows, \nfaces were beautiful months ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B68\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
	}

else if(!strcmp("Tonyukuk",bkname)||!strcmp("tonyukuk",bkname)||!strcmp("19",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tErhan Aydýn\t\t\t224 Pages\t\t\t\t5.0");
	p("\n||******************************************************************************************************||\n");
	p("\nTonyukuk\n\n");
	p("Of the Turkish runic letters in which the Turkish name is mentioned for the first time,\nTonyukuk is undoubtedly the most talked about. This inscription, which comes from the mind\nand language of Tonyukuk himself, is in a very important position not only because of\nthe historical events, but also because of his contributions to the Turkish language and culture.\nThe Tonyukuk inscription has generally been studied by language researchers since its inception.\nIn particular, history researchers have focused on who Tonyukuk is based on info");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B69\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);	
}

	else if(!strcmp("Farewell Summer",bkname)||!strcmp("farewell summer",bkname)||!strcmp("20",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t178 Pages\t\t\t\t\t4.07");
	p("\n||******************************************************************************************************||\n");
	p("\nFAREWELL SUMMER\n\n");
	p("In a summer that refuses to end, in the deceiving warmth of earliest October, civil war\nhas come to Green Town, Illinois. It is the age-old conflict: the young against the elderly, for\ncontrol of the clock that ticks their lives ever forward. The first cap-pistol shot heard 'round\nthe town is dead accurate, felling an old man in his tracks, compelling town elder and school board\ndespot Mr. Calvin C. Quartermain to marshal his graying forces and declare total war on the assassin,\nthirteen-year-old Douglas Spaudling, and his downy-checked cohorts. Doug and his cronies,\nhowever, are most worthy adversaries who should not be underestimated, as they plan and execute daring\ncampaigns-matching old Quartermain's experience and cunning with their youthful enthusiasm and\ndevil-may-care determination to hold on forever to childhood's summer. Yet time must ultimately be\nthe victor, with valuable revelations for those on both sides of the conflicts. And life waits in\nambush to assail Doug Spaulding with its powerful mysteries-the irresistible ascent\nof manhood, the sweet surrender to a first kiss");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF B70\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);	
}

else if(!strcmp("Nineteen Eighty-four",bkname)||!strcmp("nineteen eighty-four",bkname)||!strcmp("21",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tGeorge Orwell\t\t\t\t336 Pages\t\t\t\t\t4.54");
	p("\n||******************************************************************************************************||\n");
	p("\nNINETEEN EIGHTY-FOUR\n\n");
	p("The book is set in 1984 in Oceania, one of three perpetually warring totalitarian states\n(the other two are Eurasia and Eastasia). Oceania is governed by the all-controlling Party, which has\nbrainwashed the population into unthinking obedience to its leader, Big Brother. The Party has created\na propagandistic language known as Newspeak, which is designed to limit free thought and promote the\nParty’s doctrines. Its words include doublethink (belief in contradictory ideas simultaneously), which is\nreflected in the Party’s slogans: “War is peace,” “Freedom is slavery,” and “Ignorance is strength.” The\nParty maintains control through the Thought Police and continual surveillance. The book’s hero,\nWinston Smith, is a minor party functionary living in a London that is still shattered by a nuclear\nwar that took place not long after World War II. He belongs to the Outer Party, and his job is to rewrite\nhistory in the Ministry of Truth, bringing it in line with current political thinking. However, Winston’s\nlonging for truth and decency leads him to secretly rebel against the government. He embarks on a forbidden\naffair with Julia, a like-minded woman, and they rent a room in a neighbourhood populated by Proles\n(short for proletariats). Winston also becomes increasingly interested in the Brotherhood, a group of\ndissenters. Unbeknownst to Winston and Julia, however, they are being watched closely (ubiquitous posters\nthroughout the city warn residents that“Big Brother is watching you.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C61\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
		
}
	else if(!strcmp("Fahrenheit 451",bkname)||!strcmp("fahrenheit 451",bkname)||!strcmp("22",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t256 Pages\t\t\t\t\t4.76");
	p("\n||******************************************************************************************************||\n");
	p("\nFAHRENHEIT 451\n\n");
	p("When the novel begins, fireman Guy Montag is burning a hidden collection of books. He enjoys\nthe experience; it is 'a pleasure to burn.' After finishing his shift, he leaves the firehouse\nand goes home. On the way he meets a neighbor, a young girl named Clarisse McClellan. Clarisse\ntells Montag that she is 'crazy' and she asks Montag many questions. After they part, Montag\nfinds himself disturbed by the encounter. Clarisse has forced him to think about his life instead\nof simply offering superficial responses to her questions. At home, Montag discovers his wife,\nMildred, unconscious from an overdose of sleeping pills. Montag calls for help and two technicians\narrive to pump Mildred's stomach and perform a blood transfusion. They tell Montag that they\nno longer send doctors because there are so many overdoses. The next day, Mildred claims to have\nno memory of the overdose, believing she went to a wild party and woke up hungover. Montag is disturbed\nby her cheer and her inability to engage with what happened. Montag continues to meet Clarisse almost every\nnight for talks. Clarisse tells him that she is sent to therapy because she does not enjoy the normal activities\nof life and prefers to be outside and to have conversations. Some weeks later Clarisse suddenly stops meeting\nhim, and Montag is saddened and alarmed.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C62\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}
	else if(!strcmp("The Martian Chronicles ",bkname)||!strcmp("the martian chronicles",bkname)||!strcmp("23",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRay Bradbury\t\t\t\t320 Pages\t\t\t\t\t4.45");
	p("\n||******************************************************************************************************||\n");
	p("\nTHE MARTÝAN CHRONICLES\n\n");
	p("A Martian woman has dreams of a rocket coming down from the sky, containing a light-skinned, blue-eyed\ncreature named Nathaniel York. Her husband is weary, and when the rocket lands, he shoots the\nmen. All over Mars, people begin to hum Earth tunes and have strange dreams. When a second rocket lands, the\nastronauts get out and explore. They say they are from Earth, but everyone thinks they are crazy\npeople who have hallucinated their rocket. Thus, they are all shot by a psychologist. Meanwhile, on\nEarth, a crazed taxpayer tries to board the third rocket to Mars, but he is denied. When it lands,\nthe astronauts find themselves in an ideal small American town. They meet their dead relatives and\nsplit up to have dinner with lost parents and brothers.Captain John Black goes to bed next to his\nlong-lost brother, only to realize that it is probably all a Martian trap. His 'brother' kills him\nbefore he can leave the room. A year later, a fourth expedition lands, and it is successful.\nAlmost all the Martians have died of chicken pox, apparently acquired from one of the previous expeditions.\nCaptain Wilder lets his men drink and dance, but this angers the archaeologist in the crew, Jeff Spender.\nSpender feels humbled by the great Martian civilization and wants the rest of the crew to be dignified.\nHe goescrazy and tries to kill the crew; Wilder reasons with him and is somewhat sympathetic,\nbut finally has to shoot him.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C63\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}


	else if(!strcmp("eleanor oliphant is completely fine",bkname)||!strcmp("Eleanor Oliphant is Completely Fine",bkname)||!strcmp("24",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Gail Honeyman\t\t\t400 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nEleanor Oliphant is Completely Fine\n\n");
	p("One simple act of kindness is about to shatter the walls Eleanor has built around herself. Now she must\nlearn how to navigate the world that everyone else seems to take for granted - while searching\nfor the courage to face the dark corners she's avoided all her life.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C64\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("the jolly christmas postman",bkname)||!strcmp("The Jolly Christmas Postman",bkname)||!strcmp("25",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Allan Ahlberg , By (author)  Janet Ahlberg\t52 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Jolly Christmas Postman\n\n");
	p("It's Christmas Eve and the Jolly Postman is delivering greetings to everyone's favourite fairy-tale\ncharacters. He has a card for Baby Bear, a game for Red Riding Hood, a get-well jigsaw for\npoor Humpty Dumpty and lots more packages to deliver!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C65\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,rename,d);
}	


	else if(!strcmp("Stick Man",bkname)||!strcmp("stick man",bkname)||!strcmp("26",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Julia Donaldson , Illustrated by  Axel Scheffler\t32 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nStick Man\n\n");
	p("A heartwarming rhyming tale of family, courage and adventure from the creators of The Gruffalo perfect for\nsharing at Christmas.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C66\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	


	else if(!strcmp("The 117 Storey Treehouse",bkname)||!strcmp("the 117 storey treehouse",bkname)||!strcmp("27",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Andy Griffiths , Illustrated by  Terry Denton\t228 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe 117-Storey Treehouse\n\n");
	p("Andy and Terry have added another thirteen levels of crazy fun to their every-growing treehouse.\nThey've got a tiny-horse level, a pyjama-party room, an Underpants Museum and Treehouse Information\nCentre! But Andy and Terry have found themselves running from the Story Police and\nthe only way to escape, is through the terrifying Door of Doom!");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C67\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	


	else if(!strcmp("the secret commonwealth: the book of dust volume two",bkname)||!strcmp("The Secret Commonwealth: The Book of Dust Volume Two",bkname)||!strcmp("28",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Philip Pullman , Illustrated by  Christopher Wormell\t704 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Secret Commonwealth: The Book of Dust Volume Two\n\n");
	p("It is almost ten years since readers left Lyra and the love of her young life, Will Parry, on a park\nbench in Oxford's Botanic Gardens at the end of the ground-breaking, bestselling His Dark Materials\nsequence.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C68\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	


	else if(!strcmp("Look Inside Things That Go",bkname)||!strcmp("look inside things that go",bkname)||!strcmp("29",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tRob Lloyd Jones\t\t\t14 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nLook Inside Things That Go\n\n");
	p("Lift the many flaps in this sturdy, interactive thin board book to discover what happens inside boats,\nbikes, planes, cars, buses and more. There are lots of things to spot and talk about in the amusing and\ndetailed illustrations by Stefano Tognetti. With over 75 flaps to lift.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C69\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	

	else if(!strcmp("Harry Potter Box Set",bkname)||!strcmp("harry potter box set",bkname)||!strcmp("30",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tJ. K. Rowling\t\t\t\t3872 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nHarry Potter Box Set\n\n");
	p("A beautiful boxed set containing all seven Harry Potter novels in paperback. These new editions\nof the classic and internationally bestselling, multi-award-winning series feature instantly pick-up-able\nnew jackets by Jonny Duddle, with huge child appeal, to bring Harry Potter to the next\ngeneration of readers. It's time to PASS THE MAGIC ON ...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF C70\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	
else if(!strcmp("Scythe",bkname)||!strcmp("scythe",bkname)||!strcmp("31",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tNeal Shusterman\t\t\t\t448 Pages\t\t\t\t\t4.54");
	p("\n||******************************************************************************************************||\n");
	p("\nScythe\n\n");
	p("In a world where disease, war and crime have been eliminated, the only way to die is to be randomly\nkilled (gleaned) by professional scythes. Citra and Rowan are teenagers who have been selected to\nbe scythes' apprentices, and despite wanting nothing to do with the vocation, they\nmust learn the art of killing and understand the necessity of what they do.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D61\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}
	else if(!strcmp("Thunderhead",bkname)||!strcmp("thunderhead",bkname)||!strcmp("32",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tNeal Shusterman\t\t\t\t528 Pages\t\t\t\t\t4.76");
	p("\n||******************************************************************************************************||\n");
	p("\nThunderhead\n\n");
	p("It's been a year since Rowan went off-grid. Hunted by the Scythedom, he has become an urban legend, a\nvigilante snuffing out corrupt scythes in a trial by fire. Citra, meanwhile, is forging her path\nas Scythe Anastasia, gleaning with compassion. However, conflict within the Scythedom is\ngrowing by the day, and when Citra's life is threatened, it becomes clear that there is a truly\nterrifying plot afoot.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D62\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}
	else if(!strcmp("Dry",bkname)||!strcmp("Dry",bkname)||!strcmp("33",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Jarrod Shusterman\t\t\t\t416 Pages\t\t\t\t\t4.45");
	p("\n||******************************************************************************************************||\n");
	p("\nDry\n\n");
	p("When the California drought escalates to catastrophic proportions, one teen is forced to make life\nand death decisions in this harrowing story of survival from New York Times bestselling author\nNeal Shusterman and Jarrod Shusterman. The drought - or the Tap-Out, as everyone calls it - has\nbeen going on for a while now. Everyone's lives have become an endless list of don'ts: don't\nwater the lawn, don't fill up your pool, don't take long showers.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D63\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("The Hand, the Eye and the Heart",bkname)||!strcmp("the hand, the eye and the heart",bkname)||!strcmp("34",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Zoe Marriott\t\t\t448 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Hand, the Eye and the Heart\n\n");
	p("Zhilan was assigned female at birth. Despite a gift for illusions, they know they are destined to live\nout their life within the confines of the women's quarter. But when civil war sets the empire aflame,\nZhilan is determined save their disabled father from the battlefield. By taking his place. Surviving\nbrutal army training as a boy - Zhi - is only the first challenge. In the glittering court of the\nLand of Dragons, love and betrayal are two sides of the same smile, and soon the fate of a nation rests\non Zhi's shoulders. But to win, they must decide where their heart truly belongs...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D64\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("Small Spaces",bkname)||!strcmp("small spaces",bkname)||!strcmp("35",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tSarah Epstein\t\t\t384 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nSmall Spaces\n\n");
	p("Tash Carmody has been traumatised since childhood, when she witnessed her gruesome imaginary friend\nSparrow lure young Mallory Fisher away from a carnival. At the time nobody believed Tash, and she\nhas since come to accept that Sparrow wasn't real. Now fifteen and mute, Mallory's never spoken\nabout the week she went missing. As disturbing memories resurface, Tash starts to see Sparrow again.\nAnd she realises Mallory is the key to unlocking the truth about a dark secret connecting them.\nDoes Sparrow exist after all? Or is Tash more dangerous to others than she thinks?");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D65\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	
	else if(!strcmp("I Will Not Be Erased",bkname)||!strcmp("i will not be erased",bkname)||!strcmp("36",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t gal-dem\t\t\t\t208 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nI Will Not Be Erased\n\n");
	p("gal-dem, the award-winning online and print magazine, is created by women and non-binary people of\ncolour. In this life-affirming, moving and joyous collection of fourteen essays, gal-dem's talented\nwriters use raw material from their teenage years - diaries, poems and chat histories - to give\nadvice to their younger selves and those growing up today.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D66\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("The Quiet at the End of the World",bkname)||!strcmp("the quiet at the end of the world",bkname)||!strcmp("37",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Lauren James\t\t\t352 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Quiet at the End of the World\n\n");
	p("How far would you go to save those you love? Lowrie and Shen are the youngest people on the planet after\na virus caused global infertility. Closeted in a pocket of London and doted upon by a small, ageing\ncommunity, the pair spend their days mudlarking and looking for treasure - until a secret is uncovered\nthat threatens not only their family but humanity's entire existence. Now Lowrie and Shen face an\nimpossible choice: in the quiet at the end of the world, they must decide what to sacrifice\nto save the whole human race...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D67\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("The Next Together",bkname)||!strcmp("the next together",bkname)||!strcmp("38",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\t Lauren James\t\t\t368 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Next Together\n\n");
	p("A powerful and epic debut novel about fate and the timelessness of first love. Katherine and Matthew\nare destined to be born again and again. Each time their presence changes history for the better, and\neach time, they fall hopelessly in love, only to be tragically separated. How many times can\nyou lose the person you love? For Matthew and Katherine it is again and again, over and over,\ncentury after century. But why do they keep coming back? How many times must they die\nto save the world? What else must they achieve before they can be left to live and love\nin peace? Maybe the next together will be different...");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D68\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}	
	else if(!strcmp("The Last Beginning",bkname)||!strcmp("the last beginning",bkname)||!strcmp("39",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLauren James\t\t\t352 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Last Beginning\n\n");
	p("The epic conclusion to Lauren James' debut The Next Together about true love and reincarnation. Sixteen\nyears ago, after a scandal that rocked the world, teenagers Katherine and Matthew vanished without a\ntrace. Now Clove Sutcliffe is determined to find her long lost relatives... But where do you\nstart looking for a couple who seem to have been reincarnated at every key moment in history? Who\nwere Kate and Matt? Why were they born again and again? And who is the mysterious Ella, who\nkeeps appearing at every turn in Clove's investigation? For Clove, there is a mystery to\nsolve in the past and a love to find in the future.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D69\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
		
}
	else if(!strcmp("The Loneliest Girl in the Universe",bkname)||!strcmp("the loneliest girl in the universe",bkname)||!strcmp("40",bkname)){
	system("cls");
	p("\n||******************************************************************************************************||\n");
	p("\tLauren James\t\t\t\t304 Pages\t\t\t\t4.-");
	p("\n||******************************************************************************************************||\n");
	p("\nThe Loneliest Girl in the Universe\n\n");
	p("Romy Silvers is the only surviving crew-member of a spaceship travelling to a new planet, on a mission\nto establish a second home for humanity. Alone in space, she is the loneliest girl in the universe\nuntil she hears about a new ship which has launched from Earth - with a single passenger\non board. A boy called J.Their only communication is via email - and due to the distance\nbetween them, their messages take months to transmit. And yet Romy finds herself falling in love.");
	p("\n\n||------------------------------------------------------------------------------------------------------||\n");
	p("YOU CAN FIND THIS BOOK ON THE SHELF D70\n");
	p("||------------------------------------------------------------------------------------------------------||\n");
previous(&lp,name2,ename,d);
}	



else if(!strcmp("0",bkname)){
a=0;lp=0;
system("cls");
}

}


else if(!strcmp(m,"7")||!strcmp(m,"Books Which are Added")){
system("cls");
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
FILE *bk1;
bk1=fopen("Adding Book.txt","r");
struct book add;
char ad;
while(!feof(bk1)){


	ad=fgetc(bk1);
  if(!(ad=='ÿ'))
	printf("%c",ad);

}

fclose(bk1);
p("\nIf you Satisfya enter '1'or  you want to return previous Page enter '0':\n");	
		s("%d",&lp);
		if(lp==1){
	
		users(name2,ename,d);
		exit(1);
	}
}
else if(!strcmp(m,"8")||!strcmp(m,"Return Previous Page")){
system("cls");
a=0;
break;

}


else if(!strcmp(m,"9")||!strcmp(m,"exit")){
exit(1);
users(name2,ename,d);
}


	
}
}
else if((!strcmp(x,"6")||!strcmp(x,"The Last Entries"))&&!strcmp(ename,"admin2122")){
system("cls");
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
FILE *tt;
tt=fopen("The last entries.txt","r");

char l;
while(!feof(tt)){

	l=fgetc(tt);
	if(!(l=='ÿ'))
	p("%c",l);

}
previous(&a,name2,ename,d);
fclose(tt);

}

else if((!strcmp(x,"Adding Book")||!strcmp(x,"5"))&&!strcmp(ename,"admin2122")){
	FILE *bk=fopen("Adding Book.txt","a");
	FILE *yt=fopen("Books.txt","a");
     
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
	printf("                         -->Hey!! if you want to save  book.You have to use these methods for book's name and author name`s.\n\n                         -->Please Enter English Karacter ,Using Lowercase and using hyphen '-' instead of space(' ').\n\n                         -->EXAMPLE(hasan-ali-yucel instead of Hasan Ali Yücel)\n\n                         -->EXAMPLE(don-kisot instead of Don Kiþot)\n");
	
	
	p("\n                         -->How many books do you enter ?\n");
int l;
	s("%d",&l);
	struct book *add;
	add=(struct book*)malloc(sizeof(struct book)*l);
	int i=0;
	for(i=0;i<l;i++){
		p("\n%d.Book name:",i+1);
		s("%s",add->name);		
		p("\n%d.Book's author name:",i+1);
		s("%s",add->author);
		p("\n%d.Book's pages:",i+1);
		s("%d",&add->pages);
		fprintf(yt,"\n%s",add->name);
		fprintf(bk,"\n\tBook name:%s\n\tAuthor name:%s\n\tPages:%d\n\tDate: %d / %d / %d\tTime--> %d : %d: %d\n",add->name,add->author,add->pages,local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min,local->tm_sec);
		fprintf(bk,"\n-----------------------------------------------------------------------------------------------------------------\n");
	
		add++;
		}


fclose(yt);
fclose(bk);

previous(&a,name2,ename,d);



}

else if((!strcmp(x,"2")||!strcmp(x,"Looking For Book"))&&(!strcmp(ename,"1")||!strcmp(ename,"admin2122")||d==2)){

p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
	FILE *p1;
	p1=fopen("Books.txt","r");
char at[100];
char ta[100];

printf("                         -->Hey!! if you want to look for book.You have to use these methods for book's name .\n\n                         -->Please Enter English Karacter ,Using Lowercase and using hyphen '-' instead of space(' ').\n\n                         -->EXAMPLE(hasan-ali-yucel instead of Hasan Ali Yücel)\n\n                         -->EXAMPLE(don-kisot instead of Don Kiþot)\n");

	gets(at);
int	tk;
tk=0;
	while(!feof(p1)){
		fscanf(p1,"%s",ta);
		if(!strcmp(ta,at)){
		system("cls");
		p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
		printf("\n\n\n\n\n\n        -->The book that you are looking for is available\n\n\n\n\n\n\n\n\n\n\n\n");
		
				 tk=1;
			
			
		
	break;	
	}	}
	
	fclose(p1);
	if(tk==1){
	previous(&a,name2,ename,d);
	}
	
	
else	if(tk==0){
	
	system("cls");
	p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
	printf("\n\n      -->The Book is not available");
previous(&a,name2,ename,d);
	


}


}


else if((!strcmp(x,"3")||!strcmp(x,"Barrowing Book"))&&(!strcmp(ename,"1")||!strcmp(ename,"admin2122")||(d==2))){
 int t3=0;
char a2[100],a1[100];
    int t1;	
	FILE *ptt=fopen("Books.txt","r+");	
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
printf("\t\t\t            -->Which Book Do You Want to Barrow:\n");	
printf("                         -->Hey!! if you want to  barrow book.You have to use these methods for book's name .\n\n                         -->Please Enter English Karacter ,Using Lowercase and using hyphen '-' instead of space(' ').\n\n                         -->EXAMPLE(hasan-ali-yucel instead of Hasan Ali Yücel)\n\n                         -->EXAMPLE(don-kisot instead of Don Kiþot)\n");

	scanf("%s",a2);
char atk[100];

	FILE *ptt2=fopen("BooksWhichTook.txt","a+");
	FILE *ptt3=fopen("Books1.txt","w");


	while(!feof(ptt)){
	int flag=0;	
		
		fscanf(ptt,"%s",a1);
		if(!strcmp(a1,a2)){
		
		flag=1;
			
			
			if(!strcmp(rename,"admin2122")){
	
	fprintf(ptt2,"\n      -->ID:%s      Book:%s         ----->      Date: %d / %d / %d      Time--> %d : %d: %d\n",ename,a1,local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min,local->tm_sec);
	}
			else
			fprintf(ptt2,"\n      -->ID:%s      Book:%s        ----->      Date: %d / %d / %d      Time--> %d : %d: %d\n",name2,a1,local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min,local->tm_sec);
			
		
			printf("\nYou Took This Book.\n");

	previous(&a,name2,ename,d);
		
			t3=1;
			
		}
	if(flag==0){
	fprintf(ptt3,"%s\n",a1);
	}
	}
	fclose(ptt2);
fclose(ptt);
	fclose(ptt3);
	remove("Books.txt");
	rename("Books1.txt","Books.txt");
	if(t3==0){
	system("cls");
	p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
		printf("      -->This Library doesn't involve this book which you wrote ");
previous(&a,name2,ename,d);
		
	}


}

else if((!strcmp(x,"4")||!strcmp(x,"Books Which are Barrowed by Users"))&&(!strcmp(ename,"admin2122"))){
FILE *bk2;
p("\n\t\t\t   Date: %d / %d / %d                     SATURN                        Time: %d : %d       \n",local->tm_mday,local->tm_mon+1,local->tm_year+1900,local->tm_hour,local->tm_min);

if(!strcmp(ename,"admin2122"))
p("\t\t\t                                       -->ADMIN LOGIN<-- \n\n\n\n");	
else if(d==1)
p("\t\t\t                                      -->VISITOR LOGIN<-- \n\n\n\n");	
else
p("\t\t\t                                  -->'%s' USER LOGIN<-- \n\n\n\n",name2);
bk2=fopen("BooksWhichTook.txt","r");

char ad1;
while(!feof(bk2)){
	


	ad1=fgetc(bk2);
    if(!(ad1=='ÿ')) 
	printf("%c",ad1);

}
fclose(bk2);
previous(&a,name2,ename,d);


}



else if(!strcmp(x,"7")||!strcmp("Exit",x)){

users(name2,ename,d);
exit(1);
}
else{
a=0;
system("cls");
}



}
	
	
	users(name2,ename,d);
	
	
	getch();
		
	return 0;

}


	
	
