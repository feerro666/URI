#include <stdio.h>
#include <math.h>

int main(){
	int vet15[15],vet1[5],vet2[5];
	int p=0,ip=0;
	for(int i=0;i<15;i++){
		scanf("%i",&vet15[i]);
	}
	for(int i=0;i<15;i++){
		if(vet15[i]%2==0){
			vet2[p]=vet15[i];
			p++;
		}else{
			vet1[ip]=vet15[i];
			ip++;
		}
		if(i==14||ip==5){
			for(int x=0;x<5;x++){
				if(vet1[x]!=0){
					printf("impar[%i] = %i\n",x,vet1[x]);
				}
				vet1[x]=0;
			}
			ip=0;
		}
		if(i==14||p==5){
			for(int x=0;x<5;x++){
				if(vet2[x]!=0){
					printf("par[%i] = %i\n",x,vet2[x]);
				}
				vet2[x]=0;
			}
			p=0;
		}
	}
	return 0;
}
