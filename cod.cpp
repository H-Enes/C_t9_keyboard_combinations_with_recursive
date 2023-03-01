#include <stdio.h>

char data[10][5]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
				//0  1    2     3     4     5     6     7      8      9

 void   recfonk(int sayi[], char sonuc[],int indis){
     	
        if(sayi[indis]=='\0'){
            printf("%s ",sonuc);
            return;
        }
        int a=sayi[indis];
        
     
        char data2[5];
        
        for(int i=0; data[a][i]!='\0'; i++){
        	data2[i]=data[a][i];
		}
     
       

        for (int i = 0; data2[i]!= '\0'; i++) {
            sonuc[indis] = data2[i];
            
            recfonk(sayi,sonuc,indis+1);
            
        }
    }

int main() {
    char sayi1[10];
    int  sayi[15];
    printf("sayiyi giriniz:\n");
    scanf("%s",sayi1);
    
    /*for (int i = 0;sayi1[i]!='\0'; i++) {
        sayi[i] = sayi1[i] - '0';
        sayi[i+1] = NULL;
    } */
    
    int a=0;
    for (int i=0; sayi1[i]!='\0'; i++) {
    	if(sayi1[i] !='0' && sayi1[i]!= '1'){
    		sayi[a] = (sayi1[i] - '0');
        	a++;
		} 
    }
    sayi[a] = '\0';

    char sonuc[20];
    
    recfonk(sayi,sonuc,0);
    
  

  return 0;
}

