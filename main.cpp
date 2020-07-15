#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
  
    while(t--){
        
        int N,K;
        cin>>N;
        cin>>K;
        
        int loss = 0;
        
        for(int i=0; i<N; i++){
            int current_price;
            cin>>current_price;
            
            if(current_price > K){
                loss += current_price - K;
            }
        }
        cout<<loss<<endl;
    }

	return 0;
}
