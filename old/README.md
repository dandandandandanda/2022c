# 2022c
資傳一甲 程式倉庫

# week06 

## week-6-1

```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("ÆN¬[:%d¼Ó %d¬P\n", i, star);
    }
}
```

# week06 

## week-6-2

```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star= i*2-1;
        for(int k=0; k<space; k++){
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }
        printf("ÆN¬[:%d¼Ó %dªÅ®æ %d¬P\n", i, space, star);

    }
}
```

# week06 

## week-6-3

```cpp
#include <stdio.h>
int main()
{
    printf("½Ð¿é¤J2­Ó¼Æ: ");
    int a, b, ans;
    scanf("%d %d", &a ,&b);

    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0) ans=i;
    }
    printf("§ä¨ìans:%d", ans);
}
```

# week06 

## week-6-4

```cpp
#include <stdio.h>
int main()
{
     printf("½Ð¿é¤J2­Ó¼Æ¦r: ");
    int a, b, c;
    scanf("%d %d", &a ,&b);

    while(1){
        c = a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("¤¤ªº¬O:%d", b);
}
```

# week06 

## week-6-5

```cpp
#include <stdio.h>
int main()
{
    int a=10;

    if(-999 ) printf("-999成立\n");
    if(-3 ) printf("-3成立\n");
    if(-2 ) printf("-2成立\n");
    if(-1 ) printf("-1成立\n");
    if( 0 ) printf("0不成立,所以什麼都沒印\n");
    if( 1 ) printf("1成立\n");
    if( 2 ) printf("2成立\n");
    if( 3 ) printf("3成立\n");
    if( 4 ) printf("4成立\n");
    if( 999 ) printf("999成立\n");
    if( "a==0" ) printf("不管什麼東西,幾乎都成立\n");
}
```

## week-7-1

```cpp
#include <stdio.h>
int main()
{
    int n = 1234567812345678;
    printf("%d\n", n);

    long long int a = 1234567812345678;
    printf("%lld\n", a);
}

```

## week-7-2

```cpp
#include <stdio.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for(long long int i = 1; i<=a; i++){
        if ( a%i==0 && b%i==0 ) ans = i;
    }
    printf("答案是:%lld\n", ans);
}

```

## week-7-3

```cpp
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld%lld", &a, &b );

    while(1){
        c = a%b;
        printf("%lld %lld %lld\n", a, b, c);
        if (c=0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n",b);
}

```

## week-7-4

```cpp
#include <stdio.h>
int main()
{
    int n=1234;
    printf("一千元有:%d張\n", n/1000 );
    n = n %1000;
    printf("一百元有:%d張\n", n/100 );
    n = n %100;
    printf("十元有:%d枚\n", n/10 );
    n = n %10;
    printf("一元有:%d枚\n", n);
}

```

## week-8-1

```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
                if( k<= n-i ) printf(" ");
                else printf("*");
        }
        printf("\n");
    }
}
```

## week-8-2

```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n){
            if( k<=n-i )printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```

## week-8-3

```cpp
#include <stdio.h>
int main()
{
	int a;
    scanf("%d", &a);

    for(int n=2; n<=a; n++){
    	int bad=0;
    	for(int i=2; i<n; i++){
        if( n%i==0 ) bad=1;
        }
        if(bad==0) printf("%d ", n);
    }
}
```


## week-8-4

```cpp
#include <stdio.h>
int main()
{
	int a;
    scanf("%d", &a);

    for(int n=2; n<=a; n++){
    	int bad=0;
    	for(int i=2; i<n; i++){
        if( n%i==0 ) bad=1;
        }
        if(bad==0) printf("%d ", n);
    }
}
```
