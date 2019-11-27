#include <stdio.h>


int is_power_2 (int num){
	if (num<1){
		return 0;
	}

	return  !(num & (num-1)) ;
}

int main() {

    printf("please enter a number: ");
    int n, ans;
    scanf("%d", &n);
    ans=is_power_2 (n);
    printf("%d\n",ans);
    return 0;
}
