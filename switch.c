#include <stdio.h>
#include <math.h>


int main(){
	int a,b;
	char op;
	
	printf("gab zwei Zahlen ein \n");
	scanf("%d %d",&a,&b); //no comman when specifying data type for scanf. so it's %d %d, rather than %d, %d
	printf("gab einen Operator ein \n");
	printf("+ für Summe \n");
	printf("- für Subtraktion \n");
	printf("* für Multiplikation\n");
	printf("/ für Division \n");
	printf("p für Potenz \n");
	printf("s für Quadratswurzel \n");
	scanf(" %c", &op);
		
	/*if (op == '+'){
		printf("Die Summe ist %d\n",a+b);	
	}
	*/
	switch(op){
		case '+':
			printf("Die Summe ist %d\n", a+b);
			break;
		case '-':
			printf("Die SUbtraktion ist %d\n", a-b);
			break;
		case '*':
			printf("Die Multiplikation ist %d\n", a*b);
			break;
		case '/':
			printf("Die Division ist %.2f\n", (float)a/b);
			break;
		case 'p':
			printf("Die Potenz ist %.0f\n", pow((float)a,b));
			break;
			
		case 's':
			printf("Die Quadratswurzel von %d", a);
			printf (" ist %.2f", sqrt(a));
			
			break;
					
		default:
			printf("ungülstige Option");
	}
		
	
	return 0;
}