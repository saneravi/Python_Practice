//queue of vectors
#include<bits/stdc++.h> 
using namespace std; 
void solve(); 
void seed_rand(void)
{
   time_t t;
   int t_val = time(&t);
   srand(t_val);
}
int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin); 
   freopen("error.txt", "w", stderr); 
   freopen("output.txt", "w", stdout); 
   #endif 
   
   int t=1; 
   cin>>t; 
   while(t--) 
   { 
      solve(); 
      cout<<"\n"; 
   } 
   
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0; 
} 

void solve() 
{
   vector <int> a; int n, x, summ=0, ans=0;
   cin>>n;
   a.push_back(0);
   for(int i=1; i<=n; ++i)
   {
      cin>>x;
      a.push_back(x + a[i-1]);      
   }   
   

   if(!a[n]%3)
   {  
      summ = a[n]/3;
      int count=0;
      for(int j=1; j< n; ++j)
      {         
         if(a[j] == 2*summ)
         {
            ans += count;
         }

         if(a[j] == summ)
         {
            count++;
         } 

      }




   }
   cout<<ans;

}


