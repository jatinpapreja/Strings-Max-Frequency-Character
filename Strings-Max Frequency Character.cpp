#include<iostream>
using namespace std;
int maxx_pos(int a[])
{
  int i=1,s=a[0],pos=0;
  for(i;i<26;i++)
  if(s<a[i])
  {
    s=a[i];
    pos=i;
  }
  return pos;
}
int main() {
  char s[1000];
  cin.getline(s,1000);
  int fr[26]={0};
  int i=0;
  while(s[i]!='\0')
  {
    fr[s[i]-'a']+=1;
    i++;
  }
  int pos=maxx_pos(fr);
  cout<<char(pos+97);
	return 0;
}
