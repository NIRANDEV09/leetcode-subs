#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char s[1000] ;
    int count[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]>='0' && s[i] <='9'){
            if (s[i]=='0') count[0]+=1;
            else if(s[i]=='1') count[1]+=1;
            else if(s[i]=='2') count[2]+=1;
            else if(s[i]=='3') count[3]+=1;
            else if(s[i]=='4') count[4]+=1;
            else if(s[i]=='5') count[5]+=1;
            else if(s[i]=='6') count[6]+=1;
            else if(s[i]=='7') count[7]+=1;
            else if(s[i]=='8') count[8]+=1;
            else if(s[i]=='9') count[9]+=1;
        }
        else{
            continue;
        }
        
    }
    for(int i=0;i<10;i++){
    printf("%d ",count[i]);    
    }
    
    return 0;
}
