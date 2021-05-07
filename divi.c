#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <math.h>


int divi( double num, double denom,int precision)
{

					
/**************************************************************************************************/			
	int32_t arrNum; 

	//int aa =(int)(

	//double part_Franu;

	//double part_Fraden;
	int32_t arrDenom; 
	int i=0,j=0,v=0;
	int k = 0;
	float res = 0.0;
	/*transforme le flottand en entier*/
	for(i =0; i < precision; i++){

		num = num*10;
		
		denom = denom*10;





		}
/***************************************************************************************************/
		
	arrNum = (int32_t)num;
	arrDenom = (int32_t)denom;
	
/**************************************************************************************************/	
	
	/*test*/
	printf("%d, ....%d\n",arrNum,arrDenom);
	
	
	/*numerateur et denominateur positif*/
/***************************************************************************************************/
	/*cas ou on a tous positif*/
		if(arrNum > arrDenom && arrNum > 0 && arrDenom >0){

		/*division entiere*/
		while(arrNum  >= arrDenom){
		
		 	arrNum = arrNum - arrDenom;
		 	
		 	k++;
		 
		
	printf("%d, ....%d\n",(int)arrNum,(int)arrDenom);
		
		}
		
		
		
		//printf("%d, ....%d\n\n\n",(int)arrNum,(int)arrDenom);
		

					
	
	
	}
	
		
		if(arrNum < arrDenom && arrNum>0 && arrDenom >0){
	
		while(arrNum < arrDenom){
			
			arrNum = arrNum*(int32_t)10;
			j++;
			





		


		}
		

		while(arrNum >= arrDenom){
		
		 	arrNum = arrNum -arrDenom;
		 	
		 	v++;
		 
		}
		

			

		

		
		}
		
/*************************************************************************************************************/


		
/**************************************************************************************************************/
		/*Lorsque le numérateur est inférieur à zéros*/
		if(arrNum <0 && arrDenom >0 && abs(arrNum) > arrDenom){
		
		
			
			while(abs(arrNum) >= arrDenom){
		
		 		arrNum = arrNum + arrDenom;
		 	
		 		k--;
		 
		}
		

			

		

		
		}
		
		
		/*cas ou le numerateur est inferieur a zero et sa valeur absolu est inferieur au dénominateur*/
		if(arrNum < 0 && arrDenom > 0 && abs(arrNum) < arrDenom){
		
		
				
	
			while(abs(arrNum) < arrDenom){
			
				arrNum = arrNum*(int32_t)10;
				j++;
		


		}
		
		
		
			while(abs(arrNum) >= arrDenom){
		
		 		arrNum = arrNum + arrDenom;
		 	
		 		v--;
		 
		}
		
		
		
		
		
		
		
			
		
		}
/*****************************************************************************************************************************/		
		
		
		
		
	/*********************************************************************************************************************/
	
	/*cas ou le denominateur est le seul a etre inferieur*/
	
	
	/*Lorsque le numérateur est supérieur à la valeur absolue du denominateu*/
		if(arrNum >0 && arrDenom <0 && arrNum > abs(arrDenom)){
		
		
			
			while(abs(arrNum) >= arrDenom){
		
		 		arrNum = arrNum + arrDenom;
		 	
		 		k--;
		 
		}
		

			

		

		
		}
		
		
		/*cas ou le numerateur est superieur a zero et sa valeur absolu est inferieur à la valeur absolut du dénominateurdénominateur*/
		if(arrNum > 0 && arrDenom < 0 && arrNum < abs(arrDenom)){
		
		
				
	
			while(abs(arrNum) < arrDenom){
			
				arrNum = arrNum*(int32_t)10;
				j++;
		


		}
		
		
		
			while(abs(arrNum) >= arrDenom){
		
		 		arrNum = arrNum + arrDenom;
		 	
		 		v--;
		 
		}
		
		
		
		
		
		
		
			
		
		}
		
		
		
	
	
	
	
		
		
		
		
		
		
		
		
		
	/***************************************************************************************************************************/	
	
	
	/*cas ou les deux sont inferieur à 0*/
	
	/*Lorsque le numérateur est inférieur à zéros*/
		if(arrNum <0 && arrDenom <0 && abs(arrNum) > abs(arrDenom)){
		
		
			
			while(abs(arrNum) >= abs(arrDenom)){
		
		 		arrNum = abs(arrNum) - abs(arrDenom);
		 	
		 		k++;
		 
		}
		

			

		

		
		}
		
		
		/*cas ou le numerateur est inferieur a zero et sa valeur absolu est inferieur au dénominateur*/
		if(arrNum < 0 && arrDenom > 0 && abs(arrNum) < abs(arrDenom)){
		
		
				
	
			while(abs(arrNum) < abs(arrDenom)){
			
				arrNum = arrNum*(int32_t)10;
				j++;
		


		}
		
		
		
			while(abs(arrNum) >= arrDenom){
		
		 		arrNum = arrNum + arrDenom;
		 	
		 		v++;
		 
		}
		
		
		
		
		
		
		
			
		
		}
		
		
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/********************************************************************************************************************************/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//double r;
		//r=(v<<j);
		
				//printf("j =%d; v =%d, a==%lf, r===%lf\n",j,v,a);	



		res = k+(0.1*v);
		
		
			/*test du resulta*/
					
		printf("r = %d, %d le resulta = %lf\n",k,v,res);		
		//printf("%d \n",(int)arrNum);
		return k;			
		
	
}
int main(int argc, char**argv)
{

divi(235.5589, 25.41, 3);

divi(-1.10,2.2,1);

	return 0;

}
