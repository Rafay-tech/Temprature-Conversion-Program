#include <stdio.h>
int main()
{
	float fh,cl,K;
	int ch;
	printf("\n 1. Convert temp from Fahrenheit to Celsius.");
	printf("\n 2. Convert temp from Celcius to Fahrenheit.");
	printf("\n 3. Convert temp from Celcius to Kelvin.");
	printf("\n 4. Convert temp from Kelvin to Celcius.");
	printf("\n 5. Convert temp from Fahrenheit to Kelvin.");
	printf("\n 6. Convert temp from Kelvin to Fahrenheit.");
	printf("\n Enter Your Choice: ");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("\n Enter Temp in Fahrenheit:  ");
		scanf("%f",&fh);
		cl=(fh-32/1.8);
		printf("Temp in Celcius: %f: ",cl);
	}
	else if(ch==2)
	{
		printf("\n Enter Temp in Celcius:  ");
		scanf("%f",&cl);
		fh=(cl*1.8+32);
		printf("Temp in Fahrenheit: %f: ",fh);
	}
	if(ch==3)
	{
		printf("\n Enter Temp in Celsius:  ");
		scanf("%f",&cl);
		K=(cl+273);
		printf("Temp in Kelvin: %f: ",K);
	}
	else if(ch==4)
	{
		printf("\n Enter Temp in Kelvin:  ");
		scanf("%f",&K);
		cl=(K-273);
		printf("Temp in Celcius: %f: ",cl);
	}
	if(ch==5)
	{
		printf("\n Enter Temp in Fahrenheit:  ");
		scanf("%f",&fh);
		K=0.555*(fh-32)+273;
		printf("Temp in Kelvin: %f: ",K);
	}
	else if(ch==6)
	{
		printf("\n Enter Temp in Kelvin:  ");
		scanf("%f",&K);
		fh= 1.8*(K-273)+32;
		printf("Temp in Fahrenheit: %f: ",fh);
	}
	return 0;
}
