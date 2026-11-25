#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(){
	int seed = time(NULL);
	int z1 = rand_r(&seed) % 6 + 1;
	int z2 = rand_r(&seed) % 6 + 1;
	if(z1 == 6 && z2 == 5)
		printf("Dau cu zaru 6 5 n-am nevoie de servici");
	else if (z1 == 6 && z2 == 6)
		printf("Dau cu zaru 6 6 ca mine nu se mai naste");
	else
		printf("Dau cu zaru %d %d",z1,z2);
	return 0;
}
