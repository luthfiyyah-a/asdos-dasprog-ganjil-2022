#include <stdio.h>

int main(){
	
	int jmlhAkun, jmlhPegawai, brpPemegang;
	int i, j;
	int idPegawai;
	
	scanf("%d %d", &jmlhAkun, &jmlhPegawai);
	int* pegawai[jmlhPegawai+1];
	int akun[jmlhAkun+1];

	for(i=1; i<= jmlhAkun; i++){
		akun[i] = 0;
		scanf("%d", &brpPemegang);
		for(j=1; j<=brpPemegang; j++){
			scanf("%d", &idPegawai);
			pegawai[idPegawai] = &akun[i];
		}
	}
	
	char pesan[20];
	int nominal;
	
	scanf("%s", pesan);
	while(strcmp(pesan, "transaksi") == 0){
		scanf("%d %d", &idPegawai, &nominal);
		*pegawai[idPegawai] += nominal;
//		 printf("%d: %d\n", 1, akun[1]);
//		 printf("%d: %d\n", 2, akun[2]);
		scanf("%s", pesan);
	}
	
	for(i=1; i<= jmlhAkun; i++){
		printf("%d: %d\n", i, akun[i]);
	}
}
