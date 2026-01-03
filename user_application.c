#include <stdio.h>
#include <math.h>

void Summe(int a, int b){
printf("die Summe ist %d\n", a + b);
}

void Subtraktion(int a, int b){
printf("die Subtraktion ist %d\n", a - b);
}

void Multiplikation(int a, int b){
printf("die Multiplikation ist %d\n", a * b);
}

void Division(int a, int b){
printf("die Division ist %.2f\n", (float)a / b);
}

void Potenz(int a, int b){
printf("die Potenz ist %0.f\n", pow(a, b)); // es gibt einen anderen seltsamen Grund, dass man 0.f für Potenz verwenden muss
//like they say, just run with it. if you must use %0.f to specify exponentiation, just go along with it
}

void Quadratswurzel(int a){
	printf("die Quadratswurzel ist %.2f\n", sqrt(a));
}

int main(){
	
	int Eingabe_a;
	int Eingabe_b;
	char oper;
	int nutzer_opt;
	
printf("Wahlen Sie eine Option \n:");
printf("Druck '1' für Zahlen berechnen \n");
printf("oder '2', um von Celsius in Fahrenheit umzurechnen.");

scanf("%d", &nutzer_opt);

if (nutzer_opt == 1)
	goto Zahlen_rechnen;
	if (nutzer_opt == 2)
	goto Konvertion;
		
	Zahlen_rechnen:	
	printf("gab zwei Zahlen ein \n");
	scanf("%d %d", &Eingabe_a, &Eingabe_b);
	printf("jetzt gab einen Operator ein ");
	scanf(" %c", &oper); // Es gibt einen seltsamen Grund, dass man ein Leerzeichen vor %c Variablen setzen muss
	//printf ("du hast gewählt: %c", oper);
	
switch(oper){
	case '+':
		Summe(Eingabe_a, Eingabe_b);
		break;
		
	case '-':
		Subtraktion(Eingabe_a, Eingabe_b);
		break;
	case '*':
		Multiplikation(Eingabe_a, Eingabe_b);
		break;
	case '/':
		Division(Eingabe_a, Eingabe_b);
		break;
	case 'p':
		Potenz(Eingabe_a, Eingabe_b);
		break;
	case 's':
		Quadratswurzel(Eingabe_a);
		break;
	default:
	printf("Keine günstige Option \n");
	
	break;
}
return 0;
Konvertion:
printf("du hast Konvertion gewählen \n");

float toCelsius(float f){
	float temp = (5.0/9.0) * (f - 32.0);
	
	return temp;
}

float Fahrenheit;

printf("gab einen Wert für Fahrenheit ein: \n");
scanf("%f", &Fahrenheit);

printf("Die umgewandelte Temperatur für %.2f", Fahrenheit);
printf(" von Fahrentein zu Celsius ist ");
printf ("%.2f\n", toCelsius(Fahrenheit));
	
	return 0;
}