#include<iostream>

int main()
{
  int sum {};
  for(int a = 1;a<1000;a++)
    {
      if(a%3==0 or a%5==0)
	{
	  sum += a;
	}
    }
  std::cout << sum << "\n";
}
