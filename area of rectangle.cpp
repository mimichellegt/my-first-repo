#include <stdio.h>


int main(){
	int Panjang, Lebar, Luas;
	
	printf("Masukan panjang= ");
	scanf("%d", &Panjang);
	printf("Masukan Lebar= ");
	scanf("%d", &Lebar);
	
	Luas= Panjang*Lebar;
	
	printf("Total luas persegi panjang adalah %d", Luas);
	
	
	return 0;
}
