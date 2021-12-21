/************************************************************************/
/* AUTEUR : IKLI Anas                                                   */
/* DATE : 11/12/2021	                                                */
/* VERSION : 1.3                                                        */
/* DESCRIPTION : Interpreteur de commande                               */
/* NOM FICHIER : tp5.c						                            */
/************************************************************************/


//Includes
#include "chaine4.h"
#include "chaine5.h"


#define MAX 80

void menu();


int main()
{
 char cde[MAX] ; // permet de saisir une commande
 Tchaine s1,s2; // Chaines de caracteres
 char car[MAX] ;
char liste_cdes[]="pre-sfp-phr-der-sfd-mir-mmb-eff-hlp-fin"; //Definie la liste des commandes de l'interpreteur
int termine=FAUX ;
int pos ; // variable correspondant a la position de "cde" dans "liste_cdes"
do
{

menu() ; // Affiche la liste des commandes (a realiser)
//saisir la commande et calculer sa position dans la liste des commandes

switch (pos)
{

case 1 : //Commande premier (pre)
  printf("Saisir d'abord votre chaine : ");
  fgets(s1, MAXCAR,stdin);
  format(s1);
  printf("1er mot= '%s' \n ", premier(s2,s1)) ;
  break ;

case 4 : //Commande saufpremier (sfp)

  printf("Saisir d'abord votre chaine : ");
  fgets(s1, MAXCAR,stdin);
  format(s1);
  printf("Votre chaine sans le premier caractère est : ");
  saufpremier(s2,s1);
  fputs(s2, stdin);
  getchar();
  break ;

case 8 : //Commande phrase (phr)
  printf("Saisir d'abord votre chaine : ");
  fgets(s1, MAXCAR,stdin);
  format(s1);
  phrase(s2,s1) ;
  printf("Le résultat de la concaténation de votre chaîne est : ");
  fputs(s2, stdin);
  getchar();
  break ;

case 12 : //Commande dernier (der)

  printf("Saisir d'abord votre chaine : ");
  fgets(s1, MAXCAR,stdin);
  format(s1);
  dernier(s2,s1);
  printf("Le dernier caractère de votre chaine est : ");
  fputs(s2, stdin);
  getchar();
  break ;

case 16 : //Commande saufdernier (sfd)
  printf("Saisir d'abord votre chaine : ");
  fgets(s1, MAXCAR,stdin);
  format(s1);
  saufdernier(s2,s1);
  printf("Votre chaine sans le dernier caractère est : ");
  fputs(s2, stdin);
  getchar();
  break ;


case 20: //Commande miroir (mir)
  printf("Saisir d'abord votre chaine : ");
  fgets(s1, MAXCAR,stdin);
  format(s1);
  printf("La chaine miroir de votre chaine saisie est : ");
  miroir(s2,s1);
  fputs(s2, stdin);
  getchar();
  break ;

case 24 : //Commande member (mmb)
    // Non -faite
 break;

case 28 : //Commande effacer (eff)
  printf("Saisir d'abord votre chaine : ");
  fgets(s1, MAXCAR,stdin);
  format(s1);
  printf("Donnez le caractère à effacer : ");
  fgets(car, MAX, stdin);
  efface(car, s1);
  printf("La nouvelle chaine miroirée est : ");
  fputs(s1, stdin);
  getchar();
  break ;

case 32 : menu();
	break ;

case 36 :

	termine=VRAI ;
	break ;

default : printf("\007\007 Cde inconnue. Recommencez !!!\n") ;
	}
   }
while (!termine) ;

}


void menu()
    {
	 int pos;
	 char cde[MAX] ;
	 char liste_cdes[]="pre-sfp-phr-der-sfd-mir-mmb-eff-hlp-fin";
	 printf(" PRE - Commande Premier     ");
	 printf(" SFP - Commande SaufPremier ");
	 printf(" PHR - Commande Phrase      ");
	 printf(" DER - Commande Dernier     ");
	 printf(" SFD - Commande SaufDernier ");
	 printf(" MIR - Commande Miroir      ");
	 printf(" MMB - Commande Member      ");
	 printf(" EFF - Commande Effacer     ");
	 printf(" FIN - Commande Quitter     ");
	 printf("\n\n\t Votre choix : ");
     fgets(cde, MAX, stdin);
	 format(cde);
     pos=strpos(liste_cdes, cde);
	 getchar();
	 return pos;
	 }
