#include<stdio.h>

 float add(float a, float b){
 float add ;
 add = a+b;
 return add;
 }
 
 
 float sub(float a, float b){
 float sub ;
 sub = a-b;
 return sub;
 }
 
 
 float multiply(float a, float b){
 float multiply ;
 multiply = a*b;
 return multiply;
 }
 
 
 float division(float a, int b){
 float division ;
 division = a/b;
 return division;
 }
 
 
 float modulus(int a, int b){
 float modulus ;
 modulus = (int)a % (int)b;
 return modulus;
 }
 
 int main(){
 	
 	int choice;
 	float num1,num2;
 	 
 	 while(1){
 	 	printf("press 1 for +\n");
 	 	printf("press 2 for -\n");
 	 	printf("press 3 for *\n");
 	 	printf("press 4 for /\n");
 	 	printf("press 5 for %% \n");
 	 	printf("press 0 for exit\n");
 	 	
 	 	printf("enter your choice:");
 	 	scanf("%d",&choice);
 	 	
 	 	if(choice == 0){
 	 		printf("the program has been exited\n");
 	 		break;
		  }
		  
		  if(choice >=0 && choice<=5){
		  	printf("enter the first number:");
		  	scanf("%f",&num1);
		  	printf("enter the second number:");
		  	scanf("%f",&num2);
		  }
		  
		  switch(choice){
		  	case 1:
		  		printf("addition of %.2f and %.2f is %.2f\n",num1,num2,add(num1,num2));
		  		break;
		  		
		  	case 2:
		  		printf("subtraction of %.2f and %.2f is %.2f\n",num1,num2,sub(num1,num2));
		  		break;
		  		
		  	case 3:
		  		printf("multiply of %.2f and %.2f is %.2f\n",num1,num2,multiply(num1,num2));
		  		break;
		  		
		  	case 4:
		  		printf("division of %.2f and %.2f is %.2f\n",num1,num2,division(num1,num2));
		  		break;
		  		
		  	case 5:
		  		printf("modulus of %.2f and %.2f is %.2f\n",num1,num2,modulus(num1,num2));
		  		break;
		  		
            default:
            	printf("sorry! invalid choice");
		  }
	  }
 }
 
