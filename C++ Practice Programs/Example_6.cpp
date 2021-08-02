/* Complete the update function in the editor below.

update has the following parameters:

int *a: an integer
int *b: an integer
Returns

The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference. 
 a'= a+b 
 b' = |a-b|   */


 #include <stdio.h>
 #include<iostream>
 using namespace std;

void update(int *a,int *b) {
    // Complete this function  
    int sum = *a + *b;  
    int diff = ((*a-*b)>0)? *a-*b:-(*a-*b);
    *a=sum;
    *b=diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cout<<"Enter a and b: ";
    cin>>a>>b;
    update(pa, pb); // this pa & pb is giving address of a and b
    cout<<"sum= "<<a<<endl<<"Absolute diff= "<<b;

    return 0;
}