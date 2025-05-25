[1mdiff --git a/main.c b/main.c[m
[1mindex 644fcc0..538574c 100644[m
[1m--- a/main.c[m
[1m+++ b/main.c[m
[36m@@ -1,15 +1,15 @@[m
[31m-#include <stdio.h>[m
[31m-[m
[31m-long factorial(int num)[m
[32m+[m[32m#include<stdio.h>[m
[32m+[m[32m#include<conio.h>[m
[32m+[m[32mint  main()[m
 {[m
[31m-    long f = 1;[m
[31m-    for (int i = 2; i <= num; i++)[m
[31m-        f = f * i;[m
[31m-    return f;[m
[32m+[m	[32mint fact=1,i,n;[m
[32m+[m	[32mprintf("enter a number");[m
[32m+[m	[32mscanf("%d",&n);[m
[32m+[m	[32mfor(i=1;i<=n;i++)[m
[32m+[m	[32m{[m
[32m+[m		[32mfact=fact*i;[m
[32m+[m	[32m}[m
[32m+[m	[32mprintf("the factorial is %d",fact);[m
[32m+[m	[32mreturn 0;[m
[32m+[m[41m	[m
 }[m
[31m-[m
[31m-int main()[m
[31m-{[m
[31m-    printf("Factorial = %ld", factorial(5));[m
[31m-    return 0;[m
[31m-}[m
\ No newline at end of file[m
