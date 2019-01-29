/*
Name: Sydney Richardson
Lab #1
Date: 1/10/2019
Description: This program takes an input currency and amount and converts it
*/

echo "# Currency-Calculator" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/srich1122/Currency-Calculator.git
git push -u origin master

#include<stdio.h>

int main()
{
// USD Conversions
	const float usd2gbp = 0.77;
	const float gbp2usd = 1.30;
	
	const float usd2cad = 1.33;
	const float cad2usd = 0.75;
	
	const float usd2eur = 0.88;
	const float eur2usd = 1.14;
	
	const float usd2aud = 1.39;
	const float aud2usd = 0.72;
	
// GBP Conversions	
	const float gbp2cad = 1.73;
	const float cad2gbp = 0.58;
	
	const float gbp2eur = 1.14;
	const float eur2gbp = 0.88;
	
	const float gbp2aud = 1.81;
	const float aud2gbp = 0.55;
	
// CAD Conversions
	const float cad2eur = 0.66;
	const float eur2cad = 1.51;

	const float cad2aud = 1.05;
	const float aud2cad = 0.95;
	
// EUR Conversions
	const float eur2aud = 1.59;
	const float aud2eur = 0.63;
	
// Set amount to 0
	float amount = 0.0;

// Ask user for input amount	
	printf("Please enter amount: ");
	scanf("%f",&amount);
	
//Print the results based on input
	printf("\n\n\t USD \t GBP \t CAD \t EUR \t AUD ");
	printf("\n\n USD \t %.02f \t %.02f \t %.02f \t %.02f \t %.02f", amount, amount*usd2gbp, amount*usd2cad, amount*usd2eur, amount*usd2aud);
	printf("\n\n GBP \t %.02f \t %.02f \t %.02f \t %.02f \t %.02f", amount*gbp2usd, amount, amount*gbp2cad, amount*gbp2eur, amount*gbp2aud);
	printf("\n\n CAD \t %.02f \t %.02f \t %.02f \t %.02f \t %.02f", amount*cad2usd, amount*cad2gbp, amount, amount*cad2eur, amount*cad2aud);
	printf("\n\n EUR \t %.02f \t %.02f \t %.02f \t %.02f \t %.02f", amount*eur2usd, amount*eur2gbp, amount*eur2cad, amount, amount*eur2aud);
	printf("\n\n AUD \t %.02f \t %.02f \t %.02f \t %.02f \t %.02f", amount*aud2usd, amount*aud2gbp, amount*aud2cad, amount*aud2eur, amount);
	









 
}
