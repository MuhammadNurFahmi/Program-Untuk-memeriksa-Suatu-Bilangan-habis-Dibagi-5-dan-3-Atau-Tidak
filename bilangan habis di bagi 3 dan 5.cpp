#include <iostream>

using namespace std;
int main()
{
int x;
printf("MEMERIKSA SUATU BILANGAN HABIS DIBAGI 5 DAN 3.\n");
printf("-------------------------------------\n");
printf("Masukkan suatu bilangan : "); scanf("%i",&x);
 if(x%3==0 && x%5==0)
         printf("%i merupakan bilangan habis dibagi 5 dan 3");
        else {
         printf("%i tidak habis dibagi 5 dan 3");
         }
return 0;
}
