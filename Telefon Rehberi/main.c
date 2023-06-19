#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int islem,i,sira=0;
	char n1[11]="0",n2[11]="0",n3[11]="0",n4[11]="0",n5[11]="0",n6[11]="0",n7[11]="0",n8[11]="0",n9[11]="0",n10[11]="0";
	char k1[11]="null      ",k2[11]="null      ",k3[11]="null      ",k4[11]="null      ",k5[11]="null      ",
	k6[11]="null      ",k7[11]="null      ",k8[11]="null      ",k9[11]="null      ",k10[11]="null      ";
	
	printf("A.F.K.'nin Telefon Rehberi\n-------------------------------------\nHosgeldiniz. ");
	printf("Yapmak istediginiz islemi belirtin.\n\n");
	printf("Listeyi Goruntule: [1]\nKisi Ekle: [2]\nKisi Duzenle: [3]\nKisi Sil: [4]\nCikis Yap: [5]\n\n");
	
	while(islem!=5){
	
	scanf("%d",&islem);	
	
	if(islem==1){
		printf("\nSira\tAd-Soyad\t\tTelefon\n");
				printf("1.\t%s\t\t%s\n",k1,n1);
				printf("2.\t%s\t\t%s\n",k2,n2);
				printf("3.\t%s\t\t%s\n",k3,n3);
				printf("4.\t%s\t\t%s\n",k4,n4);
				printf("5.\t%s\t\t%s\n",k5,n5);
				printf("6.\t%s\t\t%s\n",k6,n6);
				printf("7.\t%s\t\t%s\n",k7,n7);
				printf("8.\t%s\t\t%s\n",k8,n8);
				printf("9.\t%s\t\t%s\n",k9,n9);
				printf("10.\t%s\t\t%s\n\n",k10,n10);
	}
	else if(islem==2){
		printf("Kacinci siraya eklemek istersiniz? (1-10): ");
				scanf("%d",&sira);
				switch(sira){
					case 1: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k1); printf("Numara Girin(11 Krktr): "); scanf("%s",&n1); printf("Kisi Eklendi.\n\n");
					break;
					case 2: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k2); printf("Numara Girin(11 Krktr): "); scanf("%s",&n2); printf("Kisi Eklendi.\n\n");
					break;
					case 3: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k3); printf("Numara Girin(11 Krktr): "); scanf("%s",&n3); printf("Kisi Eklendi.\n\n");
					break;
					case 4: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k4); printf("Numara Girin(11 Krktr): "); scanf("%s",&n4); printf("Kisi Eklendi.\n\n");
					break;
					case 5: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k5); printf("Numara Girin(11 Krktr): "); scanf("%s",&n5); printf("Kisi Eklendi.\n\n");
					break;
					case 6: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k6); printf("Numara Girin(11 Krktr): "); scanf("%s",&n6); printf("Kisi Eklendi.\n\n");
					break;
					case 7: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k7); printf("Numara Girin(11 Krktr): "); scanf("%s",&n7); printf("Kisi Eklendi.\n\n");
					break;
					case 8: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k8); printf("Numara Girin(11 Krktr): "); scanf("%s",&n8); printf("Kisi Eklendi.\n\n");
					break;
					case 9: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k9); printf("Numara Girin(11 Krktr): "); scanf("%s",&n9); printf("Kisi Eklendi.\n\n");
					break;
					case 10: printf("Isim girin (Bosluk Birakmayin)(10 Krktr): "); scanf("%s",&k10); printf("Numara Girin(11 Krktr): "); scanf("%s",&n10); printf("Kisi Eklendi.\n\n");
					break;
					default:
					break;	
				}
	}
	else if(islem==3){
		printf("Duzenlemek istediginiz sirayi secin (1-10): ");
		scanf("%d",&sira);
		
		switch(sira){
					case 1: printf("Isim: "); scanf("%s",&k1); printf("Numara: "); scanf("%s",&n1);  printf("Kisi duzenlendi.\n\n");
					break;
					case 2: printf("Isim: "); scanf("%s",&k2); printf("Numara: "); scanf("%s",&n2);  printf("Kisi duzenlendi.\n\n");
					break;
					case 3: printf("Isim: "); scanf("%s",&k3); printf("Numara: "); scanf("%s",&n3);  printf("Kisi duzenlendi.\n\n");
					break;
					case 4: printf("Isim: "); scanf("%s",&k4); printf("Numara: "); scanf("%s",&n4);  printf("Kisi duzenlendi.\n\n");
					break; 
					case 5: printf("Isim: "); scanf("%s",&k5); printf("Numara: "); scanf("%s",&n5);  printf("Kisi duzenlendi.\n\n");
					break;
					case 6: printf("Isim: "); scanf("%s",&k6); printf("Numara: "); scanf("%s",&n6);  printf("Kisi duzenlendi.\n\n");
					break; 
					case 7: printf("Isim: "); scanf("%s",&k7); printf("Numara: "); scanf("%s",&n7);  printf("Kisi duzenlendi.\n\n");
					break;
					case 8: printf("Isim: "); scanf("%s",&k8); printf("Numara: "); scanf("%s",&n8);  printf("Kisi duzenlendi.\n\n");
					break;
					case 9: printf("Isim: "); scanf("%s",&k9); printf("Numara: "); scanf("%s",&n9);  printf("Kisi duzenlendi.\n\n");
					break;
					case 10: printf("Isim: "); scanf("%s",&k10); printf("Numara: "); scanf("%s",&n10);  printf("Kisi duzenlendi.\n\n");
					break;
					default:
					break;
				}
	}	
	else if(islem==4){
		printf("Silmek istediginiz sirayi secin (1-10): ");
		scanf("%d",&sira);
		
		switch(sira){
					case 1: k1[0]='n';k1[1]='u';k1[2]='l';k1[3]='l';k1[4]=' ';k1[5]=' ';k1[6]=' ';k1[7]=' ';k1[8]=' ';k1[9]=' ';
							n1[0]='0';n1[1]=' ';n1[2]=' ';n1[3]=' ';n1[4]=' ';n1[5]=' ';n1[6]=' ';n1[7]=' ';n1[8]=' ';n1[9]=' ';n1[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					case 2: k2[0]='n';k2[1]='u';k2[2]='l';k2[3]='l';k2[4]=' ';k2[5]=' ';k2[6]=' ';k2[7]=' ';k2[8]=' ';k2[9]=' ';
							n2[0]='0';n2[1]=' ';n2[2]=' ';n2[3]=' ';n2[4]=' ';n2[5]=' ';n2[6]=' ';n2[7]=' ';n2[8]=' ';n2[9]=' ';n2[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					case 3: k3[0]='n';k3[1]='u';k3[2]='l';k3[3]='l';k3[4]=' ';k3[5]=' ';k3[6]=' ';k3[7]=' ';k3[8]=' ';k3[9]=' ';
							n3[0]='0';n3[1]=' ';n3[2]=' ';n3[3]=' ';n3[4]=' ';n3[5]=' ';n3[6]=' ';n3[7]=' ';n3[8]=' ';n3[9]=' ';n3[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					case 4: k4[0]='n';k4[1]='u';k4[2]='l';k4[3]='l';k4[4]=' ';k4[5]=' ';k4[6]=' ';k4[7]=' ';k4[8]=' ';k4[9]=' ';
							n4[0]='0';n4[1]=' ';n4[2]=' ';n4[3]=' ';n4[4]=' ';n4[5]=' ';n4[6]=' ';n4[7]=' ';n4[8]=' ';n4[9]=' ';n4[10]=' '; printf("Kisi Silindi.\n\n");
					break; 
					case 5: k5[0]='n';k5[1]='u';k5[2]='l';k5[3]='l';k5[4]=' ';k5[5]=' ';k5[6]=' ';k5[7]=' ';k5[8]=' ';k5[9]=' ';
							n5[0]='0';n5[1]=' ';n5[2]=' ';n5[3]=' ';n5[4]=' ';n5[5]=' ';n5[6]=' ';n5[7]=' ';n5[8]=' ';n5[9]=' ';n5[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					case 6: k6[0]='n';k6[1]='u';k6[2]='l';k6[3]='l';k6[4]=' ';k6[5]=' ';k6[6]=' ';k6[7]=' ';k6[8]=' ';k6[9]=' ';
							n6[0]='0';n6[1]=' ';n6[2]=' ';n6[3]=' ';n6[4]=' ';n6[5]=' ';n6[6]=' ';n6[7]=' ';n6[8]=' ';n6[9]=' ';n6[10]=' '; printf("Kisi Silindi.\n\n");
					break; 
					case 7: k7[0]='n';k7[1]='u';k7[2]='l';k7[3]='l';k7[4]=' ';k7[5]=' ';k7[6]=' ';k7[7]=' ';k7[8]=' ';k7[9]=' ';
							n7[0]='0';n7[1]=' ';n7[2]=' ';n7[3]=' ';n7[4]=' ';n7[5]=' ';n7[6]=' ';n7[7]=' ';n7[8]=' ';n7[9]=' ';n7[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					case 8: k8[0]='n';k8[1]='u';k8[2]='l';k8[3]='l';k8[4]=' ';k8[5]=' ';k8[6]=' ';k8[7]=' ';k8[8]=' ';k8[9]=' ';
							n8[0]='0';n8[1]=' ';n8[2]=' ';n8[3]=' ';n8[4]=' ';n8[5]=' ';n8[6]=' ';n8[7]=' ';n8[8]=' ';n8[9]=' ';n8[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					case 9: k9[0]='n';k9[1]='u';k9[2]='l';k9[3]='l';k9[4]=' ';k9[5]=' ';k9[6]=' ';k9[7]=' ';k9[8]=' ';k9[9]=' ';
							n9[0]='0';n9[1]=' ';n9[2]=' ';n9[3]=' ';n9[4]=' ';n9[5]=' ';n9[6]=' ';n9[7]=' ';n9[8]=' ';n9[9]=' ';n9[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					case 10: k10[0]='n';k10[1]='u';k10[2]='l';k10[3]='l';k10[4]=' ';k10[5]=' ';k10[6]=' ';k10[7]=' ';k10[8]=' ';k10[9]=' ';
							n10[0]='0';n10[1]=' ';n10[2]=' ';n10[3]=' ';n10[4]=' ';n10[5]=' ';n10[6]=' ';n10[7]=' ';n10[8]=' ';n10[9]=' ';n1[10]=' '; printf("Kisi Silindi.\n\n");
					break;
					default:
					break;
				}
	}
	else if(islem!=1 && islem!=2 && islem!=3 && islem!=4 && islem!=5){
		printf("Gecersiz islem girdiniz.\n\n");
	}
}
	printf("\nCikis Yapiliyor...");
	return 0;
}


