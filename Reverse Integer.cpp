class Solution {
public:
    int reverse(int x) {
        if(x/10==0){
            return x;
        }      long int ans=0;
        if(x >=INT_MAX || x <= INT_MIN){
                return 0;
        }
        if(x>0){
        while(x){
            ans=ans*10;
            if(ans>= INT_MAX || ans <= INT_MIN){
                return 0;
            }
                 ans=ans+(x%10);
                x=x/10;      
        }
        }
        else{
            x=x*-1;
            while(x){
             ans=ans*10;
               if(ans>= INT_MAX || ans <= INT_MIN){
                return 0;
            }
            ans=ans+(x%10);
                x=x/10;
        }ans=ans*-1;
         }
          return int(ans);
        }
};
