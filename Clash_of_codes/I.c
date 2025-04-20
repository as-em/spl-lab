// https://codeforces.com/problemset/problem/1669/B

  
#include <stdio.h>
 
int main() {
    int t,  n;
    scanf("%d", &t);
 
    while(t--){
        int r = -1;
        int my[200001]={0};
        scanf("%d", &n);
 
        for(int i =0; i<n; i++){
             int x;
             scanf("%d",&x);
             my[x]++;

             if(my[x] == 3){
                r = x;
             }         
        }
        printf ("%d\n",r);
    }
    
 
return 0;
}
 



// hmmmmm chole but chole na . choto test case er jonno nicher ta

// #include <stdio.h>

// int main() {
//     int t, r, n;
//     scanf("%d", &t);
//     while(t--){

//         scanf("%d", &n);
//         int ar[n];
//         for(int i =0; i<n; i++){
//              scanf("%d",&ar[i]);
//         }
//         int count= 0;
//         for(int i =0; i<n; i++){
//                  r=ar[i];
//                for(int j=0; j<n; j++){
//                     if(ar[j]==r) count++;
//                }
//                if(count>=3){
                  
//                     break;
//                }
//                count= 0;
//         } 
//         if(count >= 3){
//            printf ("%d\n",r);
//         }
//         else{
//           printf("-1\n");
//         }
  
//     }
    

// return 0;
// }

 