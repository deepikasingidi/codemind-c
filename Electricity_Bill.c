#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    if(u<=199){
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,1.20,u*1.20,0.00,(u*1.20)+0.00);
    }
    else if(u>=200 && u<400){
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,1.40,u*1.40,0.00,(u*1.40)+0.00);
    }
    else if(u>=400 && u<600){
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,1.60,u*1.60,(u*1.60*15)/100.0,(u*1.60)+(u*1.60*15)/100.0);
    }
    else if(u>=600 && u<800){
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,1.80,u*1.80,(u*1.80*15)/100.0,(u*1.80)+(u*1.80*15)/100.0);
    }
    else{
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,2.00,u*2.00,(u*2.00*15)/100.0,(u*2.00)+(u*2.00*15)/100.0);
    }
}