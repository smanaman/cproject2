#include<stdio.h>
int main(){
float unit;
float total_unit;
float value;
float sum;
printf("For the first 50 units Rs. 0.50/unit");
printf("For the next 100 units Rs. 0.75/unit");
printf("For the next 100 units Rs. 1.20/unit");
printf("For units above 250 Rs. 1.50/unit");
printf("An additional surcharge of 20% is added to the bill.");
printf("all value apply your bill and final total is  your pay amount");
printf("Enter your miter unit\n");
scanf("%f",&unit);

if(unit < 0 && 50 < unit){
    sum=unit*0.50;
  
}else if(unit <=150){
sum=25+((unit-50) *0.75);
}else if(unit<=250){

  sum=100+((unit-150)*1.20) ; 
}else {
sum=220+((unit-250)*1.50);
}
value=sum*0.20;
total_unit=sum+value;
   printf("Your final amount with  additional surcharge of 20%% is added to the bill %.2f",total_unit);
   printf("thank you");
    return 0;
}