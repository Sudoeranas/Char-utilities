#ifndef CHAINE5_H_INCLUDED
#define CHAINE5_H_INCLUDED

#define     VIDE(ch)         ch[0]=='\0'
#define     EGAL(ch, ch1)   !strcmp(ch1, ch2)

char * dernier(char * mot, const char * chaine);
char * saufdernier(char * debch, const char * ch);
char * miroir(char * mirch, const char * ch);
void menu();
char member(char * member_ch, const char * ch);
char * efface(const char * mot, char * ch);
void menu();

#endif
