#include <iostream>

using namespace std;
char* strcat(char* s1, char* s2);
char* strset(char* str, char* ch);
char* strmove(char* s, int n);
int main() {
  char s1[] = "Hallo ";
  char s2[] = "World";
  char str[] = "hello";
  char ch[] = "S";
  char s[] = "hello";
  int n = 2;
  cout << strmove(s, n) << endl;
  cout << strcat(s1,s2) << endl;
  cout << strset(str,ch) << endl;
  return 0;
}
char* strcat(char* s1, char* s2)
{
  int count1 = 0;
  int count2 = 0;
  while(*(s1+count1)!= '\0') {
    count1++;
  }
  while(*(s2+count2)!= '\0') {
    count2++;
  }

  int count = count1 + count2+1;
  for (int i = 0, j=0; i < count; i++)
  {
    if(i >= count1)
    {
      *(s1+i) = *(s2+j);
      j++;
    }
  }
  return s1;
}
char* strset(char* str, char* ch)
{
  int count1 = 0;
  while(*(str+count1)!= '\0') {
    *(str+count1) = *ch;
    count1++;
  }
  return str;
}
char* strmove(char* s, int n)
{
  int count1 = 0;
  char ch1[1];
  while(*(s+count1)!= '\0') {
    count1++;
  }
  while (n)
  {
    for (int i = 0; i < count1; i++)
    {
        *ch1 = *(s+i);
        *(s+i) = *(s+count1-1);
        *(s+count1-1) = *ch1;
    }
    n--;
  }
  return s;
}