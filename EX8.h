int Ex8(){

	int num_darticle, remise = 0;
	float prix_unite, edit_price, sum;
	printf("Veuillez saisir le nombre d'articles puis le prix unitaire  :\n");
	scanf("%d%f", &num_darticle, &prix_unite);
	sum = num_darticle * prix_unite;
	sum += sum * 0.2;
	if(sum > 1000){
		remise = 5;
	}
	edit_price = sum - ((sum * remise)/100);
	printf("Montant TTC :%.2fDH\nRemise :%d %%\nNet a payer :%.2fDH\n", sum, remise, edit_price);
}
