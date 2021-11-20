int Ex2(){
	int n1,n2,swap;
	printf("merci de saisir la valeur n1 :\n");
	scanf("%d", &n1);
		printf("merci de saisir la valeur n2 :\n");
		scanf("%d", &n2);
	swap = n1;
	n1 = n2;
	n2 = swap;
	printf("apres l'echangement la resultats est :\nn1 :%d\nn2 :%d\n", n1,n2);
}
