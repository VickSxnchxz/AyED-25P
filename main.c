practica

// https://omegaup.com/arena/problem/Sumando-todos-los-subarreglos 
#include <stdio.h> 
 
int main( ) { 
   int n, k; 
   scanf("%d%d", &n, &k); 
 
   int arr[n]; 
   for (int i = 0; i < n; ++i) { 
      scanf("%d", &arr[i]); 
   } 
 
   for (int ini = 0; ini < n - k + 1; ++ini) { 
      int suma = 0; 
      for (int i = 0; i < k; ++i) { 
         suma += arr[ini + i]; 
      } 
      printf("%d ", suma); 
   } 
}
//ventana deslizante
