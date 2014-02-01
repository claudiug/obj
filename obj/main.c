//
//  main.c
//  obj
//
//  Created by claudiu on 2/1/14.
//  Copyright (c) 2014 claudiu. All rights reserved.
//

#include <stdio.h>
#include <objc/objc.h>
//#include "demo.c"

struct Person {
    float weight;
    char *name;
    int kilos;
};

typedef struct {
    int result;
    
} Demo;

int answer = 42;
char  *name = "Claudiu";
void sayHi(char *student, char *course, int days){
    printf("%s has done as much %s programming as I could do in %d days!", student, course, days);
}

void singFor(int numberOfButtles)
{
    if (numberOfButtles == 0) {
        printf("this is no buttles on the wall\n");
    }else{
        printf("%d is the number of butles on the wall\n. %d bottles on the wall\n", numberOfButtles, numberOfButtles);
        int less = numberOfButtles - 1;
        singFor(less);
    }
}

int main(int argc, const char * argv[])
{
//    short i;
//    int l;
//    long ll;
//    float huge;
//    double not;
//    char s;
//    struct GeoLocation{
//        float lat;
//        float lgn;
//    };

    // insert code here...
    printf("Hello, World!\n");
    float w = 15.2;
    printf("this is %f:\n", w);
    float timeOfCooking =  w * 12.3;
    printf("time for cooking: %f\t\t minutes\n", timeOfCooking);
//    BOOL isNotEqual = 1 < 3;
    sayHi("Perter", "Griffin", 23);
//    singFor(10);
    printf(name);
    struct Person c;
    c.kilos = 10;
    c.name = "claudiu";
    c.weight = 34;
    return 0;
}

