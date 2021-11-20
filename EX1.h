int Ex1(){
	float prix_unitaire;
	int Q;
	printf("Bonjour cher client\n  merci de saisir le prix unitaire :\n");
	scanf("%f", &prix_unitaire);
	printf("veilliez de saisir la cuantite  :\n");
	scanf("%d", &Q);
	float prix_finale = (Q * prix_unitaire) + (Q * prix_unitaire) * 0.2;
	printf("le prix finale est :\n%.2f\n", prix_finale);
}
