/************************************************************************/
/* AUTEUR : A. TOGUYENI							*/
/* DATE : 05/01/2020							*/
/* FICHIER : chaine4.h						        */
/* DESCRIPTION : Entete de la bibliotheque de fonctions avancee de      */
/* traitement des chaines de caracteres                                 */
/************************************************************************/

#ifndef CHAINE4_H
#define CHAINE4_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  MAXCAR 	80
//Definitions de VRAI et FAUX si besoin
#define	VRAI	1
#define	FAUX	0

typedef char Tchaine[MAXCAR+1];


/***************************************************************************/
/* NOM FONCTION : format						   */
/* DESCRIPTION :  Realise le formatage d'une chaine de manière a           */
/* ce qu'elle respecte les spécifications imposées au début de cet énoncé. */
/* Retourne :un pointeur sur la chaine lue			   	   */
/* Effets de bords : 			                                   */
/* Paramètres en entree : une variable pour recupere la chaine saisie	   */
/* Paramètres en sortie : la chaine modifiee    			   */
/***************************************************************************/
char *format (char * ch);


/***************************************************************************/
/* NOM FONCTION : strpos						   */
/* DESCRIPTION :  retourne la position du mot pointe par mot dans la chaine*/
/* pointee par ch                                                          */
/* Retourne : la position de mot 			   	           */
/* Effets de bords :                                    		   */
/* Paramètres en entree :  mot et ch                                       */
/* Paramètres en sortie :                                  		   */
/***************************************************************************/
int strpos(const char * mot, const char *ch);


/***************************************************************************/
/* NOM FONCTION : strmin						   */
/* DESCRIPTION :  Elle convertit en miniscule les caractères de la chaine  */
/* pointée par ch.                                                         */
/* Retourne : Retourne un pointeur sur le début de cette chaine 	   */
/* Effets de bords :                                    		   */
/* Paramètres en entree : ch (avec des caracteres pouvant etre en majuscule*/
/* Paramètres en sortie : ch                                		   */
/***************************************************************************/
char * strmin(char * ch);

/***************************************************************************/
/* NOM FONCTION : premier						   */
/* DESCRIPTION : Crée une chaine avec le premier mot de ch qui ne doit pas */
/* modifie.                                                                */
/* Retourne : Retourne un pointeur sur une chaine contenant le premier mot */
/* ou NULL si la chaine ch est vide                                        */
/* Effets de bords :                                    		   */
/* Paramètres en entree : ch chaine dont on veut extraire le premier mot   */
/* Paramètres en sortie : mot (chaine contenant le premier mot)            */
/***************************************************************************/
char *premier(char mot[],const char ch[]);

/***************************************************************************/
/* NOM FONCTION : saufpremier						   */
/* DESCRIPTION : Crée une chaine avec tous les mots de ch sauf le premier  */
/* modifie.                                                                */
/* Retourne : Retourne un pointeur sur le reste de la chaine               */
/* ou NULL si la chaine ch est vide ou est composee d'un seul mot          */
/* Effets de bords :                                    		   */
/* Paramètres en entree : ch (chaine dont on veut extraire le premier mot) */
/* Paramètres en sortie : restch (chaine contenant le reste de ch)         */
/***************************************************************************/
char *saufpremier(char restch[], const char ch[]);

/***************************************************************************/
/* NOM FONCTION : phrase						   */
/* DESCRIPTION : Concatenation de ch et ch2 dans la limite des MAXCAR      */
/* caracteres. Le resutant est mis dans ch qui est modifie                 */
/* Retourne : Retourne un pointeur sur la chaine concatenee                */
/* ou NULL si ch et ch2 sont vides                                         */
/* Effets de bords :                                    		   */
/* Paramètres en entree : ch et ch2                                        */
/* Paramètres en sortie : ch qui contient les deux chaines concatenee      */
/***************************************************************************/
char *phrase (char * ch, const char * ch2);
#endif
