#include<iostream>
using namespace std;
int main()
{
  
  int num, count=0;

  
  cout << "Enter a Positive Integer: ";
  cin >> num;
  
  
  if(num<=1) count++;
  
  
  for (int i=2; i <= num/2; i++)
  {
    if (num % i == 0){
        count++;
        break;
    }
  }

  
  if (count == 0)
     cout << "Prime Number." << endl;
  else
     cout << "Not a Prime Number." << endl;

  return 0:
}
