#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

int main(void)
{

  int t,l,k;
  int i,flag;
  std::string sa,sb;
  char s[100];

  fastRead_int(t);
  while(t--){
	scanf("%s",s);
	l=strlen(s);
	std::string str (s, l);
	flag=1;
	for(k=l;k>1;k--){
		for(i=0;i+k<=l;i=i+1){

			sa=str.substr(i,k);// get the substring of str starting at i and of length k
			sb= string ( sa.rbegin(), sa.rend() );// reverse the string using vectors
			 if (std::string::npos == str.find(sb))// find substring contained in string if yes then return position else return std::npos
			 {
				flag=0;
				break;
			}
		}
	if(flag==0)
		break;
	}
	if(flag)
		printf("YES\n")	;
	else
		printf("NO\n");


	}
	/*
	std::string str (s, strlen(s));

	if (std::string::npos != str.find(str.substr (12,12)))
{
  std::cout << "found!" << std::endl;
}
  */
  return 0;
