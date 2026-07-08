#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    float a[n];
    for(int i=0;i<n;i++){
        float sum = tr[i].a+tr[i].b +tr[i].c;
        float p = sum/2;
        float  s = sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        a[i] = s;
            }
    for(int i=0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
        if (a[i]>a[j]){
            float temp = a[i];
            a[i]=a[j];
            a[j]=temp;
            
            triangle t = tr[i];
            tr[i]=tr[j];
            tr[j] = t;
            
        }
        else{
            continue;
        }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}