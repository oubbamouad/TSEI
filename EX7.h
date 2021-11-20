int Ex7(){
	int n1, n2, n3, max;
	printf("Saisir la valeur de x:\n");
	scanf("%d", &n1);
	printf("Saisir la valeur de y:\n");
	scanf("%d", &n2);
	printf("Saisir la valeur de z:\n");
	scanf("%d", &n3);
	if(n1 > n2){
		max = n1;
		if(n1 > n3){max = n1;}
		else{max = n3;}
	}
	else{
		max = n2;
		if(n2 > n3){max = n2;}
		else{max = n3;}
	}
	printf("le maximum valeur est :\n%d\n", max);
}
