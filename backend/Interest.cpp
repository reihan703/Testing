#include <stdio.h>

int main(){
	double j, k;
	int i;
	j=10000;
	i=1;
	
	while (k<=20000){
		j=(j*0.05)+j;
			printf("Tahun ke %d adalah %.2f\n",i,j);
			k=j;
			i++;
			printf('user 1');
	}
}
	

