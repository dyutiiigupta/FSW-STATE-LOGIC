#include <stdio.h>
#include<math.h>
int main() {
    
    int pressure,pressure1;
    double altitude,prealtitude=0,pre2altitude=0,apogee=0,payload=0,probe=0,newpayload=0,newprobe=0;
    for(int i=0;i<10;i++){
    printf("check the value of pressure and pressure1 and enter\n");
    scanf("%d%d",&pressure,&pressure1);
    altitude = 44330*(1-pow(((double)pressure/pressure1),0.1903));
    if(altitude>=-0.1&&altitude<=0.1&&prealtitude>=-0.1&&prealtitude<=0.1)
    {
        printf("Software state: launch pad\n");
    }
    else if(altitude>0&&altitude>prealtitude){
        printf("Software state: ascent\n");
    }
    else if(pre2altitude<prealtitude&&prealtitude>altitude){
        printf("Software state: apogee\n");
        apogee=prealtitude;
        payload=(80*apogee)/100;
        
    }
    
    else if(altitude<=payload&&prealtitude>payload){
        printf("Software state: payload release\n");
        newpayload=altitude;
    }
     else if(altitude>=-0.1&&altitude<=0.1&&prealtitude>0.1){
        printf("Software state: landed\n");
    }
    else if(altitude<=2&&prealtitude>2){
        printf("Software state: probe release\n");
        newprobe=altitude;
    }
    
    else if(altitude<prealtitude&&altitude!=newprobe&&altitude!=newpayload){
        printf("Software state: descent\n");
    }
   
    pre2altitude=prealtitude;
    prealtitude=altitude;
    
    } 
}
