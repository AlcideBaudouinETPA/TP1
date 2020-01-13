#include <stdio.h>
//exercice 1
int main{
	int hpjoueur;
	int hpmob;
	int degats_subis;

	hpjoueur=200;
	hpmob=50;
	degats_subis=5;
	//exercice 2
	while(hpmob<=0){

	printf("vous avez %d\n",&hpjoueur);
	printf("le mob a %d\n",&hpmob);

	printf("Tu lui lances un javelot dont la pointe est recouverte de résine et de verre");
	printf("le mob se gratte la tête, tu sais viser in dirait. Il perd %d",degats_subis);
	hpmob=hpmob-degats_subis;

	printf("vous avez %d\n",&hpjoueur);
	printf("le mob a %d\n",&hpmob);
};
	return 0

}