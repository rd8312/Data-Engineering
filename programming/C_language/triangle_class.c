#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 

int none_triangle(int a, int b, int c){
    int none = 0;
    if(a+b<=c){
        none = 1;
    }
    return none;
}
 
 
int right_triangle(int a, int b, int c){
    int right = 0;
    if(pow(a,2)+pow(b,2)==pow(c,2)){
        right = 1;
    }
    return right;
}
 
int acute_triangle(int a, int b, int c){
    int acute = 0;
    if(pow(a,2)+pow(b,2)>pow(c,2)){
        acute = 1;
    }
    return acute;
}
 
int obtuse_triangle(int a, int b, int c){
    int obtuse = 0;
    if(pow(a,2)+pow(b,2)<pow(c,2)){
        obtuse = 1;
    }
    return obtuse;
}
void print_array(char arr[]){
    int length = strlen(arr);
    int i;
    if(length!=0){
        for(i=0;i<length;i++){
            if(i<length-1){
                printf("%c,", arr[i]);
            }
            else if(i==length-1){
                printf("%c\n", arr[i]);
            }
        }
    }
    else{
        printf("None\n");
    }
}
 
 
 
int main(int argc, char *argv[]) {
    char key;
    int i, j, temp;
    int l1, l2, l3, l4;
    int arr[3] = {};
    char none[20] = {};
    char right[20] = {};
    char obtuse[20] = {};
    char acute[20] = {};
 
    while(1){
        scanf(" %c", &key);
        if(key=='-'){
            break;
        }
        scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                if(arr[j]>arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }   
        }
        if(none_triangle(arr[0], arr[1], arr[2])){
            l1 = strlen(none);
            none[l1] = key;
        }
        if(right_triangle(arr[0], arr[1], arr[2])&&none_triangle(arr[0], arr[1], arr[2])==0){
            l2 = strlen(right);
            right[l2] = key;
        }
        if(acute_triangle(arr[0], arr[1], arr[2])&&none_triangle(arr[0], arr[1], arr[2])==0){
            l3 = strlen(acute);
            acute[l3] = key;
        }
        if(obtuse_triangle(arr[0], arr[1], arr[2])&&none_triangle(arr[0], arr[1], arr[2])==0){
            l4 = strlen(obtuse);
            obtuse[l4] = key;
        }   
    }
 
    int num_none, num_right, num_acute, num_obtuse;
    num_none = strlen(none);
    for(i=0;i<num_none;i++){
        for(j=0;j<num_none-1;j++){
            if(none[j]>none[j+1]){
            temp = none[j];
            none[j] = none[j+1];
            none[j+1] = temp;
            }
        }   
    }
    num_right = strlen(right);
    for(i=0;i<num_right;i++){
        for(j=0;j<num_right-1;j++){
            if(right[j]>right[j+1]){
            temp = right[j];
            right[j] = right[j+1];
            right[j+1] = temp;
            }
        }   
    }
    num_acute = strlen(acute);
    for(i=0;i<num_acute;i++){
        for(j=0;j<num_acute-1;j++){
            if(acute[j]>acute[j+1]){
            temp = acute[j];
            acute[j] = acute[j+1];
            acute[j+1] = temp;
            }
        }   
    }
    num_obtuse = strlen(obtuse);
    for(i=0;i<num_obtuse;i++){
        for(j=0;j<num_obtuse-1;j++){
            if(obtuse[j]>obtuse[j+1]){
            temp = obtuse[j];
            obtuse[j] = obtuse[j+1];
            obtuse[j+1] = temp;
            }
        }   
    }
 
    printf("Not Triangle: ");
    print_array(none);
    printf("Acute Angle: ");
    print_array(acute);
    printf("Obtuse Angle: ");
    print_array(obtuse);
    printf("Right Angle: ");
    print_array(right);
 
    return 0;
}
