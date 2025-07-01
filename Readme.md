# Scc2
### Code Ver.2 (fixed)
`#include<stdio.h>`
`int main() {  Code  }`
- **req1**
```
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
printf("\ndo While loop:\n");
    j = 1;
    do {
        printf("%d. ",j );
        printf("%s\n", text);
        j++;
    } while (j <= 10);


```
> Terminal log:

> For loop:
> 1. supakrid boonyong 4/3 No.32
> 2. supakrid boonyong 4/3 No.32
> 3. supakrid boonyong 4/3 No.32
> 4. supakrid boonyong 4/3 No.32
> 5. supakrid boonyong 4/3 No.32
> 6. supakrid boonyong 4/3 No.32
> 7. supakrid boonyong 4/3 No.32
> 8. supakrid boonyong 4/3 No.32
> 9. supakrid boonyong 4/3 No.32
> 10. supakrid boonyong 4/3 No.32
> 
> while:
> 1. supakrid boonyong 4/3 No.32
> 2. supakrid boonyong 4/3 No.32
> 3. supakrid boonyong 4/3 No.32
> 4. supakrid boonyong 4/3 No.32
> 5. supakrid boonyong 4/3 No.32
> 6. supakrid boonyong 4/3 No.32
> 7. supakrid boonyong 4/3 No.32
> 8. supakrid boonyong 4/3 No.32
> 9. supakrid boonyong 4/3 No.32
> 10. supakrid boonyong 4/3 No.32
> 
> do While loop:
> 1. supakrid boonyong 4/3 No.32
> 2. supakrid boonyong 4/3 No.32
> 3. supakrid boonyong 4/3 No.32
> 4. supakrid boonyong 4/3 No.32
> 5. supakrid boonyong 4/3 No.32
> 6. supakrid boonyong 4/3 No.32
> 7. supakrid boonyong 4/3 No.32
> 8. supakrid boonyong 4/3 No.32
> 9. supakrid boonyong 4/3 No.32
> 10. supakrid boonyong 4/3 No.32

![image (7)](https://github.com/user-attachments/assets/a518bdd1-86b6-40ae-b7eb-d8636719209f)



- **req2**
(fixed: The word "Hello" should be on the same line)
```
int n;
    printf("PLS ENTER NUMBER: ");
    scanf("%d", &n); 
    while ( n >=1 ) {
        printf("Hello ");
       
        n--;

    }
```
> Terminal log:

> PLS ENTER NUMBER: 14
> Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello Hello 

![Screenshot 2025-07-01 194858](https://github.com/user-attachments/assets/0456e0fa-6bc5-42f3-aae5-cd9c0d764022)



- **req3**

```
// 4 and 7
printf("\n");
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
```
> Terminal log:

> 1
> 2
> 3
> FOUR
> 5
> 6
> SEVEN
> 8
> 9
> 10

![image (9)](https://github.com/user-attachments/assets/293477ab-0ad7-4775-b8fa-1f4b23944bf7)



- **req4**
(fixed: New numbers that lower than previous numbers shouldn't be printed)
```
 // array max1000
 int arr[1000];    
  // index array
    int E = 1;       
    int m;
    int running = 1;
    int previous = 0;

    while (running) {
        printf("PLS ENTER NUMBER (func2): ");
        scanf("%d", &m);

        if (m == 0) {
            printf("Bye\n");
            break;
        } else if (previous >= m) {
            printf("Too low, Try again\n");
        } else {
            printf("   %d\n", m);
            arr[E] = m;
            E++;
            previous = m;  // previous update
        }
    }
```

> Terminal log:

> PLS ENTER NUMBER (func2): 1
> 1
> PLS ENTER NUMBER (func2): 1
> Too low, Try again
> PLS ENTER NUMBER (func2): 1
> Too low, Try again
> PLS ENTER NUMBER (func2): 2
> 2
> PLS ENTER NUMBER (func2): 2
> Too low, Try again
> PLS ENTER NUMBER (func2): 1
> Too low, Try again
> PLS ENTER NUMBER (func2): 1
> Too low, Try again
> PLS ENTER NUMBER (func2): 1
> Too low, Try again
> PLS ENTER NUMBER (func2): 2
> Too low, Try again
> PLS ENTER NUMBER (func2): 10
> 10
> PLS ENTER NUMBER (func2): 9
> Too low, Try again
> PLS ENTER NUMBER (func2): 0
> Bye


![Screenshot 2025-07-01 193600](https://github.com/user-attachments/assets/5b823902-d542-47cf-81b5-6109080cd38e)



- **req5**
(fixed: The variable should be set after printed)
```

int x;
x = 5;
while (x<50){
   
    printf("%d\n",x);
     x = x +5;
}
```

> Terminal log:

> 5
> 10
> 15
> 20
> 25
> 30
> 35
> 40
> 45

![unnamed](https://github.com/user-attachments/assets/0d3a7ef9-13f1-475d-b7e0-ad04b026004c)
