
#include <stdio.h>

int month_khom(int check2){
    int i,j;
    printf("\n");
    for(i=1;i<=31;i++){
        printf("\r");     // start at beginning of the line 
        for(j=check2;j>0;j--){
               printf("\t");}
         printf("%d",i);
         check2=check2+1;
         if(check2>7){
             printf("\n");
             check2=1;
         }
    }
    return check2;
}

int month_pun(int check2,int year){
    int i,j;
    printf("\n");
    if(year%4!=0){
    	for(i=1;i<=28;i++){
        printf("\r");    // start at beginning of the line 
        for(j=check2;j>0;j--){
               printf("\t");}
         printf("%d",i);
         check2=check2+1;
         if(check2>7){
             printf("\n");
             check2=1;
         }
    }
	}
	else if(year%4==0){
		for(i=1;i<=29;i++){
        printf("\r");    // start at beginning of the line 
        for(j=check2;j>0;j--){
               printf("\t");}
         printf("%d",i);
         check2=check2+1;
         if(check2>7){
             printf("\n");
             check2=1;
         }
    }
	}
    return check2;
}

int month_yon(int check2){
    int i,j;
    printf("\n");
    for(i=1;i<=30;i++){
        printf("\r");    // start at beginning of the line 
        for(j=check2;j>0;j--){
               printf("\t");}
         printf("%d",i);
         check2=check2+1;
         if(check2>7){
             printf("\n");
             check2=1;
         }
    }
    return check2;
}

int main() {  
    int z,i,j,year,check=7;
    char month[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    char day[7][5]={"Mo","Tu","We","Th","Fr","Sa","Su"};
    do{
    printf("Enter year ( more than 2023 ) : ");
    scanf("%d",&year);
    }while(year<2023);
    system("cls");
    for(z=2023;z<=year;z++){
    	 printf("----------------This is CALENDER of %d -----------------\n\n",z);
    	 for(i=0;i<12;i++){
               printf("\t\t%s\n",month[i]);
           for(j=0;j<7;j++){
               printf("\t%s",day[j]);
                }
            switch(i){
                 case 0:case 2:case 4:case 6:case 7:case 9:case 11:
                 check=month_khom(check);
                 break;
                 case 1:
                 check=month_pun(check,z);
                 break;
                 case 3:case 5:case 8:case 10:
                 check=month_yon(check);
                 break;
                 }
             printf("\n\n");
           }
        if(z!=year){
        	system("cls");
		}
		else if(z==year){
		   printf("\n\n");
		   break;
		}
	 }
   
   
    return 0;
}
