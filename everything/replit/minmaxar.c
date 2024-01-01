#include <stdio.h>

int Find_Min(int num[5]) {
  int min, temp;
  for(int i = 0 ; i < 5 ; i++) {
    for(int j = i + 1 ; j < 5 ; j++) {
      if(num[i] > num[j]) {
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
    }
  }
  return num[0];
}

int Find_Max(int num[5]) {
  int max, temp;
  for(int i = 0 ; i < 5 ; i++) {
    for(int j = i + 1 ; j < 5 ; j++) {
      if(num[i] > num[j]) {
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
      }
    }
  }
  return num[4];
}

int main(void) {
  int min, max;
  int ar_size = 5;
  int num[ar_size];
  printf("Enter 5 numbers : ");
  for(int i = 0 ; i < 5 ; i++) {
    scanf("%d", &num[i]);
  }
  min = Find_Min(num);
  printf("%d ", min);
  max = Find_Max(num);
  printf("%d", max);
  
  return 0;
}



// #include <stdio.h>

//  int min(int a[5]){
//   for(int i = 0 ; i < 5 ;i++){
//     for(int j = 0 ; j < 5-i-1;j++){
//       if(a[j]>a[j+1]){
//         int temp = a[j];
//         a[j]=a[j+1];
//         a[j+1]=temp;
//       }
//     }


//  }
//    return a[0];
//  }
//        int max(int a[5]){
//      for(int i = 0 ; i < 5 ;i++){
//     for(int j = 0 ; j < 5-i-1;j++){
//       if(a[j]>a[j+1]){
//         int temp = a[j];
//         a[j]=a[j+1];
//         a[j+1]=temp;
//       }
//     }


//  }
//          return a[4];
//       }
// int main(void) {
//   int a[5];
//   for(int i=0;i<5;i++){
//   scanf("%d",&a[i]);
//   }
//  int x = min(a);
//   int y =max(a);
//   printf("%d %d",x,y);
//   }