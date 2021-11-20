int Ex6()
{
float prix_dunite;
	int Q;
	printf("Veuillez saisir le prix unitaire et apres saisir combien d'unités vous achetez  :\n");
	scanf("%f%d", &prix_dunite, &Q);
	float sum = prix_dunite * Q;
	if(sum < 200){printf("le prix final est :\n%.2f\n", sum + 25);}
	else{printf("le prix final est :\n%.2f\n", sum);}
}
