#include <stdio.h> 
\*
 Eventos sencillos sobre arreglos completos
https://omegaup.com/arena/problem/Eventos-sencillos-sobre-arreglos 
 *\
int main(){ 
 
    int n,m,in=0,res=0; 
 
    scanf("%d",&n); 
    int arr[n]; 
    for(int i=0;i<n;++i){ 
        scanf("%d",&arr[i]); 
    } 
    scanf("%d",&m); 
    int eve[m]; 
    for(int i=0;i<m;++i){ 
        scanf("%d",&eve[i]); 
    }

 
    for(int i=0;i<m;++i){ 
        if(eve[i]){ 
            ++in; 
        } 
        else{ 
           in=0; 
          ++res; 
        } 
    }
    if(res>0){ 
     for(int i = 0; i<n;++i){ 
           arr[i]=0; 
          } 
       } 
   for (int i = 0; i<n;i++){ 
      arr[i]+=in; 
   }

 
   for(int i=0;i<n;i++){ 
      printf("%d ",arr[i]); 
   } 
    return 0; 
}
