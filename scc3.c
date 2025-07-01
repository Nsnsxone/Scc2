#include<stdio.h>

int main() {
   
  char text[] = "supakrid boonyong 4/3 No.32";
  
    int i;
   printf("For loop:\n");
    for  (i = 1; i <=10 ; i++) {
        printf("%d. ",i );
        printf("%s\n", text);
        
    }


int e;

    e = 1;
    printf("\nwhile:\n");
    while (e <= 10) {

        printf("%d. ",e );
        printf("%s\n", text);

        e++;
    }

int j;
printf("\nDo While loop:\n");
    j = 1;
    do {
        printf("%d. ",j );
        printf("%s\n", text);
        j++;
    } while (j <= 10);




    int n;
    printf("PLS ENTER NUMBER: ");
    scanf("%d", &n); 
    while ( n >=1 ) {
        printf("HELLO");
        printf("   %d\n",n);
        n--;

    }
// 4 and 7

     int h;
     h = 1;
    do {
if (h == 4) {
    printf("FOUR\n");
} else if (h == 7) {
printf("SEVEN\n");
} else {
    printf("%d\n",h);
}


        
        h++;
        
    } while (h <= 10);

int x;
x = 5;
while (x<50){
    x = x +5;
    printf("%d\n",x);
}

 // array max1000
 int arr[1000];    
  // index array
    int E = 0;       
    int m;
    int running = 1;
    int previous = 0;

    while (running) {
        printf("PLS ENTER NUMBER (func2): ");
        scanf("%d", &m);

        if (m == 0) {
            printf("Bye\n");
            break;
        } else if (previous == m) {
            printf("Too low, Try again\n");
        } else {
            printf("   %d\n", m);
            arr[E] = m;
            E++;
            previous = m;  // previous update
        }
    }



}