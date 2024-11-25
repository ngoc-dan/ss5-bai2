#include <stdio.h>
int main(){
	int n;
	while(1){
		printf("nhap so n : ");
		scanf( "%d", &n);
		if(n == 12){
			goto end;
		}
	else{
		printf("moi nhap lai n\n");
	}
}
end:
	return 0;
}
