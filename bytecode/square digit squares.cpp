#include<cstdio>
#define big 10000000000llu
#define ll unsigned long long

inline bool is_square(ll num){
	ll i;
	for( i=1;i*i<num;i++);
	if(i*i==num)
		return true;
	return false;
}
inline bool is_digitsquare(ll num){
	int  k;
	while(num){
		k=(int)(num%10);
		num=num/10;
		switch(k){
			case 1:
			case 4:
			case 9:
			case 0:
				while(false);
				break;
			default:
				return false;
				break;
		}
	}
	return true;
}

int main(void){
	freopen("sdsquare.txt","w",stdout);
	//generate
	ll i;
	int count=0;
	for(i=1;i*i<=big;i++){
		//if(is_square(i)){
			if(is_digitsquare(i*i))
				printf("arr[%d]=%llullu;\n",count++,i*i);
		//}
	}
	return 0;
}
