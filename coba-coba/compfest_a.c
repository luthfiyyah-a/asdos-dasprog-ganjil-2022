#include<stdio.h>
#include<string.h>

struct Data{
  int id[201], saldo;
};

int main(){
  int x, y, z, ids, nominal;
  char in[1000];

  scanf("%d %d", &y, &x);

  struct Data arr[y];

  for(int i=0; i<y; i++){
    scanf("%d", &z);
    arr[i].saldo=0;
    for(int j=0; j<z; j++){
      scanf("%d", &arr[i].id[j]);
    }
  }
  
  while(1){
    scanf("%s", in);
    if(strcmp("transaksi", in)==0){
      scanf("%d %d", &ids, &nominal);
      for(int i=0; i<y; i++){
        for(int j=0; j<z; j++){
          if(ids==arr[i].id[j]){
            arr[i].saldo+=nominal;
          }
        }
      }
    }
    else if(strcmp("tampilkan", in)==0) break;
  }
  for(int i=0; i<y; i++){
    printf("%d: %d\n", i+1, arr[i].saldo);
  }
}
