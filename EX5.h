int Ex5(){
		int somme_dargent;
	int billets_de_100 = 0;
	int billets_de_50 = 0;
	int billets_de_10 = 0;
	int billets_de_5 = 0;
	int billets_de_1 = 0;
	printf("saisir la somme d'argent en DH :\n");
	scanf("%d", &somme_dargent);
	while(somme_dargent >= 0){
		if(somme_dargent >= 100){
			somme_dargent -= 100;
			billets_de_100++;
		}
		else if(somme_dargent >= 50){
			somme_dargent -= 50;
			billets_de_50++;
		}
		else if(somme_dargent >= 10){
			somme_dargent -= 10;
			billets_de_10++;
		}
		else if(somme_dargent >= 5){
			somme_dargent -= 5;
			billets_de_5++;
		}
		else if(somme_dargent >= 1){
			somme_dargent -= 1;
			billets_de_1++;
		}
		else{break;}
	}
	printf("Pour compléter cette somme dont vous avez besoin  :\n%d billets de 100DH\n%d billets de 50DH\n%d billets de 10DH\n%d billets de 5DH\n%d billets de 1DH\n", billets_de_100, billets_de_50, billets_de_10, billets_de_5, billets_de_1);
}
