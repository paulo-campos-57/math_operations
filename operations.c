#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void cleanScreen(){
	system("CLS");
}

void pause(){
	printf("\n\nPress any key to continue...\n\n");
	getch();
}

int multipleSum(int n1, int n2, int v){     //Sum of multiples
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	
	for(i = 0; i < v; i++){
		if(i % n1 == 0){
			sum1 = sum1 + i;
		}else if(i % n2 == 0){
			sum2 = sum2 + i;
		}
	}
	sum = sum1 + sum2;
	
	return sum;
}

void fibonacci(int v){    //Fibonacci sequence
	int i;
	int n1 = 1;
	int n2 = 0;
	int aux;
	
	for(i = 0; i < v; i ++){
		aux = n1 + n2;
		n1 = n2;
		n2 = aux;
		printf("-> %d\n", aux);
	}
}

void LCM(int n1, int n2){   //LCM
	int max;
	
	max = (n1 > n2) ? n1 : n2;
	
	while(1){
		if(max % n1 == 0 && max % n2 == 0){
			printf("The LCM of %d and %d is: %d", n1, n2, max);
			break;
		}
		max++;
	}
}

int GCD(int n1, int n2){    //GCD
	int rest;
	
	do{
		rest = n1 % n2;
		
		n1 = n2;
		n2 = rest;	
	}while(rest != 0);
	
	return n1;
}

float triangle(float a, float b){    //Triangle hypotenuse
	float hip;
	float sum;
	
	sum = (pow(a,2) + pow(b,2));
	hip = sqrt(sum);
	
	return hip;
}

float retangle(float a, float b){     //Retangle area
	float area;
	
	area = a * b;
	
	return area;
}

void cylinder(float r, float h){      //Cylinder area
	float pi = 3.14;
	float p;
	float bArea;
	float lArea;
	float tArea;
	
	p = pow(r, 2);
	bArea = pi * p;
	lArea = 2 * pi * r * h;
	tArea = (2 * (bArea)) + lArea;
	
	printf("\n\n-The base area of the cylinder is: %.2f", bArea);
	printf("\n-The lateral area of the cylinder is: %.2f", lArea);
	printf("\n-The total area of the cylinder is: %.2f", tArea);
}

float trapezium(float b1, float b2, float h){     //Trapezium area
	float area;
	
	area = ((b1 + b2) * h) / 2;
	
	return area;
}
int main(){
	int op;
	int a;
	int b;
	int value;
	float n1;
	float n2;
	float n3;
	do{
		printf("----------Main menu----------\n\n");
		printf("1-Sum of multiples\n");
		printf("2-Fibonacci sequence\n");
		printf("3-LCM (Lowest Common Multiple)\n");
		printf("4-GCD (Greatest Common Divisor)\n");
		printf("5-Find the hypotenuse of a triangle\n");
		printf("6-Find the area of a retangle\n");
		printf("7-Find the area of a cylinder\n");
		printf("8-Find the area of a trapezium\n");
		printf("0-Exit\n");
		printf("\nType one of the numbers below and press ENTER: ");
		scanf("%d", &op);
		fflush(stdin);    //Clean buffer
		cleanScreen();
		switch(op){
			case 1:
				printf("Type the first number: ");
				scanf("%d", &a);
				fflush(stdin);
				printf("\n\nType the second number: ");
				scanf("%d", &b);
				fflush(stdin);
				printf("\n\nType the integer to see the sum of the multples of %d and %d between it: ", a, b);
				scanf("%d", &value);
				fflush(stdin);
				printf("\n\nThe sum of the multiples of %d and %d between 0 and %d is: %d", a, b, value, multipleSum(a, b, value));
				pause();
				break;
			case 2:
				printf("Type how many times you want to repeat the Fibonacci Sequence: ");
				scanf("%d", &value);
				fflush(stdin);
				fibonacci(value);
				pause();
				break;
			case 3:
				printf("Type the first integer: ");
				scanf("%d", &a);
				fflush(stdin);
				printf("\n\nType the second integer: ");
				scanf("%d", &b);
				fflush(stdin);
				printf("\n\n");
				LCM(a, b);
				pause();
				break;
			case 4:
				printf("Type the first integer: ");
				scanf("%d", &a);
				fflush(stdin);
				printf("\n\nType the second integer: ");
				scanf("%d", &b);
				fflush(stdin);
				printf("\n\nThe GCD of %d and %d is: %d", a, b, GCD(a, b));
				pause();
				break;
			case 5:
				printf("Type the size of the A side: ");
				scanf("%f", &n1);
				fflush(stdin);
				printf("\n\nType the size of the B side: ");
				scanf("%f", & n2);
				fflush(stdin);
				printf("\n\nThe hypotenuse of the triangle with the sides A = %.2f and B = %.2f is: %.2f", n1, n2, triangle(n1, n2));
				pause();
				break;
			case 6:
				printf("Type the size of the base: ");
				scanf("%f", &n1);
				fflush(stdin);
				printf("\n\nType the size of the height: ");
				scanf("%f", &n2);
				fflush(stdin);
				printf("\n\nThe area of the retangle with base %.2f and height %.2f is: %.2f", n1, n2, retangle(n1, n2));
				pause();
				break;
			case 7:
				printf("The value of pi in this operation will be: 3.14");
				printf("\n\nType the size of the radius: ");
				scanf("%f", &n1);
				fflush(stdin);
				printf("\n\nType the size of the height: ");
				scanf("%f", &n2);
				fflush(stdin);
				cylinder(n1, n2);
				pause();
				break;
			case 8:
				printf("Type the size of the smaller base: ");
				scanf("%f", &n1);
				fflush(stdin);
				printf("\n\nType the size of the bigger base: ");
				scanf("%f", &n2);
				fflush(stdin);
				printf("\n\nType the size of the height: ");
				scanf("%f", &n3);
				fflush(stdin);
				printf("\n\nThe area of the trapezium with bases %.2f and %.2f and height %.2f is: %.2f", n1, n2, n3, trapezium(n1, n2, n3));
				pause();
				break;
			case 0:
				break;
			default:
				printf("Invalid option.");
				pause();
				break;
		}
		cleanScreen();
	}while(op != 0);
	
	printf("Process ended.");
	pause();
	
	return 0;
}
