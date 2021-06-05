// Pointers

//#include<stdio.h>
//void main()
//{
//	int a;
//	int *p;
//	int **ppt;
//	a = 12; // normal value 12 is store in variable a
//	p = &a; // address of value 12 is store in variable p
//	ppt = &p; // address of value p is store in variable ppt
//	
//	printf("Variable a : %d\n",a);
//	printf("value of p : %u\n",p);
//	printf("value of ppt : %u\n",ppt);
//	printf("value of dereferencing p is %d\n",*p);
//	printf("value of deferencing ppt is %d\n",**ppt);
//}

//Pointers using arithmetic operator


//#include<stdio.h>
//void main(){
//	int max,i,var[100];
//	printf("Enter the number of element in array:");
//	scanf("%d",&max);
//	for(i=0;i<max;i++){
//		printf("Enter the %d element: ",i+1);
//		scanf("%d",&var[i]);
//	}
//	int *ptr = var;
//	
//	for(i=0;i<max;i++){
//		printf("Address of var[%d] = %u\n",i,ptr);
//		printf("Value of var[%d] = %d\n",i,*ptr);
//		ptr++;
//	}
//}


//#include<stdio.h>
//void main(){
//	int i,a[3] = {10,20,30};
//	for(i=0;i<3;i++){
//		printf("\nElements are : %d\n",a[i]);
//		printf("Accessing Elements using Pointers\n");
//		printf("Elements are : %d\n",*(a + i));
//		printf("-----------------------------------");
//	}
//}

//Array of Pointers

#include<stdio.h>
void main(){
	int a[5] = {1,2,3,4,5};
	int b[5] = {6,7,8,9,0};
	int c[5] = {9,8,7,6,5};
	int *p[3] = {a,b,c};
	int i;
	for(i=0;i<3;i++){
		printf("first elements of given 3 array: %d\n",*p[i]);
	}
	printf("-------------------------------------------------");
	
	for(i=0;i<3;i++){
		printf("\nsecond elements of given 3 array: %d\n",*p[i] + 1);
	}
	printf("-------------------------------------------------");
	
}


















