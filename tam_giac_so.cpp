#include<stdio.h>

#define max 100
typedef int type;
void Read_file(type a[][max], int *n){
	FILE *f;
	f = fopen("tam_giac_so.txt", "r");
	if(f == NULL){
		printf("File loi!");
		return;
	}
	int i = 0,j;
	while(!feof(f)){
		for( j = 0;j<=i;j++){
			fscanf(f,"%d " ,&a[i][j]);	
		}
		i++;
	}
	*n = i;
	fclose(f);
}

void print_data (type a[][max],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int cs_max(type a[][max],int i,int j){
	if(j == 0){
		if(a[i-1][0] > a[i-1][1]) return 0;
		else return 1;
	}
	if(j == i) return i-1;
	if(j == i-1) {
		if(a[i-1][i-2] > a[i-1][i-1] ) return i-2;
		else return i-1;
	}
	if(a[i-1][j-1]>a[i-1][j] && a[i-1][j-1]>a[i-1][j+1]) return j-1;
	if(a[i-1][j]>a[i-1][j-1] && a[i-1][j]>a[i-1][j+1]) return j;
	if(a[i-1][j+1]>a[i-1][j-1] && a[i-1][j+1]>a[i-1][j]) return j+1;
}

void tao_bang(type a[][max],type b[][max],int n){
	b[0][0] = a[0][0];
	b[1][0] = a[1][0] + b[0][0];
	b[1][1] = a[1][1] + b[0][0];
	int i,j,k;
	for(i=2;i<n;i++){
		for(j=0;j<=i;j++){
			k = cs_max(a,i,j);
			b[i][j] = a[i][j] + b[i-1][k];
		}
	}
}

int max_line(int n,type b[][max]){
	int j,lowindex;
	type lowkey;
	lowkey = b[n][0];
	
	for(j=1;j<=n;j++){
		if(b[n][j] > lowkey){
			lowkey = b[n][j];
			lowindex = j;
		}
	}
	return lowindex;	
}

void tra_bang(type a[][max],type b[][max],int n,type pa[]){
	int i,j;
	j = max_line(n-1,b);
	printf("%d",j);
	pa[n-1] = b[n-1][j];
//	printf("%d ",pa[n-1]);
	for(i=n-1;i>=1;i--){
		j = cs_max(a,i,j);
		pa[i-1] = b[i-1][j];
	}
}

void inpa(type pa[],int n){
	int i;
	printf("\nphuong an : ");
	for(i=0;i<=n-2;i++){
		printf("%d -> ",pa[i]);
	}
	printf("%d ",pa[n-1]);
}

int main (){
	int n;
	type a[max][max];
	type b[max][max];
	type pa[max];
	Read_file(a,&n);
	print_data (a,n);	
	tao_bang(a,b,n);
	printf("\n-------------\n");
	printf("bang \n \n");
	print_data(b,n);
	tra_bang(a,b,n,pa);
	inpa(pa,n);
	return 0;
}
