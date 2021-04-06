#include <iostream>
using namespace std;

int main(){
  int n, k, q, intermediate, i;
  cin >> n;
  int levelscombined[n];

  //initialize array to {0}
  for (i=0;i<n;i++){
    levelscombined[i] = 0;
  }

  cin >> k;
//put levels of little x into levelscombined
  for (i=0; i<k;i++){
    cin >> intermediate;
    if (levelscombined[intermediate-1] == 0){
      levelscombined[intermediate-1] = intermediate;
      //cout << "levelscombined of " << intermediate-1 << " is " << intermediate << endl;
    }
  }
//put levels of little y into levelscombined
  cin >> q;
  for (i=0; i<q;i++){
    cin >> intermediate;
    if (levelscombined[intermediate-1] == 0){
      levelscombined[intermediate-1] = intermediate;
      //cout << "levelscombined of " << intermediate-1 << " is " << intermediate << endl;
    }else{
      //cout << "levelscombined of " << intermediate-1 << " is already " << levelscombined[intermediate-1] << endl;
    }
  }

//check whether levelscombined is complete
  i=0;
  while(i<n){
    if (levelscombined[i] == 0){
      cout << "Oh, my keyboard!";
      i = n+1;
      break;
    }
    i++;
  }
  if (i == n){
    cout << "I become the guy.";
  }
  return 0;
}
