#include<iostream>
#include<cstdio>
#include<map>
#include<set>
#include<cstdlib>
#define uli long long int

bool happy(uli number) {
  static std::map<uli, uli> cache;

  std::set<uli> cycle;
  while (number != 1 && !cycle.count(number)) {
    if (cache.count(number)) {
      number = cache[number] ? 1 : 0;
      break;
    }
    cycle.insert(number);
    uli newnumber = 0;
    while (number > 0) {
      uli digit = number % 10;
      newnumber += digit * digit;
      number /= 10;
    }
    number = newnumber;
  }
  bool happiness = number == 1;
  for (std::set<uli>::const_iterator it = cycle.begin();
       it != cycle.end(); it++)
    cache[*it] = happiness;
  return happiness;
}

int main(void){
	uli a,b,n,i;
	int count;
	bool flag=false;
	char A[100],B[100],N[100],*arr;
	scanf("%s",A);
	scanf("%s",B);
	scanf("%s",N);
	a=strtoll(A,&arr,10);
	b=strtoll(B,&arr,10);
	n=strtoll(N,&arr,10);
	//printf("%d\n%d\n%d\n",a,b,n);
	if(a==0 || b==0)
		flag=true;
	else if(n==0)
		flag=true;
	if(flag==true){
		printf("Invalid Input\n");
		return 0;
		}
	uli sum=0;
	for(i=1;sum<a;i++){
		sum+=i;
	}
	count=0;
		for(;sum<=b;i++){
			if(happy(sum)){
				count++;
				if(count==n){
					printf("%llu\n",sum);
					return 0;
				}
			}
		sum+=i;
		}
        printf("No number is present at this index\n");
	return 0;
	}




