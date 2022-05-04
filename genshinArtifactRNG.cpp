// ARTIFACT DOMAIN RNG
// only gives 5 star artifacts
// written by Cemre Senyuva

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int i,j;
	
	typedef struct{
	char artType[5][10]={"Flower","Plume","Sands","Goblet","Circlet"};
    }artifact;
	
	typedef struct {
	  char dmnName[40];
	  char artSets[2][30];
	}domains;
	
	char sandsStat[5][20]={"ATK","DEF","HP","Elemental Mastery","Energy Recharge"};
    char gobletStat[10][30]={"ATK","DEF","HP","ANEMO DMG BONUS","GEO DMG BONUS","ELECTRO DMG BONUS","PYRO DMG BONUS","CYRO DMG BONUS","HYDRO DMG BONUS","PHYSICAL DMG BONUS"};
    char circletStat[6][20]={"Crit Rate","Crit Dmg","Healing Bonus","ATK","DEF","HP"};
    char substat[10][20]={"Crit Rate","Crit DMG","Elemental Mastery","Energy Recharge","ATK %","DEF %","HP %","HP Flat","ATK Flat","DEF Flat"};
	
      
      domains domain[10];
      strcpy(domain[0].dmnName, "Midsummer Courtyard");
      strcpy(domain[0].artSets[0],"Thundering Fury");
      strcpy(domain[0].artSets[1],"Thundersoother");
      
      strcpy(domain[1].dmnName, "Valley Of Rememberance");
      strcpy(domain[1].artSets[0],"Viridescent Venerer");
      strcpy(domain[1].artSets[1],"Maiden Beloved");
      
      strcpy(domain[2].dmnName, "Hidden Place Of Zhou Formula");
      strcpy(domain[2].artSets[0],"Crimson Witch Of Flames");
      strcpy(domain[2].artSets[1],"Lavawalker");
      
      strcpy(domain[3].dmnName, "Clear Pool And Mountain Cavern");
      strcpy(domain[3].artSets[0],"Bloodstained Chivalry");
      strcpy(domain[3].artSets[1],"Noblesse Oblige");
      
      strcpy(domain[4].dmnName, "Domain Of Guyun");
      strcpy(domain[4].artSets[0],"Archaic Petra");
      strcpy(domain[4].artSets[1],"Retracing Bolide");
      
   
      strcpy(domain[5].dmnName, "Peak Of Vindagnyr");
      strcpy(domain[5].artSets[0],"Heart Of Depth");
      strcpy(domain[5].artSets[1],"Blizzard Strayer");
      
      strcpy(domain[6].dmnName, "Ridge Watch");
      strcpy(domain[6].artSets[0],"Pale Flame");
      strcpy(domain[6].artSets[1],"Tenacity of the Millelith");
      
      strcpy(domain[7].dmnName, "Momiji-Dyed Court");
      strcpy(domain[7].artSets[0],"Shimenawa's Reminiscence");
      strcpy(domain[7].artSets[1],"Emblem of Severed Fate");
      
      strcpy(domain[8].dmnName, "Slumbering Court");
      strcpy(domain[8].artSets[0],"Husk of Opulent Dreams");
      strcpy(domain[8].artSets[1],"Ocean-Hued Clam");
      
      strcpy(domain[9].dmnName, "The Lost Valley");
      strcpy(domain[9].artSets[0],"Vermillion Hereafter");
      strcpy(domain[9].artSets[1],"Echoes of an Offering");
      
      printf(" *  *   *    * DOMAIN LIST *    *   *  * * \n");
      printf("\t1-Midsummer Courtyard\n\t2-Valley Of Rememberance\n\t3-Hidden Place Of Zhou Formula\n\t4-Clear Pool And Mountain Cavern\n\t5-Domain Of Guyun\n\t6-Peak Of Vindagnyr\n\t7-Ridge Watch\n\t8-Momiji-Dyed Court\n\t9-Slumbering Court\n\t10-The Lost Valley");
      printf("\nChoose a domain (Enter the number of domain): ");
      scanf("%d" ,&i);
      printf ("\n\t\tYou chose %s domain.", domain[i-1].dmnName );
          
	int artnum=rand()%2+1;
	int n;
	char substats[4][20];
	artifact a[artnum];
		
	for (j=0;j<artnum;j++){
	    printf("\n\nArtifact %d: %s", j+1 ,domain[i-1].artSets[rand()%2+0]);
	    int k=rand()%5;
		int l,n;
		printf("\n%s",a[j].artType[k]);
		
	    if(k==2){printf("\nMain Stat:%s",sandsStat[rand()%5]);}
		if(k==3){printf("\nMain Stat: %s",gobletStat[rand()%10]);}
		if(k==4){printf("\nMain Stat: %s",circletStat[rand()%6]);}
	    l=rand()%2;
	    printf("\nSubstats:");
	    for(int m=0;m<l+3;m++){
	      if(m == 0){ 
		    n=rand()%10;
		    strcpy(substats[m],substat[n]); }
		  
	      if(m == 1){
	      	n=rand()%10;
	      	strcpy(substats[m],substat[n]);
			  
			do {n=rand()%10;
				strcpy(substats[m],substat[n]);
				}
	      	while ( ! strcmp(substats[m],substats[0]) ); }
		  
		  if(m == 2){
	      	n=rand()%10;
	      	strcpy(substats[m],substat[n]);
	      	do {n=rand()%10;
			    strcpy(substats[m],substat[n]);
				}
	      	while ( ! strcmp(substats[m],substats[1]) || ! strcmp(substats[m],substats[0]) ) ;}
	      	
		  if(m == 3){
	      	n=rand()%10;
	      	strcpy(substats[m],substat[n]);
	      	do {n=rand()%10;
			    strcpy(substats[m],substat[n]);
				}
			  while ( ! strcmp(substats[m],substats[2]) || ! strcmp(substats[m],substats[1]) || ! strcmp(substats[m],substats[0])  );}
		  
		  printf("\n%s",substats[m]);}}
		  	
   return 0;   
}
