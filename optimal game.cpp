#include <iostream>
using namespace std;

int optimal_game(int *coins, int i,int j){
  //Base case
  if(i>j){
    return 0;
  }
  //Rec case
  int pickFirst = coins[i] + min(optimal_game(coins,i+2,j),optimal_game(coins,i+1,j-1));
  int pickLast = coins[j] + min(optimal_game(coins,i+1,j-1),optimal_game(coins,i,j-2));

  int ans = max(pickFirst,pickLast);

  return ans;

}

int main() {
  int n;
  cin>>n;
  int coins[40];
  for(int i=0;i<n;i++){
        cin >> coins[i];
    }
  cout<<optimal_game(coins,0,n-1);

    return 0;
}
