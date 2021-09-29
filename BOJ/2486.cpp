#include <iostream>
#include <cstring>
#include <cstdio>

char code[16], list[33000][16];
int idx;

void set_code(int len)
{
	int i;
	for(i=0; i<len; i++)
		list[idx][i] = code[i];
	list[idx++][i] = 0;
}

void set_gray(int n, int len, int reverse)
{
	if(n == len) {
		set_code(n);
		return ;
	}

	code[len] = reverse + '0';
	set_gray(n, len+1, 0);
	code[len] = 1 - reverse + '0';
	set_gray(n, len+1, 1);
}


int main()
{
	int i, n, k, len=1, ok=0, ok2=0;
	char temp[4][16];
	scanf("%d %d", &n, &k);
	set_gray(n, 0, 0);
		
	for(i=0; i<2*k; i++)
		scanf("%s", temp[i]);
		
	i=n;
	while(i--)
		len *= 2;
	
	for(i=0; i<len; i++) {
		if(!strcmp(temp[0], list[i])) {
			if((i != 0 && !strcmp(temp[1], list[i-1])) || (i != len-1 && !strcmp(temp[1], list[i+1])))
			{
				ok2 = 1;
				break;
			}
			else if(i == 0) {
				if(!strcmp(temp[1], list[len-1]) || !strcmp(temp[1], list[1])) {
					ok2 = 1;
					break;
				}
			}
			else if(i == len-1) {
				if(!strcmp(temp[1], list[0]) || !strcmp(temp[1], list[len-2])) {
					ok2 = 1;
					break;
				}
			}
		}
	}

	if(ok && k == 2) {
		for(i=0; i<len; i++) {
			if(!strcmp(temp[2], list[i])) {
				if((i != 0 && !strcmp(temp[3], list[i-1])) || (i != len-1 && !strcmp(temp[3], list[i+1])))
				{
					ok2 = 1;
					break;
				}
				else if(i == 0) {
					if(!strcmp(temp[3], list[len-1]) || !strcmp(temp[3], list[1])) {
						ok2 = 1;
						break;
					}
				}
				else if(i == len-1) {
					if(!strcmp(temp[3], list[0]) || !strcmp(temp[3], list[len-2])) {
						ok2 = 1;
						break;
					}
				}
			}
		}
	}

	if(k == 2) {
		if(!ok2)
			puts("-1");
		else {
			for(i=0; i<idx; i++) {
				if(i != 0 && i%8 == 0) 
					puts("");
				printf("%s ", list[i]);
			}	
			puts("");
		}
	}
	else {
		if(!ok)
			puts("-1");
		else {
			for(i=0; i<idx; i++) {
				if(i != 0 && i%8 == 0) 
					puts("");
				printf("%s ", list[i]);
			}	
			puts("");
		}
	}
	return 0;
}
