#include <stdio.h>
#include <math.h>  

float multiply(void);
float add(void);
float subtract(void);
float divide(void);
float average(float*, float*);
float median(float*);

int main() {
    char operation ;
    float k, r, b, z, min, max;
    printf("Specify Operation\n");
    scanf("%c", &operation) ; 
    if (operation == '*') {
        printf("Multiply\n");
        r = multiply() ;
    }
    
    if (operation == '+') {
        printf("Add\n");
        r = add() ;
    }

    if (operation == '-') {
        printf("Subtract\n");
        r = subtract() ;  
    }

    if (operation == '/') {
        printf("Divide\n");
        r = divide() ;
    }

    if (operation == 'A') {
        printf("Average\n");
        r = average(&min, &max) ;
        printf("min = %f max = %f range = %f\n", min, max, max-min);
    }

     if (operation == 'M') {
        printf("Median\n");
        r = median(&z) ;
        printf("mode = %f\n", z) ;
    } 
    

    printf("%f", r);
    return 0;
}


float multiply() {
    float k, r, b ;
    r = 1 ; 
    while (scanf("%f", &k) > 0 ) {
        r = r * k ;
        }
    return r ; 
}

float add() {
    float k, r, b ;
    r = 0 ; 
    while (scanf("%f", &k) > 0 ) {
        r = r + k ;
        }
    return r ; 
}

float subtract() {
    float k, r, b ;
    scanf("%f", &r) ; 
    while (scanf("%f", &k) > 0 ) {
        r = r - k ;
        }
    return r ; 
}

float divide() {
    float k, r, b ;
    scanf("%f", &r) ; 
    while (scanf("%f", &k) > 0 ) {
        r = r/k ;
        }
    return r ; 
}

float average(float*min, float*max) {
    float k, r, count, a, range  ;
    r = 0 ; 
    count = 0 ;
    while (scanf("%f", &k)) {
        r = r + k ; 
        count = count + 1 ;
        if (count == 1) 
        {
            *min = k ;
            *max = k ;
        }  
        if (k < *min ) 
            {
            *min = k;
            }
        if (k > *max)
        {
            *max = k;
        }
        }
    a = r / count ;
    range = *max - *min ;
    return a ;
}

float median(float*z) {
    float arr[100] ;
    float sorted_arr[100];
    float brr[100] ;
    float crr[100] ;
    float mode, p ;
    int i, j, x, v, count;
    i = 0 ;
    v = 0 ;
    while (scanf("%f", &arr[i])) {
        count = i;
        i = i + 1 ;
        if (i >100) {break;}
    }

    for (j = 0; j <= count; j++)
    {
        for (i = j; i <= count; i++)
        {
            if (arr[j] > arr[i]) {
                x = arr[i] ;
                arr[i] = arr[j] ;
                arr[j] = x ; 
            }
        }
    }
    
    i = 0 ;
    brr[0] = arr[0];

    for (i = 0 ; i <= count; i++)

    {
        if (arr[i] == brr[v])
        {
            crr[v]++ ;
        }

        else 
        {
            v++ ;
            brr[v] = arr[i] ;
            crr[v] = 1 ; 
        }
    }

    mode = 0 ;

    for (i = 0 ; i < v; i++) 
    {
    if (mode < crr[i])
    {
        mode = crr[i] ;
        *z = brr[i] ;
    }
    }

    if ( count % 2 == 0){
        int median_location = count/2;
        return arr[median_location] ; 
    }
    
    else{
        int median_location = count/2;
        return (arr[median_location] + arr[median_location + 1])/2 ;
    } 
}
