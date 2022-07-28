#include<stdio.h>
#include<conio.h>
int main(){
	// four band resistance calculation program
	// Declaring Variables
	int value[] = {1,2,3,4,5,6,7,8,9,};
	int firstband, secondband,multiplyer, i;
	float tolerance,mv,tv;
	
	// printing pattern to make a Program more attractive //
	printf("\t\t");
	for(i=0; i<50; i++){
		printf("__");
	};
	printf("\n\n\t\t\t\t\tResistance Calculator App In C\n\n\t\t");

	for(i=0; i<50; i++){
		printf("__");
	};
	// printing instruction //
	printf("\n\t\tBlack = 0\n");
	printf("\t\tBrown = 1\n");
	printf("\t\tRed = 2\n");
	printf("\t\tOrange = 3\n");
	printf("\t\tYellow = 4\n");
	printf("\t\tGreen = 5\n");
	printf("\t\tBlue = 6\n");
	printf("\t\tViolet = 7\n\t\tGrey = 8\n\t\tWhite = 9\n");
	printf("\t\tGold = 10\n\t\tSilver = 11\n\n");
	
	// Taking the color value of a resistor bands //
	printf("\t\t Enter the color of First Band :");
	scanf("%d",&firstband);
	
	printf("\t\t Enter the color of Second Band :");
	scanf("%d",&secondband);
	
	printf("\t\t Enter the color of Third Band :");
	scanf("%d",&multiplyer);
	
	printf("\t\t Enter the color of Fourth Band :");
	scanf("%f",&tolerance);
	
	// Putting the value of multiplyer through user input //
	if(multiplyer==0){
		mv = 1;
	}else if(multiplyer==1){
		mv = 10;
	}else if(multiplyer==2){
		mv = 100;
	}else if(multiplyer==3){
		mv = 1000;
	}else if(multiplyer==4){
		mv = 10000;
	}else if(multiplyer==5){
		mv = 100000;
	}else if(multiplyer==6){
		mv = 1000000;
	}else if(multiplyer==7){
		mv = 10000000;
	}else if(multiplyer==8){
	    mv = 100000000;	
	}else if(multiplyer==9){
		mv = 1000000000;
	}else if(multiplyer==10){
		mv = 0.1;
	}else if(multiplyer==11){
		mv = 0.01;
	};
	
	
	
	if(tolerance==0){
	
	}else if(tolerance==1){
		tv = 1;
	}else if(tolerance==2){
		tv = 2;
	}else if(tolerance==3){
		tv = 3;
	}else if(tolerance==4){
		tv = 4;
	}else if(tolerance==5){
		tv = 0.5;
	}else if(tolerance==6){
		tv = 0.25;
	}else if(tolerance==7){
		tv = 0.10;
	}else if(tolerance==8){
		tv = 0.05;
	}else if(tolerance==9){
	
	}else if(tolerance==10){
		tv = 5;
	}else if(tolerance==11){
		tv = 10;
	}else{
		printf("\t\t Please Enter the Correct Number of fourth band by looking the number above\n");
	};
	
	float resistance = (firstband * 10 + secondband) * mv;
	printf("\t\t Resistance = %f ohm +- %f%%\n\n",resistance,tv);
	
	
	
	return(0);
}
