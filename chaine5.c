#include "chaine4.h"
#include "chaine5.h"
#define MAX 80

char * dernier(char * mot, const char * ch){
    int i=strlen(ch)-1;
    int j=0 ;
    while (ch[i]!=' '){
        i--;
        }
    i++;
    for (j=i; i<MAX; i++){
        mot[j] = ch[i];
        printf("%s", mot[j]);
        j++;
        }
    }

char * saufdernier(char * debch, const char * ch){
	int i=0;
	int j=0;
	int aux=0;
	i = strlen(ch)-1;
	while (ch[i]!=' ')
		i=i-1;

	aux=i;
	for (i=0;i<aux;i++) {
		debch[j]=ch[i];
		printf("%s", debch[j]);
		j++;
	}
}

char * miroir(char mirch[], const char ch[])
{
    char arr[MAX][MAX] = {""};
    char temp[MAX]; 
    int cpt = 0;
    char chaine2[MAX];
	strcpy(chaine2, ch);
    while(!VIDE(chaine2))
    {	
	premier(temp,chaine2);
	strcpy(arr[cpt], temp);
	saufpremier(chaine2,chaine2);
	cpt++;
    }	
    cpt--;
    for(int i=cpt; i>=0; i--)
    {
	strcat(mirch, arr[i]);
	strcat(mirch, " ");
    }
    int longueurMirch = strlen(mirch);
    mirch[longueurMirch-1]='\0';
    
    return mirch;
}

char * efface(const char * mot, char * ch){
	int pos=0;
	int i=0 ;
	int pos2=0;

	pos=strpos(mot,ch);
	pos=pos-1;//au lieu de l'emplacement de I++ on veut la pos du tableau
	for (i=pos;pos2==0;i++) //init la position de début
	{
		if(ch[i]==' ' || ch[i]==0)
			pos2=i;// Quand on trouve le car qu'on veut on le stock pour le réutiliser pour détecter les espaces
	}
	for (i=pos;i<pos2+1;i++)
		ch[i]=' '; // on remplace par un espace , et voilà on a effacé notre truc au lieu de décrémenter à chaque fois :>
}

