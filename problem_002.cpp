#include<iostream>
#include<vector>

int main()
{
  int a = 0;
  int l = 0;
  std::vector <int> fibonacci;
  fibonacci.push_back(1);
  fibonacci.push_back(2);
  while(true)
    {
      l = fibonacci.size();
      a = fibonacci[l-2] + fibonacci[l-1];
      if(a>4000000)
	{
	  break;
	}
      fibonacci.push_back(a);
    }
  int sum = 0;
  for(int x : fibonacci)
    {
      if(x%2==0)
	{
	  sum += x;
	}
    }
  std::cout << sum << std::endl;
}
